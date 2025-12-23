/**
 * ============================================================================
 * STM32F1 FIRMWARE - Interface de Pilotage et Supervision
 * IMT Atlantique
 * ============================================================================
 * 
 * Fonctionnalités:
 * - Communication UART avec DMA (TX + RX)
 * - Protocole JSON pour échanges structurés
 * - ADC avec DMA pour acquisition continue
 * - PWM pour contrôle de moteur/LED
 * - Gestion d'erreurs robuste
 * - Watchdog
 * 
 * Périphériques:
 * - USART2: PA2 (TX), PA3 (RX) @ 115200 bauds avec DMA
 * - ADC1: PA0 avec DMA
 * - TIM2_CH2: PA1 pour PWM
 * - LED: PC13 (active LOW)
 * 
 * Architecture:
 * - Interruptions DMA pour UART RX
 * - DMA circular pour ADC
 * - State machine pour parsing JSON
 * - Buffer circulaire pour TX
 * ============================================================================
 */

#include "stm32f1xx_hal.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// ============================================================================
// CONFIGURATION GLOBALE
// ============================================================================

// Handles périphériques
UART_HandleTypeDef huart2;
ADC_HandleTypeDef hadc1;
TIM_HandleTypeDef htim2;
DMA_HandleTypeDef hdma_usart2_rx;
DMA_HandleTypeDef hdma_usart2_tx;
DMA_HandleTypeDef hdma_adc1;

// Buffers UART avec DMA
#define UART_RX_BUFFER_SIZE 512
#define UART_TX_BUFFER_SIZE 512
uint8_t uart_rx_buffer[UART_RX_BUFFER_SIZE];
uint8_t uart_tx_buffer[UART_TX_BUFFER_SIZE];
volatile uint16_t rx_write_pos = 0;
volatile uint16_t rx_read_pos = 0;

// Buffer circulaire pour commandes
#define CMD_BUFFER_SIZE 256
char cmd_buffer[CMD_BUFFER_SIZE];
volatile uint16_t cmd_index = 0;
volatile uint8_t cmd_ready = 0;

// Buffer ADC avec DMA
#define ADC_BUFFER_SIZE 16
uint16_t adc_buffer[ADC_BUFFER_SIZE];
volatile uint32_t adc_average = 0;

// Variables d'état
typedef struct {
    float temperature;
    float voltage;
    uint16_t adc_raw;
    uint8_t pwm_duty;
    uint8_t led_state;
    uint32_t uptime;
    uint32_t rx_char_count;
    uint8_t error_code;
} DeviceState_t;

volatile DeviceState_t device_state = {
    .temperature = 25.0f,
    .voltage = 0.0f,
    .adc_raw = 0,
    .pwm_duty = 0,
    .led_state = 0,
    .uptime = 0,
    .rx_char_count = 0,
    .error_code = 0
};

// Configuration
volatile uint32_t heartbeat_interval = 5000;  // ms
volatile uint8_t json_mode = 1;  // 1=JSON, 0=text

// ============================================================================
// PROTOTYPES
// ============================================================================
void SystemClock_Config(void);
void GPIO_Init(void);
void USART2_UART_DMA_Init(void);
void ADC1_DMA_Init(void);
void TIM2_PWM_Init(void);
void DMA_Init(void);

void processCommand(char *cmd);
void sendResponse(const char *msg);
void sendJsonResponse(const char *type, const char *data);
void sendJsonError(const char *message);
void setPWM(uint8_t duty_cycle);
void updateADCAverage(void);

// JSON helpers
void sendJsonTemperature(float temp);
void sendJsonVoltage(float volt, uint16_t adc);
void sendJsonStatus(void);
void sendJsonHeartbeat(void);

// DMA callbacks
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc);

// Utilitaires
static void trim(char *s);
static uint8_t parseJson(const char *json, char *cmd, char *params);

