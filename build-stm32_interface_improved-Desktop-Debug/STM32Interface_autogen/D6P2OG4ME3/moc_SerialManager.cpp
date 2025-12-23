/****************************************************************************
** Meta object code from reading C++ file 'SerialManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/communication/SerialManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialManager_t {
    QByteArrayData data[22];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialManager_t qt_meta_stringdata_SerialManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialManager"
QT_MOC_LITERAL(1, 14, 12), // "dataReceived"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 8), // "dataSent"
QT_MOC_LITERAL(5, 42, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(6, 66, 9), // "connected"
QT_MOC_LITERAL(7, 76, 13), // "errorOccurred"
QT_MOC_LITERAL(8, 90, 5), // "error"
QT_MOC_LITERAL(9, 96, 12), // "bytesWritten"
QT_MOC_LITERAL(10, 109, 5), // "bytes"
QT_MOC_LITERAL(11, 115, 13), // "bytesReceived"
QT_MOC_LITERAL(12, 129, 15), // "requestOpenPort"
QT_MOC_LITERAL(13, 145, 8), // "portName"
QT_MOC_LITERAL(14, 154, 8), // "baudRate"
QT_MOC_LITERAL(15, 163, 16), // "requestClosePort"
QT_MOC_LITERAL(16, 180, 15), // "requestSendData"
QT_MOC_LITERAL(17, 196, 23), // "requestSendDataPriority"
QT_MOC_LITERAL(18, 220, 16), // "handlePortOpened"
QT_MOC_LITERAL(19, 237, 16), // "handlePortClosed"
QT_MOC_LITERAL(20, 254, 15), // "handleOpenError"
QT_MOC_LITERAL(21, 270, 17) // "handleWorkerError"

    },
    "SerialManager\0dataReceived\0\0data\0"
    "dataSent\0connectionStatusChanged\0"
    "connected\0errorOccurred\0error\0"
    "bytesWritten\0bytes\0bytesReceived\0"
    "requestOpenPort\0portName\0baudRate\0"
    "requestClosePort\0requestSendData\0"
    "requestSendDataPriority\0handlePortOpened\0"
    "handlePortClosed\0handleOpenError\0"
    "handleWorkerError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       9,    1,   96,    2, 0x06 /* Public */,
      11,    1,   99,    2, 0x06 /* Public */,
      12,    2,  102,    2, 0x06 /* Public */,
      15,    0,  107,    2, 0x06 /* Public */,
      16,    1,  108,    2, 0x06 /* Public */,
      17,    1,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  114,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,
      20,    1,  120,    2, 0x08 /* Private */,
      21,    1,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void SerialManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->dataSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->connectionStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->bytesReceived((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->requestOpenPort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 7: _t->requestClosePort(); break;
        case 8: _t->requestSendData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: _t->requestSendDataPriority((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->handlePortOpened((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 11: _t->handlePortClosed(); break;
        case 12: _t->handleOpenError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->handleWorkerError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialManager::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::dataReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::dataSent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::connectionStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::errorOccurred)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::bytesWritten)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::bytesReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QString & , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::requestOpenPort)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::requestClosePort)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::requestSendData)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::requestSendDataPriority)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SerialManager.data,
    qt_meta_data_SerialManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SerialManager::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialManager::dataSent(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialManager::connectionStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialManager::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SerialManager::bytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SerialManager::bytesReceived(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SerialManager::requestOpenPort(const QString & _t1, qint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SerialManager::requestClosePort()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SerialManager::requestSendData(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SerialManager::requestSendDataPriority(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
