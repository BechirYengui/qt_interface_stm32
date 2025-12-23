/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSauvegarder_logs;
    QAction *actionQuitter;
    QAction *actionGraphiques;
    QAction *actionParametres;
    QAction *actionDocumentation;
    QAction *actionA_propos;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *connectionGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *statusIndicator;
    QLabel *portLabel;
    QComboBox *portComboBox;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer;
    QLabel *baudRateLabel;
    QComboBox *baudRateComboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *connectButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *dataBitsComboBox;
    QLabel *label_2;
    QComboBox *parityComboBox;
    QLabel *label_3;
    QComboBox *stopBitsComboBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *connectionStatsLabel;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *monitorGroupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *receiveTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *commandLineEdit;
    QCheckBox *addNewlineCheckBox;
    QCheckBox *hexModeCheckBox;
    QPushButton *sendButton;
    QPushButton *clearButton;
    QPushButton *saveLogButton;
    QGroupBox *controlGroupBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QPushButton *getTempButton;
    QPushButton *getVoltageButton;
    QPushButton *getStatusButton;
    QFrame *line;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *ledOnButton;
    QPushButton *ledOffButton;
    QFrame *line_2;
    QLabel *label_6;
    QSlider *pwmSlider;
    QLabel *pwmValueLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *resetButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QMenu *menuAide;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: #f5f5f5;\n"
"    }\n"
"\n"
"    QGroupBox {\n"
"        font-weight: bold;\n"
"        border: 2px solid #e0e0e0;\n"
"        border-radius: 8px;\n"
"        margin-top: 12px;\n"
"        padding-top: 10px;\n"
"        background-color: white;\n"
"    }\n"
"\n"
"    QGroupBox::title {\n"
"        subcontrol-origin: margin;\n"
"        subcontrol-position: top left;\n"
"        padding: 5px 10px;\n"
"        color: #1976d2;\n"
"    }\n"
"\n"
"    QPushButton {\n"
"        background-color: #1976d2;\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 8px 16px;\n"
"        border-radius: 4px;\n"
"        font-weight: bold;\n"
"        min-width: 100px;\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"        background-color: #1565c0;\n"
"    }\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #0d47a1;\n"
"    }\n"
"\n"
"    QPushButton:disabled {\n"
"        background-color: #bdbdbd;\n"
"    }\n"
"\n"
"    #connectButton {\n"
""
                        "        background-color: #4caf50;\n"
"    }\n"
"\n"
"    #connectButton:hover {\n"
"        background-color: #45a049;\n"
"    }\n"
"\n"
"    #disconnectButton {\n"
"        background-color: #f44336;\n"
"    }\n"
"\n"
"    #sendButton {\n"
"        background-color: #2196f3;\n"
"    }\n"
"\n"
"    #clearButton {\n"
"        background-color: #ff9800;\n"
"    }\n"
"\n"
"    QComboBox {\n"
"        border: 1px solid #bdbdbd;\n"
"        border-radius: 4px;\n"
"        padding: 6px;\n"
"        background-color: white;\n"
"    }\n"
"\n"
"    QComboBox:focus {\n"
"        border: 2px solid #1976d2;\n"
"    }\n"
"\n"
"    QLineEdit {\n"
"        border: 1px solid #bdbdbd;\n"
"        border-radius: 4px;\n"
"        padding: 6px;\n"
"        background-color: white;\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 2px solid #1976d2;\n"
"    }\n"
"\n"
"    QTextEdit {\n"
"        border: 1px solid #bdbdbd;\n"
"        border-radius: 4px;\n"
"        background-color: #fafafa;\n"
"        font-family: 'C"
                        "ourier New', monospace;\n"