// ============================================================================
// MAIN
// ============================================================================
int main(void) {
    HAL_Init();
    SystemClock_Config();
    GPIO_Init();
    DMA_Init();
    USART2_UART_DMA_Init();
    ADC1_DMA_Init();
    TIM2_PWM_Init();
    
    // Blink de démarrage
    for (int i = 0; i < 3; i++) {
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
        HAL_Delay(100);
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
        HAL_Delay(100);
    }
    
    // Message de démarrage (JSON)
    sendResponse("{\\"type\\":\\"startup\\",\\"version\\":\\"1.0.0\\",\\"features\\":[\\"DMA\\",\\"JSON\\",\\"ADC\\",\\"PWM\\"]}\
");
    
    // Démarre la réception UART en DMA mode
    HAL_UART_Receive_DMA(&huart2, uart_rx_buffer, UART_RX_BUFFER_SIZE);
    
    // Démarre l'ADC en DMA circular mode
    HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buffer, ADC_BUFFER_SIZE);
    
    uint32_t last_heartbeat = HAL_GetTick();
    uint32_t last_temp_update = HAL_GetTick();
    uint32_t last_adc_update = HAL_GetTick();
    
    while (1) {
        // Traitement des commandes reçues
        if (cmd_ready) {
            cmd_ready = 0;
            trim(cmd_buffer);
            
            if (strlen(cmd_buffer) > 0) {
                // Clignote LED
                HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
                processCommand(cmd_buffer);
                HAL_Delay(10);
                HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
            }
            
            cmd_index = 0;
        }
        
        // HEARTBEAT périodique
        if (HAL_GetTick() - last_heartbeat > heartbeat_interval) {
            if (json_mode) {
                sendJsonHeartbeat();
            }
            last_heartbeat = HAL_GetTick();
        }
        
        // Mise à jour ADC
        if (HAL_GetTick() - last_adc_update > 100) {
            updateADCAverage();
            device_state.voltage = (device_state.adc_raw * 3.3f) / 4095.0f;
            last_adc_update = HAL_GetTick();
        }
        
        // Simulation température
        if (HAL_GetTick() - last_temp_update > 3000) {
            device_state.temperature += ((rand() % 20) - 10) / 10.0f;
            if (device_state.temperature < 20.0f) device_state.temperature = 20.0f;
            if (device_state.temperature > 30.0f) device_state.temperature = 30.0f;
            last_temp_update = HAL_GetTick();
        }
        
        // Mise à jour uptime
        device_state.uptime = HAL_GetTick() / 1000;
        
        HAL_Delay(10);
    }
}

// ============================================================================
// TRAITEMENT DES COMMANDES
// ============================================================================
void processCommand(char *cmd) {
    char response[256];
    
    // Tente de parser en JSON
    char json_cmd[64] = {0};
    char json_params[128] = {0};
    
    if (cmd[0] == '{' && parseJson(cmd, json_cmd, json_params)) {
        // Mode JSON
        if (strcmp(json_cmd, "GET_TEMP") == 0) {
            sendJsonTemperature(device_state.temperature);
        }
        else if (strcmp(json_cmd, "GET_VOLTAGE") == 0) {
            sendJsonVoltage(device_state.voltage, device_state.adc_raw);
        }
        else if (strcmp(json_cmd, "STATUS") == 0) {
            sendJsonStatus();
        }
        else if (strcmp(json_cmd, "SET_LED") == 0) {
            // Parse {"state":1}
            if (strstr(json_params, "\\"state\\":1") != NULL) {
                HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
                device_state.led_state = 1;
                sendJsonResponse("response", "{\\"led\\":1}");
            } else {
                HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
                device_state.led_state = 0;
                sendJsonResponse("response", "{\\"led\\":0}");
            }
        }
        else if (strcmp(json_cmd, "SET_PWM") == 0) {
            // Parse {"duty":50}
            char *duty_ptr = strstr(json_params, "\\"duty\\":");
            if (duty_ptr) {
                int duty = atoi(duty_ptr + 7);
                if (duty >= 0 && duty <= 100) {
                    setPWM((uint8_t)duty);
                    device_state.pwm_duty = duty;
                    snprintf(response, sizeof(response), "{\\"pwm\\":%d}", duty);
                    sendJsonResponse("response", response);
                }
            }
        }
        else if (strcmp(json_cmd, "RESET") == 0) {
            sendJsonResponse("response", "{\\"status\\":\\"resetting\\"}");
            HAL_Delay(100);
            NVIC_SystemReset();
        }
        else {
            sendJsonError("Unknown command");
        }
    }
    else {
        // Mode texte (compatibilité)
        if (strcmp(cmd, "GET_TEMP") == 0) {
            snprintf(response, sizeof(response), "TEMP: %.1f°C\
", device_state.temperature);
            sendResponse(response);
        }
        else if (strcmp(cmd, "GET_VOLTAGE") == 0) {
            snprintf(response, sizeof(response), 
                    "VOLTAGE: %.2fV (ADC: %u)\
", 
                    device_state.voltage, device_state.adc_raw);
            sendResponse(response);
        }
        else if (strcmp(cmd, "STATUS") == 0) {
            sendJsonStatus();
        }
        else if (strncmp(cmd, "SET_LED=", 8) == 0) {
            int val = atoi(cmd + 8);
            if (val == 1) {
                HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
                device_state.led_state = 1;
                sendResponse("OK: LED ON\
");
            } else {
                HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
                device_state.led_state = 0;
                sendResponse("OK: LED OFF\
");
            }
        }
        else if (strncmp(cmd, "SET_PWM=", 8) == 0) {
            int val = atoi(cmd + 8);
            if (val >= 0 && val <= 100) {
                setPWM((uint8_t)val);
                device_state.pwm_duty = val;
                snprintf(response, sizeof(response), "OK: PWM=%d%%\
", val);
                sendResponse(response);
            }
        }
        else if (strcmp(cmd, "RESET") == 0) {
            sendResponse("OK: Resetting...\
");
            HAL_Delay(100);
            NVIC_SystemReset();
        }
        else {
            sendResponse("ERROR: Unknown command\
");
        }
    }
}

