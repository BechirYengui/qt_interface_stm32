/****************************************************************************
** Meta object code from reading C++ file 'DataModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/model/DataModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataModel_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataModel_t qt_meta_stringdata_DataModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DataModel"
QT_MOC_LITERAL(1, 10, 20), // "temperatureDataAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "DataPoint"
QT_MOC_LITERAL(4, 42, 5), // "point"
QT_MOC_LITERAL(5, 48, 16), // "voltageDataAdded"
QT_MOC_LITERAL(6, 65, 12), // "pwmDataAdded"
QT_MOC_LITERAL(7, 78, 14) // "historyCleared"

    },
    "DataModel\0temperatureDataAdded\0\0"
    "DataPoint\0point\0voltageDataAdded\0"
    "pwmDataAdded\0historyCleared"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void DataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->temperatureDataAdded((*reinterpret_cast< const DataPoint(*)>(_a[1]))); break;
        case 1: _t->voltageDataAdded((*reinterpret_cast< const DataPoint(*)>(_a[1]))); break;
        case 2: _t->pwmDataAdded((*reinterpret_cast< const DataPoint(*)>(_a[1]))); break;
        case 3: _t->historyCleared(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataModel::*)(const DataPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::temperatureDataAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataModel::*)(const DataPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::voltageDataAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataModel::*)(const DataPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::pwmDataAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::historyCleared)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataModel.data,
    qt_meta_data_DataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataModel::temperatureDataAdded(const DataPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataModel::voltageDataAdded(const DataPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataModel::pwmDataAdded(const DataPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataModel::historyCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
