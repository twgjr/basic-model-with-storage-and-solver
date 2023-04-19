/****************************************************************************
** Meta object code from reading C++ file 'blockitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../basic-model-with-storage-and-solver-V3/blockitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlockItem_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockItem_t qt_meta_stringdata_BlockItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BlockItem"
QT_MOC_LITERAL(1, 10, 15), // "categoryChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "category"
QT_MOC_LITERAL(4, 36, 9), // "idChanged"
QT_MOC_LITERAL(5, 46, 2), // "id"
QT_MOC_LITERAL(6, 49, 21), // "blockXPositionChanged"
QT_MOC_LITERAL(7, 71, 14), // "blockXPosition"
QT_MOC_LITERAL(8, 86, 21), // "blockYPositionChanged"
QT_MOC_LITERAL(9, 108, 14), // "blockYPosition"
QT_MOC_LITERAL(10, 123, 15), // "equationChanged"
QT_MOC_LITERAL(11, 139, 8) // "equation"

    },
    "BlockItem\0categoryChanged\0\0category\0"
    "idChanged\0id\0blockXPositionChanged\0"
    "blockXPosition\0blockYPositionChanged\0"
    "blockYPosition\0equationChanged\0equation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,
      10,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void BlockItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlockItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->categoryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->idChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->blockXPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->blockYPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->equationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BlockItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockItem::categoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BlockItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockItem::idChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BlockItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockItem::blockXPositionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BlockItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockItem::blockYPositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BlockItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockItem::equationChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BlockItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->blockXPosition(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->blockYPosition(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->equation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BlockItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCategory(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setBlockXPosition(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBlockYPosition(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setEquation(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BlockItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BlockItem.data,
    qt_meta_data_BlockItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlockItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlockItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BlockItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BlockItem::categoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BlockItem::idChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BlockItem::blockXPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BlockItem::blockYPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BlockItem::equationChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