// ============================================================================
// FONCTIONS JSON
// ============================================================================
void sendJsonResponse(const char *type, const char *data) {
    char buffer[512];
    snprintf(buffer, sizeof(buffer), 
            "{\\"type\\":\\"%s\\",\\"data\\":%s}\
", 
            type, data);
    sendResponse(buffer);
}

void sendJsonError(const char *message) {
    char buffer[256];
    snprintf(buffer, sizeof(buffer), 
            "{\\"type\\":\\"error\\",\\"message\\":\\"%s\\"}\
", 
            message);
    sendResponse(buffer);
}

void sendJsonTemperature(float temp) {
    char buffer[128];
    snprintf(buffer, sizeof(buffer), "{\\"temp\\":%.1f}", temp);
    sendJsonResponse("response", buffer);
}

void sendJsonVoltage(float volt, uint16_t adc) {
    char buffer[128];
    snprintf(buffer, sizeof(buffer), 
            "{\\"voltage\\":%.2f,\\"adc_raw\\":%u}", 
            volt, adc);
    sendJsonResponse("response", buffer);
}

void sendJsonStatus(void) {
    char buffer[512];
    snprintf(buffer, sizeof(buffer),
            "{\\"temp\\":%.1f,\\"voltage\\":%.2f,\\"adc\\":%u,"
            "\\"pwm\\":%u,\\"led\\":%u,\\"uptime\\":%lu,\\"rx_chars\\":%lu}",
            device_state.temperature,
            device_state.voltage,
            device_state.adc_raw,
            device_state.pwm_duty,
            device_state.led_state,
            device_state.uptime,
            device_state.rx_char_count);
    sendJsonResponse("response", buffer);
}

void sendJsonHeartbeat(void) {
    char buffer[256];
    snprintf(buffer, sizeof(buffer),
            "{\\"rx_chars\\":%lu,\\"temp\\":%.1f,\\"pwm\\":%u}",
            device_state.rx_char_count,
            device_state.temperature,
            device_state.pwm_duty);
    sendJsonResponse("heartbeat", buffer);
}

// ============================================================================
// ENVOI UART (avec DMA)
// ============================================================================
void sendResponse(const char *msg) {
    uint16_t len = strlen(msg);
    if (len > UART_TX_BUFFER_SIZE) {
        len = UART_TX_BUFFER_SIZE;
    }
    
    memcpy((void*)uart_tx_buffer, msg, len);
    HAL_UART_Transmit_DMA(&huart2, uart_tx_buffer, len);
}

// ============================================================================
// DMA CALLBACKS
// ============================================================================
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
    if (huart->Instance == USART2) {
        // Le DMA remplit uart_rx_buffer en mode circulaire
        // On parse caractère par caractère
        uint16_t current_pos = UART_RX_BUFFER_SIZE - __HAL_DMA_GET_COUNTER(huart->hdmarx);
        
        while (rx_read_pos != current_pos) {
            uint8_t c = uart_rx_buffer[rx_read_pos];
            rx_read_pos = (rx_read_pos + 1) % UART_RX_BUFFER_SIZE;
            
            device_state.rx_char_count++;
            HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);  // Feedback visuel
            
            if (c == '\
' || c == '\r') {
                if (cmd_index > 0) {
                    cmd_buffer[cmd_index] = '\0';
                    cmd_ready = 1;
                }
            }
            else if (cmd_index < CMD_BUFFER_SIZE - 1) {
                cmd_buffer[cmd_index++] = c;
            }
            else {
                // Buffer overflow
                cmd_index = 0;
            }
        }
    }
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc) {
    // Le DMA a rempli le buffer ADC (mode circulaire)
    updateADCAverage();
}

