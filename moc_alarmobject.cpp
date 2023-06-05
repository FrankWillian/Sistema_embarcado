/****************************************************************************
** Meta object code from reading C++ file 'alarmobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ihm/alarmobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarmobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AlarmObject_t {
    QByteArrayData data[8];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlarmObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlarmObject_t qt_meta_stringdata_AlarmObject = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AlarmObject"
QT_MOC_LITERAL(1, 12, 15), // "datetimeChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "infoChanged"
QT_MOC_LITERAL(4, 41, 9), // "idChanged"
QT_MOC_LITERAL(5, 51, 8), // "datetime"
QT_MOC_LITERAL(6, 60, 4), // "info"
QT_MOC_LITERAL(7, 65, 2) // "id"

    },
    "AlarmObject\0datetimeChanged\0\0infoChanged\0"
    "idChanged\0datetime\0info\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlarmObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495003,
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void AlarmObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlarmObject *_t = static_cast<AlarmObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->datetimeChanged(); break;
        case 1: _t->infoChanged(); break;
        case 2: _t->idChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlarmObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlarmObject::datetimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AlarmObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlarmObject::infoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AlarmObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlarmObject::idChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AlarmObject *_t = static_cast<AlarmObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->datetime(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->info(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->id(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AlarmObject *_t = static_cast<AlarmObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDateTime(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setInfo(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setId(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject AlarmObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AlarmObject.data,
      qt_meta_data_AlarmObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AlarmObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlarmObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AlarmObject.stringdata0))
        return static_cast<void*>(const_cast< AlarmObject*>(this));
    return QObject::qt_metacast(_clname);
}

int AlarmObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AlarmObject::datetimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AlarmObject::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AlarmObject::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
