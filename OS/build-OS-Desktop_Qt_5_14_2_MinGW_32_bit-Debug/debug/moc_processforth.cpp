/****************************************************************************
** Meta object code from reading C++ file 'processforth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../processforth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processforth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessForth_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessForth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessForth_t qt_meta_stringdata_ProcessForth = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ProcessForth"
QT_MOC_LITERAL(1, 13, 18), // "get_inputB_content"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "get_inputMax_content"
QT_MOC_LITERAL(4, 54, 19), // "displayTrackNumInfo"
QT_MOC_LITERAL(5, 74, 14), // "displayCmpInfo"
QT_MOC_LITERAL(6, 89, 8), // "beginRun"
QT_MOC_LITERAL(7, 98, 8), // "emitFCFS"
QT_MOC_LITERAL(8, 107, 8), // "emitSSTF"
QT_MOC_LITERAL(9, 116, 8), // "emitSCAN"
QT_MOC_LITERAL(10, 125, 9) // "emitCSCAN"

    },
    "ProcessForth\0get_inputB_content\0\0"
    "get_inputMax_content\0displayTrackNumInfo\0"
    "displayCmpInfo\0beginRun\0emitFCFS\0"
    "emitSSTF\0emitSCAN\0emitCSCAN"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessForth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void ProcessForth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessForth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->get_inputB_content(); break;
        case 1: _t->get_inputMax_content(); break;
        case 2: _t->displayTrackNumInfo(); break;
        case 3: _t->displayCmpInfo(); break;
        case 4: _t->beginRun(); break;
        case 5: _t->emitFCFS(); break;
        case 6: _t->emitSSTF(); break;
        case 7: _t->emitSCAN(); break;
        case 8: _t->emitCSCAN(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ProcessForth::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ProcessForth.data,
    qt_meta_data_ProcessForth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProcessForth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessForth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessForth.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProcessForth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