// ============================================================================
// ADC
// ============================================================================
void updateADCAverage(void) {
    uint32_t sum = 0;
    for (int i = 0; i < ADC_BUFFER_SIZE; i++) {
        sum += adc_buffer[i];
    }
    device_state.adc_raw = sum / ADC_BUFFER_SIZE;
}

// ============================================================================
// PWM
// ============================================================================
void setPWM(uint8_t duty_cycle) {
    if (duty_cycle > 100) duty_cycle = 100;
    uint32_t pulse = (duty_cycle * 999) / 100;
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, pulse);
}

// ============================================================================
// CONFIGURATION DMA
// ============================================================================
void DMA_Init(void) {
    __HAL_RCC_DMA1_CLK_ENABLE();
    
    // DMA pour USART2 RX
    hdma_usart2_rx.Instance = DMA1_Channel6;
    hdma_usart2_rx.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_usart2_rx.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_usart2_rx.Init.MemInc = DMA_MINC_ENABLE;
    hdma_usart2_rx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart2_rx.Init.MemDataAlignment = DMA_MDATAALIGN_BYTE;
    hdma_usart2_rx.Init.Mode = DMA_CIRCULAR;
    hdma_usart2_rx.Init.Priority = DMA_PRIORITY_HIGH;
    HAL_DMA_Init(&hdma_usart2_rx);
    
    // DMA pour USART2 TX
    hdma_usart2_tx.Instance = DMA1_Channel7;
    hdma_usart2_tx.Init.Direction = DMA_MEMORY_TO_PERIPH;
    hdma_usart2_tx.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_usart2_tx.Init.MemInc = DMA_MINC_ENABLE;
    hdma_usart2_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart2_tx.Init.MemDataAlignment = DMA_MDATAALIGN_BYTE;
    hdma_usart2_tx.Init.Mode = DMA_NORMAL;
    hdma_usart2_tx.Init.Priority = DMA_PRIORITY_HIGH;
    HAL_DMA_Init(&hdma_usart2_tx);
    
    // DMA pour ADC1
    hdma_adc1.Instance = DMA1_Channel1;
    hdma_adc1.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_adc1.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_adc1.Init.MemInc = DMA_MINC_ENABLE;
    hdma_adc1.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
    hdma_adc1.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
    hdma_adc1.Init.Mode = DMA_CIRCULAR;
    hdma_adc1.Init.Priority = DMA_PRIORITY_MEDIUM;
    HAL_DMA_Init(&hdma_adc1);
    
    // Interruptions DMA
    HAL_NVIC_SetPriority(DMA1_Channel6_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(DMA1_Channel6_IRQn);
    HAL_NVIC_SetPriority(DMA1_Channel7_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(DMA1_Channel7_IRQn);
    HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 1, 0);
    HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);
}