"        font-size: 10pt;\n"
"    }\n"
"\n"
"    #statusIndicator {\n"
"        border-radius: 8px;\n"
"        min-width: 16px;\n"
"        max-width: 16px;\n"
"        min-height: 16px;\n"
"        max-height: 16px;\n"
"    }\n"
"   "));
        actionSauvegarder_logs = new QAction(MainWindow);
        actionSauvegarder_logs->setObjectName(QString::fromUtf8("actionSauvegarder_logs"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionGraphiques = new QAction(MainWindow);
        actionGraphiques->setObjectName(QString::fromUtf8("actionGraphiques"));
        actionParametres = new QAction(MainWindow);
        actionParametres->setObjectName(QString::fromUtf8("actionParametres"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        connectionGroupBox = new QGroupBox(centralwidget);
        connectionGroupBox->setObjectName(QString::fromUtf8("connectionGroupBox"));
        connectionGroupBox->setMinimumHeight(120);
        verticalLayout_3 = new QVBoxLayout(connectionGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        statusIndicator = new QLabel(connectionGroupBox);
        statusIndicator->setObjectName(QString::fromUtf8("statusIndicator"));
        statusIndicator->setStyleSheet(QString::fromUtf8("background-color: #f44336;"));

        horizontalLayout->addWidget(statusIndicator);

        portLabel = new QLabel(connectionGroupBox);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        portLabel->setMinimumWidth(80);

        horizontalLayout->addWidget(portLabel);

        portComboBox = new QComboBox(connectionGroupBox);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));
        portComboBox->setMinimumWidth(250);

        horizontalLayout->addWidget(portComboBox);

        refreshButton = new QPushButton(connectionGroupBox);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        horizontalLayout->addWidget(refreshButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        baudRateLabel = new QLabel(connectionGroupBox);
        baudRateLabel->setObjectName(QString::fromUtf8("baudRateLabel"));

        horizontalLayout->addWidget(baudRateLabel);

        baudRateComboBox = new QComboBox(connectionGroupBox);
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->addItem(QString());
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));

        horizontalLayout->addWidget(baudRateComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        connectButton = new QPushButton(connectionGroupBox);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setMinimumWidth(130);

        horizontalLayout->addWidget(connectButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(connectionGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        dataBitsComboBox = new QComboBox(connectionGroupBox);
        dataBitsComboBox->addItem(QString());
        dataBitsComboBox->addItem(QString());
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));

        horizontalLayout_4->addWidget(dataBitsComboBox);

        label_2 = new QLabel(connectionGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        parityComboBox = new QComboBox(connectionGroupBox);
        parityComboBox->addItem(QString());
        parityComboBox->addItem(QString());
        parityComboBox->addItem(QString());
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        horizontalLayout_4->addWidget(parityComboBox);

        label_3 = new QLabel(connectionGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        stopBitsComboBox = new QComboBox(connectionGroupBox);
        stopBitsComboBox->addItem(QString());
        stopBitsComboBox->addItem(QString());
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));

        horizontalLayout_4->addWidget(stopBitsComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        connectionStatsLabel = new QLabel(connectionGroupBox);
        connectionStatsLabel->setObjectName(QString::fromUtf8("connectionStatsLabel"));
        connectionStatsLabel->setStyleSheet(QString::fromUtf8("color: #616161; font-size: 9pt;"));

        horizontalLayout_4->addWidget(connectionStatsLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(connectionGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        monitorGroupBox = new QGroupBox(centralwidget);
        monitorGroupBox->setObjectName(QString::fromUtf8("monitorGroupBox"));
        verticalLayout_2 = new QVBoxLayout(monitorGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        receiveTextEdit = new QTextEdit(monitorGroupBox);
        receiveTextEdit->setObjectName(QString::fromUtf8("receiveTextEdit"));
        receiveTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(receiveTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        commandLineEdit = new QLineEdit(monitorGroupBox);
        commandLineEdit->setObjectName(QString::fromUtf8("commandLineEdit"));

        horizontalLayout_2->addWidget(commandLineEdit);

        addNewlineCheckBox = new QCheckBox(monitorGroupBox);
        addNewlineCheckBox->setObjectName(QString::fromUtf8("addNewlineCheckBox"));
        addNewlineCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(addNewlineCheckBox);

        hexModeCheckBox = new QCheckBox(monitorGroupBox);
        hexModeCheckBox->setObjectName(QString::fromUtf8("hexModeCheckBox"));

        horizontalLayout_2->addWidget(hexModeCheckBox);

        sendButton = new QPushButton(monitorGroupBox);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);

        horizontalLayout_2->addWidget(sendButton);

        clearButton = new QPushButton(monitorGroupBox);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);

        saveLogButton = new QPushButton(monitorGroupBox);
        saveLogButton->setObjectName(QString::fromUtf8("saveLogButton"));

        horizontalLayout_2->addWidget(saveLogButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(monitorGroupBox);

        controlGroupBox = new QGroupBox(centralwidget);
        controlGroupBox->setObjectName(QString::fromUtf8("controlGroupBox"));
        verticalLayout_4 = new QVBoxLayout(controlGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(controlGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #424242;"));

        verticalLayout_4->addWidget(label_4);

        getTempButton = new QPushButton(controlGroupBox);
        getTempButton->setObjectName(QString::fromUtf8("getTempButton"));
        getTempButton->setEnabled(false);

        verticalLayout_4->addWidget(getTempButton);

        getVoltageButton = new QPushButton(controlGroupBox);
        getVoltageButton->setObjectName(QString::fromUtf8("getVoltageButton"));
        getVoltageButton->setEnabled(false);

        verticalLayout_4->addWidget(getVoltageButton);

        getStatusButton = new QPushButton(controlGroupBox);
        getStatusButton->setObjectName(QString::fromUtf8("getStatusButton"));
        getStatusButton->setEnabled(false);

        verticalLayout_4->addWidget(getStatusButton);

        line = new QFrame(controlGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        label_5 = new QLabel(controlGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #424242;"));

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ledOnButton = new QPushButton(controlGroupBox);
        ledOnButton->setObjectName(QString::fromUtf8("ledOnButton"));
        ledOnButton->setEnabled(false);
        ledOnButton->setStyleSheet(QString::fromUtf8("background-color: #4caf50;"));

        horizontalLayout_5->addWidget(ledOnButton);

        ledOffButton = new QPushButton(controlGroupBox);
        ledOffButton->setObjectName(QString::fromUtf8("ledOffButton"));
        ledOffButton->setEnabled(false);
        ledOffButton->setStyleSheet(QString::fromUtf8("background-color: #f44336;"));

        horizontalLayout_5->addWidget(ledOffButton);


        verticalLayout_4->addLayout(horizontalLayout_5);

        line_2 = new QFrame(controlGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        label_6 = new QLabel(controlGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-weight: bold; color: #424242;"));

        verticalLayout_4->addWidget(label_6);

        pwmSlider = new QSlider(controlGroupBox);
        pwmSlider->setObjectName(QString::fromUtf8("pwmSlider"));
        pwmSlider->setMaximum(100);
        pwmSlider->setValue(50);
        pwmSlider->setOrientation(Qt::Horizontal);
        pwmSlider->setTickPosition(QSlider::TicksBelow);
        pwmSlider->setTickInterval(10);
        pwmSlider->setEnabled(false);

        verticalLayout_4->addWidget(pwmSlider);

        pwmValueLabel = new QLabel(controlGroupBox);
        pwmValueLabel->setObjectName(QString::fromUtf8("pwmValueLabel"));
        pwmValueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(pwmValueLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        resetButton = new QPushButton(controlGroupBox);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setEnabled(false);
        resetButton->setStyleSheet(QString::fromUtf8("background-color: #ff9800;"));

        verticalLayout_4->addWidget(resetButton);


        horizontalLayout_3->addWidget(controlGroupBox);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("\n"
"     QStatusBar {\n"
"      background-color: #e0e0e0;\n"
"      color: #424242;\n"
"      font-weight: bold;\n"
"     }\n"
"    "));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 22));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuOutils = new QMenu(menubar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuOutils->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionSauvegarder_logs);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuOutils->addAction(actionGraphiques);
        menuOutils->addAction(actionParametres);
        menuAide->addAction(actionDocumentation);
        menuAide->addAction(actionA_propos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "STM32 Interface - Pilotage et Supervision", nullptr));
        actionSauvegarder_logs->setText(QCoreApplication::translate("MainWindow", "Sauvegarder logs", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionGraphiques->setText(QCoreApplication::translate("MainWindow", "Graphiques temps r\303\251el", nullptr));
        actionParametres->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "Documentation", nullptr));
        actionA_propos->setText(QCoreApplication::translate("MainWindow", "\303\200 propos", nullptr));
        connectionGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\342\232\231\357\270\217 Configuration de la Connexion", nullptr));
#if QT_CONFIG(tooltip)
        statusIndicator->setToolTip(QCoreApplication::translate("MainWindow", "\303\211tat de la connexion", nullptr));
#endif // QT_CONFIG(tooltip)
        statusIndicator->setText(QString());
        portLabel->setText(QCoreApplication::translate("MainWindow", "Port S\303\251rie:", nullptr));
#if QT_CONFIG(tooltip)
        portComboBox->setToolTip(QCoreApplication::translate("MainWindow", "S\303\251lectionnez le port s\303\251rie du STM32", nullptr));
#endif // QT_CONFIG(tooltip)
        refreshButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 Rafra\303\256chir", nullptr));
#if QT_CONFIG(tooltip)
        refreshButton->setToolTip(QCoreApplication::translate("MainWindow", "Actualiser la liste des ports", nullptr));
#endif // QT_CONFIG(tooltip)
        baudRateLabel->setText(QCoreApplication::translate("MainWindow", "Vitesse (bauds):", nullptr));
        baudRateComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        baudRateComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "19200", nullptr));
        baudRateComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        baudRateComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "57600", nullptr));
        baudRateComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "115200", nullptr));
        baudRateComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "230400", nullptr));
        baudRateComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "460800", nullptr));
        baudRateComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "921600", nullptr));

