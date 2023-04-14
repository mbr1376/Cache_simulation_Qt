/****************************************************************************
** Meta object code from reading C++ file 'datamanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../TREE/datamanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataManager_t {
    const uint offsetsAndSize[22];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataManager_t qt_meta_stringdata_DataManager = {
    {
QT_MOC_LITERAL(0, 11), // "DataManager"
QT_MOC_LITERAL(12, 7), // "htmlURL"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 7), // "getjson"
QT_MOC_LITERAL(29, 12), // "getBackgrand"
QT_MOC_LITERAL(42, 13), // "getBackdigram"
QT_MOC_LITERAL(56, 7), // "getfont"
QT_MOC_LITERAL(64, 9), // "getparent"
QT_MOC_LITERAL(74, 3), // "str"
QT_MOC_LITERAL(78, 11), // "getChildren"
QT_MOC_LITERAL(90, 4) // "data"

    },
    "DataManager\0htmlURL\0\0getjson\0getBackgrand\0"
    "getBackdigram\0getfont\0getparent\0str\0"
    "getChildren\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       3,    0,   57,    2, 0x10a,    2 /* Public | MethodIsConst  */,
       4,    0,   58,    2, 0x10a,    3 /* Public | MethodIsConst  */,
       5,    0,   59,    2, 0x10a,    4 /* Public | MethodIsConst  */,
       6,    0,   60,    2, 0x10a,    5 /* Public | MethodIsConst  */,
       7,    1,   61,    2, 0x0a,    6 /* Public */,
       9,    1,   64,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QJsonValue,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QStringList,   10,

       0        // eod
};

void DataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->htmlURL();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QJsonValue _r = _t->getjson();
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getBackgrand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getBackdigram();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->getfont();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->getparent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->getChildren((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DataManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataManager.offsetsAndSize,
    qt_meta_data_DataManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataManager_t
, QtPrivate::TypeAndForceComplete<DataManager, std::true_type>
, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonValue, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QString> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *DataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