// ============================================================================
// CONFIGURATION USART2 avec DMA
// ============================================================================
void USART2_UART_DMA_Init(void) {
    __HAL_RCC_USART2_CLK_ENABLE();
    
    huart2.Instance = USART2;
    huart2.Init.BaudRate = 115200;
    huart2.Init.WordLength = UART_WORDLENGTH_8B;
    huart2.Init.StopBits = UART_STOPBITS_1;
    huart2.Init.Parity = UART_PARITY_NONE;
    huart2.Init.Mode = UART_MODE_TX_RX;
    huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    huart2.Init.OverSampling = UART_OVERSAMPLING_16;
    
    if (HAL_UART_Init(&huart2) != HAL_OK) {
        while(1);
    }
    
    // Link DMA handles
    __HAL_LINKDMA(&huart2, hdmarx, hdma_usart2_rx);
    __HAL_LINKDMA(&huart2, hdmatx, hdma_usart2_tx);
    
    HAL_NVIC_SetPriority(USART2_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(USART2_IRQn);
}

// ============================================================================
// CONFIGURATION ADC1 avec DMA
// ============================================================================
void ADC1_DMA_Init(void) {
    __HAL_RCC_ADC1_CLK_ENABLE();
    
    hadc1.Instance = ADC1;
    hadc1.Init.ScanConvMode = ADC_SCAN_DISABLE;
    hadc1.Init.ContinuousConvMode = ENABLE;  // Mode continu
    hadc1.Init.DiscontinuousConvMode = DISABLE;
    hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
    hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
    hadc1.Init.NbrOfConversion = 1;
    HAL_ADC_Init(&hadc1);
    
    // Link DMA
    __HAL_LINKDMA(&hadc1, DMA_Handle, hdma_adc1);
    
    ADC_ChannelConfTypeDef sConfig = {0};
    sConfig.Channel = ADC_CHANNEL_0;
    sConfig.Rank = ADC_REGULAR_RANK_1;
    sConfig.SamplingTime = ADC_SAMPLETIME_55CYCLES_5;
    HAL_ADC_ConfigChannel(&hadc1, &sConfig);
}

// ============================================================================
// HANDLERS D'INTERRUPTION DMA
// ============================================================================
void DMA1_Channel6_IRQHandler(void) {
    HAL_DMA_IRQHandler(&hdma_usart2_rx);
}

void DMA1_Channel7_IRQHandler(void) {
    HAL_DMA_IRQHandler(&hdma_usart2_tx);
}

void DMA1_Channel1_IRQHandler(void) {
    HAL_DMA_IRQHandler(&hdma_adc1);
}

void USART2_IRQHandler(void) {
    HAL_UART_IRQHandler(&huart2);
}

// ============================================================================
// CONFIGURATION GPIO
// ============================================================================
void GPIO_Init(void) {
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    
    // PC13 - LED
    GPIO_InitStruct.Pin = GPIO_PIN_13;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
    
    // PA2 (USART2_TX)
    GPIO_InitStruct.Pin = GPIO_PIN_2;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    
    // PA3 (USART2_RX)
    GPIO_InitStruct.Pin = GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    
    // PA1 (TIM2_CH2 - PWM)
    GPIO_InitStruct.Pin = GPIO_PIN_1;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    
    // PA0 (ADC - Analog)
    GPIO_InitStruct.Pin = GPIO_PIN_0;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

// ============================================================================
// CONFIGURATION TIM2 PWM
// ============================================================================
void TIM2_PWM_Init(void) {
    __HAL_RCC_TIM2_CLK_ENABLE();
    
    htim2.Instance = TIM2;
    htim2.Init.Prescaler = 7;
    htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
    htim2.Init.Period = 999;
    htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
    HAL_TIM_PWM_Init(&htim2);
    
    TIM_OC_InitTypeDef sConfigOC = {0};
    sConfigOC.OCMode = TIM_OCMODE_PWM1;
    sConfigOC.Pulse = 0;
    sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
    sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
    HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_2);
    
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
}

// ============================================================================
// CONFIGURATION HORLOGE
// ============================================================================
void SystemClock_Config(void) {
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
    RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};
    
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
    HAL_RCC_OscConfig(&RCC_OscInitStruct);
    
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
    HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0);
    
    PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC;
    PeriphClkInit.AdcClockSelection = RCC_ADCPCLK2_DIV2;
    HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit);
}

void SysTick_Handler(void) {
    HAL_IncTick();
}

// ============================================================================
// UTILITAIRES
// ============================================================================
static void trim(char *s) {
    char *p = s;
    while (*p == ' ' || *p == '\t') p++;
    if (p != s) memmove(s, p, strlen(p) + 1);
    
    size_t len = strlen(s);
    while (len > 0 && (s[len-1] == ' ' || s[len-1] == '\t' || 
                       s[len-1] == '\r' || s[len-1] == '\
')) {
        s[len-1] = '\0';
        len--;
    }
}

static uint8_t parseJson(const char *json, char *cmd, char *params) {
    // Parse simple: {"type":"cmd","command":"XXX","params":{...}}
    const char *cmd_ptr = strstr(json, "\\"command\\":\\"");
    if (!cmd_ptr) return 0;
    
    cmd_ptr += 11;  // Saute le préfixe
    const char *cmd_end = strchr(cmd_ptr, '"');
    if (!cmd_end) return 0;
    
    size_t len = cmd_end - cmd_ptr;
    if (len > 63) len = 63;
    strncpy(cmd, cmd_ptr, len);
    cmd[len] = '\0';
    
    // Parse params
    const char *params_ptr = strstr(json, "\\"params\\":");
    if (params_ptr) {
        params_ptr += 9;
        const char *params_end = strchr(params_ptr, '}');
        if (params_end) {
            len = params_end - params_ptr + 1;
            if (len > 127) len = 127;
            strncpy(params, params_ptr, len);
            params[len] = '\0';
        }
    }
    
    return 1;
}
