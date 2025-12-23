/****************************************************************************
** Meta object code from reading C++ file 'DeviceController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/controller/DeviceController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceController_t {
    QByteArrayData data[47];
    char stringdata0[598];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceController_t qt_meta_stringdata_DeviceController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DeviceController"
QT_MOC_LITERAL(1, 17, 16), // "connectedChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "connected"
QT_MOC_LITERAL(4, 45, 11), // "deviceError"
QT_MOC_LITERAL(5, 57, 5), // "error"
QT_MOC_LITERAL(6, 63, 11), // "commandSent"
QT_MOC_LITERAL(7, 75, 7), // "command"
QT_MOC_LITERAL(8, 83, 16), // "responseReceived"
QT_MOC_LITERAL(9, 100, 8), // "response"
QT_MOC_LITERAL(10, 109, 18), // "temperatureUpdated"
QT_MOC_LITERAL(11, 128, 11), // "temperature"
QT_MOC_LITERAL(12, 140, 14), // "voltageUpdated"
QT_MOC_LITERAL(13, 155, 7), // "voltage"
QT_MOC_LITERAL(14, 163, 13), // "statusUpdated"
QT_MOC_LITERAL(15, 177, 6), // "status"
QT_MOC_LITERAL(16, 184, 17), // "heartbeatReceived"
QT_MOC_LITERAL(17, 202, 15), // "connectToDevice"
QT_MOC_LITERAL(18, 218, 8), // "portName"
QT_MOC_LITERAL(19, 227, 8), // "baudRate"
QT_MOC_LITERAL(20, 236, 20), // "disconnectFromDevice"
QT_MOC_LITERAL(21, 257, 6), // "setLed"
QT_MOC_LITERAL(22, 264, 5), // "state"
QT_MOC_LITERAL(23, 270, 9), // "toggleLed"
QT_MOC_LITERAL(24, 280, 6), // "setPwm"
QT_MOC_LITERAL(25, 287, 7), // "uint8_t"
QT_MOC_LITERAL(26, 295, 9), // "dutyCycle"
QT_MOC_LITERAL(27, 305, 11), // "resetDevice"
QT_MOC_LITERAL(28, 317, 18), // "requestTemperature"
QT_MOC_LITERAL(29, 336, 14), // "requestVoltage"
QT_MOC_LITERAL(30, 351, 13), // "requestAdcRaw"
QT_MOC_LITERAL(31, 365, 13), // "requestStatus"
QT_MOC_LITERAL(32, 379, 20), // "setHeartbeatInterval"
QT_MOC_LITERAL(33, 400, 8), // "uint32_t"
QT_MOC_LITERAL(34, 409, 10), // "intervalMs"
QT_MOC_LITERAL(35, 420, 14), // "setAutoRefresh"
QT_MOC_LITERAL(36, 435, 7), // "enabled"
QT_MOC_LITERAL(37, 443, 17), // "sendCustomCommand"
QT_MOC_LITERAL(38, 461, 15), // "sendJsonCommand"
QT_MOC_LITERAL(39, 477, 4), // "json"
QT_MOC_LITERAL(40, 482, 18), // "handleDataReceived"
QT_MOC_LITERAL(41, 501, 4), // "data"
QT_MOC_LITERAL(42, 506, 23), // "handleConnectionChanged"
QT_MOC_LITERAL(43, 530, 17), // "handleSerialError"
QT_MOC_LITERAL(44, 548, 24), // "handleAutoRefreshTimeout"
QT_MOC_LITERAL(45, 573, 11), // "deviceState"
QT_MOC_LITERAL(46, 585, 12) // "DeviceState*"

    },
    "DeviceController\0connectedChanged\0\0"
    "connected\0deviceError\0error\0commandSent\0"
    "command\0responseReceived\0response\0"
    "temperatureUpdated\0temperature\0"
    "voltageUpdated\0voltage\0statusUpdated\0"
    "status\0heartbeatReceived\0connectToDevice\0"
    "portName\0baudRate\0disconnectFromDevice\0"
    "setLed\0state\0toggleLed\0setPwm\0uint8_t\0"
    "dutyCycle\0resetDevice\0requestTemperature\0"
    "requestVoltage\0requestAdcRaw\0requestStatus\0"
    "setHeartbeatInterval\0uint32_t\0intervalMs\0"
    "setAutoRefresh\0enabled\0sendCustomCommand\0"
    "sendJsonCommand\0json\0handleDataReceived\0"
    "data\0handleConnectionChanged\0"
    "handleSerialError\0handleAutoRefreshTimeout\0"
    "deviceState\0DeviceState*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       2,  224, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    1,  157,    2, 0x06 /* Public */,
       6,    1,  160,    2, 0x06 /* Public */,
       8,    1,  163,    2, 0x06 /* Public */,
      10,    1,  166,    2, 0x06 /* Public */,
      12,    1,  169,    2, 0x06 /* Public */,
      14,    1,  172,    2, 0x06 /* Public */,
      16,    0,  175,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    2,  176,    2, 0x0a /* Public */,
      17,    1,  181,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  184,    2, 0x0a /* Public */,
      21,    1,  185,    2, 0x0a /* Public */,
      23,    0,  188,    2, 0x0a /* Public */,
      24,    1,  189,    2, 0x0a /* Public */,
      27,    0,  192,    2, 0x0a /* Public */,
      28,    0,  193,    2, 0x0a /* Public */,
      29,    0,  194,    2, 0x0a /* Public */,
      30,    0,  195,    2, 0x0a /* Public */,
      31,    0,  196,    2, 0x0a /* Public */,
      32,    1,  197,    2, 0x0a /* Public */,
      35,    2,  200,    2, 0x0a /* Public */,
      35,    1,  205,    2, 0x2a /* Public | MethodCloned */,
      37,    1,  208,    2, 0x0a /* Public */,
      38,    1,  211,    2, 0x0a /* Public */,
      40,    1,  214,    2, 0x08 /* Private */,
      42,    1,  217,    2, 0x08 /* Private */,
      43,    1,  220,    2, 0x08 /* Private */,
      44,    0,  223,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   18,   19,
    QMetaType::Bool, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 33,   36,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QJsonObject,   39,
    QMetaType::Void, QMetaType::QByteArray,   41,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // properties: name, type, flags
      45, 0x80000000 | 46, 0x00095409,
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void DeviceController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->deviceError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->commandSent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->responseReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->temperatureUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->voltageUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->statusUpdated((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 7: _t->heartbeatReceived(); break;
        case 8: { bool _r = _t->connectToDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->connectToDevice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->disconnectFromDevice(); break;
        case 11: _t->setLed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toggleLed(); break;
        case 13: _t->setPwm((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 14: _t->resetDevice(); break;
        case 15: _t->requestTemperature(); break;
        case 16: _t->requestVoltage(); break;
        case 17: _t->requestAdcRaw(); break;
        case 18: _t->requestStatus(); break;
        case 19: _t->setHeartbeatInterval((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 20: _t->setAutoRefresh((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 21: _t->setAutoRefresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->sendCustomCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->sendJsonCommand((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 24: _t->handleDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 25: _t->handleConnectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->handleSerialError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->handleAutoRefreshTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::connectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::deviceError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::commandSent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::responseReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::temperatureUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::voltageUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::statusUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::heartbeatReceived)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeviceState* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DeviceState**>(_v) = _t->deviceState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DeviceController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceController.data,
    qt_meta_data_DeviceController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeviceController::connectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceController::deviceError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceController::commandSent(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceController::responseReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceController::temperatureUpdated(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeviceController::voltageUpdated(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeviceController::statusUpdated(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeviceController::heartbeatReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
