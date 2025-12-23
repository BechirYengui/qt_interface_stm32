/****************************************************************************
** Meta object code from reading C++ file 'DeviceState.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/model/DeviceState.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceState.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceState_t {
    QByteArrayData data[28];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceState_t qt_meta_stringdata_DeviceState = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DeviceState"
QT_MOC_LITERAL(1, 12, 16), // "connectedChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "connected"
QT_MOC_LITERAL(4, 40, 18), // "temperatureChanged"
QT_MOC_LITERAL(5, 59, 11), // "temperature"
QT_MOC_LITERAL(6, 71, 14), // "voltageChanged"
QT_MOC_LITERAL(7, 86, 7), // "voltage"
QT_MOC_LITERAL(8, 94, 13), // "adcRawChanged"
QT_MOC_LITERAL(9, 108, 8), // "uint16_t"
QT_MOC_LITERAL(10, 117, 3), // "raw"
QT_MOC_LITERAL(11, 121, 19), // "pwmDutyCycleChanged"
QT_MOC_LITERAL(12, 141, 7), // "uint8_t"
QT_MOC_LITERAL(13, 149, 4), // "duty"
QT_MOC_LITERAL(14, 154, 15), // "ledStateChanged"
QT_MOC_LITERAL(15, 170, 5), // "state"
QT_MOC_LITERAL(16, 176, 13), // "uptimeChanged"
QT_MOC_LITERAL(17, 190, 6), // "uptime"
QT_MOC_LITERAL(18, 197, 18), // "rxCharCountChanged"
QT_MOC_LITERAL(19, 216, 5), // "count"
QT_MOC_LITERAL(20, 222, 22), // "firmwareVersionChanged"
QT_MOC_LITERAL(21, 245, 7), // "version"
QT_MOC_LITERAL(22, 253, 12), // "stateUpdated"
QT_MOC_LITERAL(23, 266, 6), // "adcRaw"
QT_MOC_LITERAL(24, 273, 12), // "pwmDutyCycle"
QT_MOC_LITERAL(25, 286, 8), // "ledState"
QT_MOC_LITERAL(26, 295, 11), // "rxCharCount"
QT_MOC_LITERAL(27, 307, 15) // "firmwareVersion"

    },
    "DeviceState\0connectedChanged\0\0connected\0"
    "temperatureChanged\0temperature\0"
    "voltageChanged\0voltage\0adcRawChanged\0"
    "uint16_t\0raw\0pwmDutyCycleChanged\0"
    "uint8_t\0duty\0ledStateChanged\0state\0"
    "uptimeChanged\0uptime\0rxCharCountChanged\0"
    "count\0firmwareVersionChanged\0version\0"
    "stateUpdated\0adcRaw\0pwmDutyCycle\0"
    "ledState\0rxCharCount\0firmwareVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,
      14,    1,   79,    2, 0x06 /* Public */,
      16,    1,   82,    2, 0x06 /* Public */,
      18,    1,   85,    2, 0x06 /* Public */,
      20,    1,   88,    2, 0x06 /* Public */,
      22,    0,   91,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::UInt,   17,
    QMetaType::Void, QMetaType::UInt,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::Float, 0x00495103,
       7, QMetaType::Float, 0x00495103,
      23, 0x80000000 | 9, 0x0049510b,
      24, 0x80000000 | 12, 0x0049510b,
      25, QMetaType::Bool, 0x00495103,
      17, QMetaType::UInt, 0x00495103,
      26, QMetaType::UInt, 0x00495103,
      27, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void DeviceState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->temperatureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->voltageChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->adcRawChanged((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 4: _t->pwmDutyCycleChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 5: _t->ledStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->uptimeChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->rxCharCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->firmwareVersionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->stateUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceState::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::connectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::temperatureChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::voltageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::adcRawChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::pwmDutyCycleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::ledStateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::uptimeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::rxCharCountChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::firmwareVersionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DeviceState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceState::stateUpdated)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceState *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->temperature(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->voltage(); break;
        case 3: *reinterpret_cast< uint16_t*>(_v) = _t->adcRaw(); break;
        case 4: *reinterpret_cast< uint8_t*>(_v) = _t->pwmDutyCycle(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->ledState(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->uptime(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->rxCharCount(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->firmwareVersion(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeviceState *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConnected(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTemperature(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setVoltage(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setAdcRaw(*reinterpret_cast< uint16_t*>(_v)); break;
        case 4: _t->setPwmDutyCycle(*reinterpret_cast< uint8_t*>(_v)); break;
        case 5: _t->setLedState(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setUptime(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setRxCharCount(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setFirmwareVersion(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DeviceState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceState.data,
    qt_meta_data_DeviceState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeviceState::connectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceState::temperatureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceState::voltageChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceState::adcRawChanged(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceState::pwmDutyCycleChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeviceState::ledStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeviceState::uptimeChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeviceState::rxCharCountChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DeviceState::firmwareVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DeviceState::stateUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
