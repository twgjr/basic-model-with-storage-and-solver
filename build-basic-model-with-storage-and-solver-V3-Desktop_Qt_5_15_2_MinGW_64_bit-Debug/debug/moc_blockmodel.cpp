/****************************************************************************
** Meta object code from reading C++ file 'blockmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../basic-model-with-storage-and-solver-V3/blockmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlockModel_t {
    QByteArrayData data[14];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockModel_t qt_meta_stringdata_BlockModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BlockModel"
QT_MOC_LITERAL(1, 11, 14), // "loadBlockItems"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "loadLocation"
QT_MOC_LITERAL(4, 40, 14), // "saveBlockItems"
QT_MOC_LITERAL(5, 55, 12), // "saveLocation"
QT_MOC_LITERAL(6, 68, 15), // "appendBlockItem"
QT_MOC_LITERAL(7, 84, 15), // "clearBlockItems"
QT_MOC_LITERAL(8, 100, 19), // "removeLastBlockItem"
QT_MOC_LITERAL(9, 120, 14), // "solveEquations"
QT_MOC_LITERAL(10, 135, 9), // "maxBlockX"
QT_MOC_LITERAL(11, 145, 9), // "maxBlockY"
QT_MOC_LITERAL(12, 155, 15), // "blockDataSource"
QT_MOC_LITERAL(13, 171, 16) // "BlockDataSource*"

    },
    "BlockModel\0loadBlockItems\0\0loadLocation\0"
    "saveBlockItems\0saveLocation\0appendBlockItem\0"
    "clearBlockItems\0removeLastBlockItem\0"
    "solveEquations\0maxBlockX\0maxBlockY\0"
    "blockDataSource\0BlockDataSource*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x02 /* Public */,
       4,    1,   57,    2, 0x02 /* Public */,
       6,    0,   60,    2, 0x02 /* Public */,
       7,    0,   61,    2, 0x02 /* Public */,
       8,    0,   62,    2, 0x02 /* Public */,
       9,    0,   63,    2, 0x02 /* Public */,
      10,    0,   64,    2, 0x02 /* Public */,
      11,    0,   65,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariant,    3,
    QMetaType::Bool, QMetaType::QVariant,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0009510b,

       0        // eod
};

void BlockModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlockModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->loadBlockItems((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->saveBlockItems((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->appendBlockItem(); break;
        case 3: _t->clearBlockItems(); break;
        case 4: _t->removeLastBlockItem(); break;
        case 5: _t->solveEquations(); break;
        case 6: { int _r = _t->maxBlockX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->maxBlockY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BlockDataSource* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BlockModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< BlockDataSource**>(_v) = _t->blockDataSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BlockModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBlockDataSource(*reinterpret_cast< BlockDataSource**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BlockModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_BlockModel.data,
    qt_meta_data_BlockModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlockModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlockModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int BlockModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