#if QT_CONFIG(tooltip)
        baudRateComboBox->setToolTip(QCoreApplication::translate("MainWindow", "Vitesse de transmission", nullptr));
#endif // QT_CONFIG(tooltip)
        connectButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\214 Connecter", nullptr));
#if QT_CONFIG(tooltip)
        connectButton->setToolTip(QCoreApplication::translate("MainWindow", "\303\211tablir la connexion avec le STM32", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Bits de donn\303\251es:", nullptr));
        dataBitsComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        dataBitsComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Parit\303\251:", nullptr));
        parityComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Aucune", nullptr));
        parityComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Paire", nullptr));
        parityComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Impaire", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Bits d'arr\303\252t:", nullptr));
        stopBitsComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stopBitsComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        connectionStatsLabel->setText(QCoreApplication::translate("MainWindow", "TX: 0 | RX: 0 | Erreurs: 0", nullptr));
        monitorGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\360\237\223\241 Moniteur S\303\251rie", nullptr));
        receiveTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Les messages TX/RX s'afficheront ici...", nullptr));
        commandLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez une commande (ex: GET_TEMP, SET_LED=1)...", nullptr));
        addNewlineCheckBox->setText(QCoreApplication::translate("MainWindow", "+ \\n", nullptr));
