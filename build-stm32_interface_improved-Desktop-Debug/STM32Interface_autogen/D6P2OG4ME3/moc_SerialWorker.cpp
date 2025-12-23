/****************************************************************************
** Meta object code from reading C++ file 'SerialWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/communication/SerialWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialWorker_t {
    QByteArrayData data[25];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialWorker_t qt_meta_stringdata_SerialWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SerialWorker"
QT_MOC_LITERAL(1, 13, 10), // "portOpened"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "portName"
QT_MOC_LITERAL(4, 34, 8), // "baudRate"
QT_MOC_LITERAL(5, 43, 10), // "portClosed"
QT_MOC_LITERAL(6, 54, 9), // "openError"
QT_MOC_LITERAL(7, 64, 5), // "error"
QT_MOC_LITERAL(8, 70, 12), // "dataReceived"
QT_MOC_LITERAL(9, 83, 4), // "data"
QT_MOC_LITERAL(10, 88, 8), // "dataSent"
QT_MOC_LITERAL(11, 97, 13), // "errorOccurred"
QT_MOC_LITERAL(12, 111, 12), // "bytesWritten"
QT_MOC_LITERAL(13, 124, 5), // "bytes"
QT_MOC_LITERAL(14, 130, 13), // "bytesReceived"
QT_MOC_LITERAL(15, 144, 8), // "openPort"
QT_MOC_LITERAL(16, 153, 9), // "closePort"
QT_MOC_LITERAL(17, 163, 8), // "sendData"
QT_MOC_LITERAL(18, 172, 16), // "sendDataPriority"
QT_MOC_LITERAL(19, 189, 5), // "start"
QT_MOC_LITERAL(20, 195, 4), // "stop"
QT_MOC_LITERAL(21, 200, 15), // "handleReadyRead"
QT_MOC_LITERAL(22, 216, 11), // "handleError"
QT_MOC_LITERAL(23, 228, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(24, 257, 16) // "processSendQueue"

    },
    "SerialWorker\0portOpened\0\0portName\0"
    "baudRate\0portClosed\0openError\0error\0"
    "dataReceived\0data\0dataSent\0errorOccurred\0"
    "bytesWritten\0bytes\0bytesReceived\0"
    "openPort\0closePort\0sendData\0"
    "sendDataPriority\0start\0stop\0handleReadyRead\0"
    "handleError\0QSerialPort::SerialPortError\0"
    "processSendQueue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       5,    0,  104,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,
      10,    1,  111,    2, 0x06 /* Public */,
      11,    1,  114,    2, 0x06 /* Public */,
      12,    1,  117,    2, 0x06 /* Public */,
      14,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  123,    2, 0x0a /* Public */,
      16,    0,  128,    2, 0x0a /* Public */,
      17,    1,  129,    2, 0x0a /* Public */,
      18,    1,  132,    2, 0x0a /* Public */,
      19,    0,  135,    2, 0x0a /* Public */,
      20,    0,  136,    2, 0x0a /* Public */,
      21,    0,  137,    2, 0x08 /* Private */,
      22,    1,  138,    2, 0x08 /* Private */,
      24,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::LongLong,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    7,
    QMetaType::Void,

       0        // eod
};

void SerialWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->portOpened((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 1: _t->portClosed(); break;
        case 2: _t->openError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->dataSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->bytesReceived((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->openPort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 9: _t->closePort(); break;
        case 10: _t->sendData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->sendDataPriority((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 12: _t->start(); break;
        case 13: _t->stop(); break;
        case 14: _t->handleReadyRead(); break;
        case 15: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 16: _t->processSendQueue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialWorker::*)(const QString & , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::portOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::portClosed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::openError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::dataReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::dataSent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::errorOccurred)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::bytesWritten)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SerialWorker::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialWorker::bytesReceived)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SerialWorker.data,
    qt_meta_data_SerialWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SerialWorker::portOpened(const QString & _t1, qint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialWorker::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialWorker::openError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialWorker::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SerialWorker::dataSent(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SerialWorker::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SerialWorker::bytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SerialWorker::bytesReceived(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
