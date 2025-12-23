/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/view/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[29];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "onConnectClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "onRefreshPorts"
QT_MOC_LITERAL(4, 44, 13), // "onSendClicked"
QT_MOC_LITERAL(5, 58, 16), // "onGetTempClicked"
QT_MOC_LITERAL(6, 75, 19), // "onGetVoltageClicked"
QT_MOC_LITERAL(7, 95, 18), // "onGetStatusClicked"
QT_MOC_LITERAL(8, 114, 14), // "onLedOnClicked"
QT_MOC_LITERAL(9, 129, 15), // "onLedOffClicked"
QT_MOC_LITERAL(10, 145, 18), // "onToggleLedClicked"
QT_MOC_LITERAL(11, 164, 18), // "onPwmSliderChanged"
QT_MOC_LITERAL(12, 183, 5), // "value"
QT_MOC_LITERAL(13, 189, 19), // "onPwmSliderReleased"
QT_MOC_LITERAL(14, 209, 14), // "onResetClicked"
QT_MOC_LITERAL(15, 224, 14), // "onDataReceived"
QT_MOC_LITERAL(16, 239, 4), // "data"
QT_MOC_LITERAL(17, 244, 19), // "onConnectionChanged"
QT_MOC_LITERAL(18, 264, 9), // "connected"
QT_MOC_LITERAL(19, 274, 20), // "onTemperatureUpdated"
QT_MOC_LITERAL(20, 295, 11), // "temperature"
QT_MOC_LITERAL(21, 307, 16), // "onVoltageUpdated"
QT_MOC_LITERAL(22, 324, 7), // "voltage"
QT_MOC_LITERAL(23, 332, 15), // "onStatusUpdated"
QT_MOC_LITERAL(24, 348, 6), // "status"
QT_MOC_LITERAL(25, 355, 13), // "onDeviceError"
QT_MOC_LITERAL(26, 369, 5), // "error"
QT_MOC_LITERAL(27, 375, 14), // "onClearMonitor"
QT_MOC_LITERAL(28, 390, 9) // "onSaveLog"

    },
    "MainWindow\0onConnectClicked\0\0"
    "onRefreshPorts\0onSendClicked\0"
    "onGetTempClicked\0onGetVoltageClicked\0"
    "onGetStatusClicked\0onLedOnClicked\0"
    "onLedOffClicked\0onToggleLedClicked\0"
    "onPwmSliderChanged\0value\0onPwmSliderReleased\0"
    "onResetClicked\0onDataReceived\0data\0"
    "onConnectionChanged\0connected\0"
    "onTemperatureUpdated\0temperature\0"
    "onVoltageUpdated\0voltage\0onStatusUpdated\0"
    "status\0onDeviceError\0error\0onClearMonitor\0"
    "onSaveLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08 /* Private */,
       3,    0,  115,    2, 0x08 /* Private */,
       4,    0,  116,    2, 0x08 /* Private */,
       5,    0,  117,    2, 0x08 /* Private */,
       6,    0,  118,    2, 0x08 /* Private */,
       7,    0,  119,    2, 0x08 /* Private */,
       8,    0,  120,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    1,  123,    2, 0x08 /* Private */,
      13,    0,  126,    2, 0x08 /* Private */,
      14,    0,  127,    2, 0x08 /* Private */,
      15,    1,  128,    2, 0x08 /* Private */,
      17,    1,  131,    2, 0x08 /* Private */,
      19,    1,  134,    2, 0x08 /* Private */,
      21,    1,  137,    2, 0x08 /* Private */,
      23,    1,  140,    2, 0x08 /* Private */,
      25,    1,  143,    2, 0x08 /* Private */,
      27,    0,  146,    2, 0x08 /* Private */,
      28,    0,  147,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Float,   20,
    QMetaType::Void, QMetaType::Float,   22,
    QMetaType::Void, QMetaType::QJsonObject,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onConnectClicked(); break;
        case 1: _t->onRefreshPorts(); break;
        case 2: _t->onSendClicked(); break;
        case 3: _t->onGetTempClicked(); break;
        case 4: _t->onGetVoltageClicked(); break;
        case 5: _t->onGetStatusClicked(); break;
        case 6: _t->onLedOnClicked(); break;
        case 7: _t->onLedOffClicked(); break;
        case 8: _t->onToggleLedClicked(); break;
        case 9: _t->onPwmSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onPwmSliderReleased(); break;
        case 11: _t->onResetClicked(); break;
        case 12: _t->onDataReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onConnectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onTemperatureUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->onVoltageUpdated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->onStatusUpdated((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 17: _t->onDeviceError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->onClearMonitor(); break;
        case 19: _t->onSaveLog(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
