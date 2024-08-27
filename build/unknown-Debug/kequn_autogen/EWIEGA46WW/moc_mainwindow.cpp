/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_action_N_triggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(4, 55, 20), // "receive_from_morebus"
QT_MOC_LITERAL(5, 76, 7), // "a_banci"
QT_MOC_LITERAL(6, 84, 11), // "a_zhongdian"
QT_MOC_LITERAL(7, 96, 14), // "a_facheshijian"
QT_MOC_LITERAL(8, 111, 8), // "a_zuowei"
QT_MOC_LITERAL(9, 120, 19), // "receive_from_search"
QT_MOC_LITERAL(10, 140, 11), // "end_refresh"
QT_MOC_LITERAL(11, 152, 21), // "on_action_J_triggered"
QT_MOC_LITERAL(12, 174, 21), // "on_action_M_triggered"
QT_MOC_LITERAL(13, 196, 21), // "on_action_H_triggered"
QT_MOC_LITERAL(14, 218, 24), // "on_refreshButton_clicked"
QT_MOC_LITERAL(15, 243, 20), // "on_delButton_clicked"
QT_MOC_LITERAL(16, 264, 23), // "on_changeButton_clicked"
QT_MOC_LITERAL(17, 288, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(18, 312, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(19, 336, 21), // "on_action_S_triggered"
QT_MOC_LITERAL(20, 358, 21) // "on_action_R_triggered"

    },
    "MainWindow\0on_action_N_triggered\0\0"
    "on_addButton_clicked\0receive_from_morebus\0"
    "a_banci\0a_zhongdian\0a_facheshijian\0"
    "a_zuowei\0receive_from_search\0end_refresh\0"
    "on_action_J_triggered\0on_action_M_triggered\0"
    "on_action_H_triggered\0on_refreshButton_clicked\0"
    "on_delButton_clicked\0on_changeButton_clicked\0"
    "on_searchButton_clicked\0on_pushButton_5_clicked\0"
    "on_action_S_triggered\0on_action_R_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    4,   91,    2, 0x08 /* Private */,
       9,    2,  100,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_action_N_triggered(); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->receive_from_morebus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->receive_from_search((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->end_refresh(); break;
        case 5: _t->on_action_J_triggered(); break;
        case 6: _t->on_action_M_triggered(); break;
        case 7: _t->on_action_H_triggered(); break;
        case 8: _t->on_refreshButton_clicked(); break;
        case 9: _t->on_delButton_clicked(); break;
        case 10: _t->on_changeButton_clicked(); break;
        case 11: _t->on_searchButton_clicked(); break;
        case 12: _t->on_pushButton_5_clicked(); break;
        case 13: _t->on_action_S_triggered(); break;
        case 14: _t->on_action_R_triggered(); break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
