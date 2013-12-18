/****************************************************************************
** Meta object code from reading C++ file 'miningpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/miningpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miningpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MiningPage_t {
    QByteArrayData data[24];
    char stringdata[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MiningPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MiningPage_t qt_meta_stringdata_MiningPage = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 15),
QT_MOC_LITERAL(4, 41, 14),
QT_MOC_LITERAL(5, 56, 11),
QT_MOC_LITERAL(6, 68, 12),
QT_MOC_LITERAL(7, 81, 12),
QT_MOC_LITERAL(8, 94, 12),
QT_MOC_LITERAL(9, 107, 12),
QT_MOC_LITERAL(10, 120, 10),
QT_MOC_LITERAL(11, 131, 22),
QT_MOC_LITERAL(12, 154, 13),
QT_MOC_LITERAL(13, 168, 17),
QT_MOC_LITERAL(14, 186, 7),
QT_MOC_LITERAL(15, 194, 20),
QT_MOC_LITERAL(16, 215, 6),
QT_MOC_LITERAL(17, 222, 24),
QT_MOC_LITERAL(18, 247, 13),
QT_MOC_LITERAL(19, 261, 23),
QT_MOC_LITERAL(20, 285, 11),
QT_MOC_LITERAL(21, 297, 5),
QT_MOC_LITERAL(22, 303, 12),
QT_MOC_LITERAL(23, 316, 7)
    },
    "MiningPage\0startPressed\0\0startPoolMining\0"
    "stopPoolMining\0updateSpeed\0loadSettings\0"
    "saveSettings\0reportToList\0minerStarted\0"
    "minerError\0QProcess::ProcessError\0"
    "minerFinished\0readProcessOutput\0getTime\0"
    "enableMiningControls\0enable\0"
    "enablePoolMiningControls\0getMiningType\0"
    "ClientModel::MiningType\0typeChanged\0"
    "index\0debugToggled\0checked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiningPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a,
       3,    0,  100,    2, 0x0a,
       4,    0,  101,    2, 0x0a,
       5,    0,  102,    2, 0x0a,
       6,    0,  103,    2, 0x0a,
       7,    0,  104,    2, 0x0a,
       8,    3,  105,    2, 0x0a,
       9,    0,  112,    2, 0x0a,
      10,    1,  113,    2, 0x0a,
      12,    0,  116,    2, 0x0a,
      13,    0,  117,    2, 0x0a,
      14,    1,  118,    2, 0x0a,
      15,    1,  121,    2, 0x0a,
      17,    1,  124,    2, 0x0a,
      18,    0,  127,    2, 0x0a,
      20,    1,  128,    2, 0x0a,
      22,    1,  131,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    0x80000000 | 19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Bool,   23,

       0        // eod
};

void MiningPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiningPage *_t = static_cast<MiningPage *>(_o);
        switch (_id) {
        case 0: _t->startPressed(); break;
        case 1: _t->startPoolMining(); break;
        case 2: _t->stopPoolMining(); break;
        case 3: _t->updateSpeed(); break;
        case 4: _t->loadSettings(); break;
        case 5: _t->saveSettings(); break;
        case 6: _t->reportToList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->minerStarted(); break;
        case 8: _t->minerError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 9: _t->minerFinished(); break;
        case 10: _t->readProcessOutput(); break;
        case 11: { QString _r = _t->getTime((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->enableMiningControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->enablePoolMiningControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: { ClientModel::MiningType _r = _t->getMiningType();
            if (_a[0]) *reinterpret_cast< ClientModel::MiningType*>(_a[0]) = _r; }  break;
        case 15: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->debugToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MiningPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MiningPage.data,
      qt_meta_data_MiningPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *MiningPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiningPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MiningPage.stringdata))
        return static_cast<void*>(const_cast< MiningPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int MiningPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