#if QT_CONFIG(tooltip)
        addNewlineCheckBox->setToolTip(QCoreApplication::translate("MainWindow", "Ajouter automatiquement un retour \303\240 la ligne", nullptr));
#endif // QT_CONFIG(tooltip)
        hexModeCheckBox->setText(QCoreApplication::translate("MainWindow", "HEX", nullptr));
#if QT_CONFIG(tooltip)
        hexModeCheckBox->setToolTip(QCoreApplication::translate("MainWindow", "Afficher en hexad\303\251cimal", nullptr));
#endif // QT_CONFIG(tooltip)
        sendButton->setText(QCoreApplication::translate("MainWindow", "\360\237\223\244 Envoyer", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Effacer", nullptr));
        saveLogButton->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 Sauver", nullptr));
#if QT_CONFIG(tooltip)
        saveLogButton->setToolTip(QCoreApplication::translate("MainWindow", "Sauvegarder les logs", nullptr));
#endif // QT_CONFIG(tooltip)
        controlGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\360\237\216\233\357\270\217 Panneau de Contr\303\264le", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Commandes Rapides:", nullptr));
        getTempButton->setText(QCoreApplication::translate("MainWindow", "\360\237\214\241\357\270\217 GET_TEMP", nullptr));
        getVoltageButton->setText(QCoreApplication::translate("MainWindow", "\342\232\241 GET_VOLTAGE", nullptr));
        getStatusButton->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 STATUS", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Contr\303\264le LED:", nullptr));
        ledOnButton->setText(QCoreApplication::translate("MainWindow", "\360\237\222\241 ON", nullptr));
        ledOffButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\264 OFF", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Contr\303\264le PWM:", nullptr));
        pwmValueLabel->setText(QCoreApplication::translate("MainWindow", "Duty Cycle: 50%", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 RESET STM32", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
        menuOutils->setTitle(QCoreApplication::translate("MainWindow", "Outils", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
