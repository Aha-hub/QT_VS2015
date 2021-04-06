/****************************************************************************
** Meta object code from reading C++ file 'DustMonSysT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DustMonSysT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DustMonSysT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DustMonSysT_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DustMonSysT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DustMonSysT_t qt_meta_stringdata_DustMonSysT = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DustMonSysT"
QT_MOC_LITERAL(1, 12, 10), // "SlotgetMsg"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "SoltChangePage0"
QT_MOC_LITERAL(4, 40, 15), // "SoltChangePage1"
QT_MOC_LITERAL(5, 56, 11), // "SoltTimeOut"
QT_MOC_LITERAL(6, 68, 11), // "SoltTextCon"
QT_MOC_LITERAL(7, 80, 11), // "SoltAddDate"
QT_MOC_LITERAL(8, 92, 11) // "SoltGetDate"

    },
    "DustMonSysT\0SlotgetMsg\0\0SoltChangePage0\0"
    "SoltChangePage1\0SoltTimeOut\0SoltTextCon\0"
    "SoltAddDate\0SoltGetDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DustMonSysT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DustMonSysT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DustMonSysT *_t = static_cast<DustMonSysT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotgetMsg(); break;
        case 1: _t->SoltChangePage0(); break;
        case 2: _t->SoltChangePage1(); break;
        case 3: _t->SoltTimeOut(); break;
        case 4: _t->SoltTextCon(); break;
        case 5: _t->SoltAddDate(); break;
        case 6: _t->SoltGetDate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DustMonSysT::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DustMonSysT.data,
      qt_meta_data_DustMonSysT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DustMonSysT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DustMonSysT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DustMonSysT.stringdata0))
        return static_cast<void*>(const_cast< DustMonSysT*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DustMonSysT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
