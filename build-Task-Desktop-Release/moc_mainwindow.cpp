/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Task/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QStack>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "PaintRect"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "x"
QT_MOC_LITERAL(4, 24, 1), // "y"
QT_MOC_LITERAL(5, 26, 1), // "l"
QT_MOC_LITERAL(6, 28, 1), // "w"
QT_MOC_LITERAL(7, 30, 14), // "AnimationRight"
QT_MOC_LITERAL(8, 45, 12), // "setAnimation"
QT_MOC_LITERAL(9, 58, 4), // "Move"
QT_MOC_LITERAL(10, 63, 23), // "QStack<QGraphicsItem*>&"
QT_MOC_LITERAL(11, 87, 3), // "one"
QT_MOC_LITERAL(12, 91, 3), // "two"
QT_MOC_LITERAL(13, 95, 5), // "Hanoi"
QT_MOC_LITERAL(14, 101, 1), // "n"
QT_MOC_LITERAL(15, 103, 4), // "tree"
QT_MOC_LITERAL(16, 108, 12), // "DeleteMyItem"
QT_MOC_LITERAL(17, 121, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(18, 147, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0PaintRect\0\0x\0y\0l\0w\0"
    "AnimationRight\0setAnimation\0Move\0"
    "QStack<QGraphicsItem*>&\0one\0two\0Hanoi\0"
    "n\0tree\0DeleteMyItem\0on_lineEdit_returnPressed\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    2,   65,    2, 0x08 /* Private */,
      13,    4,   70,    2, 0x08 /* Private */,
      16,    0,   79,    2, 0x08 /* Private */,
      17,    0,   80,    2, 0x08 /* Private */,
      18,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,   14,   11,   12,   15,
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
        case 0: _t->PaintRect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->AnimationRight(); break;
        case 2: _t->setAnimation(); break;
        case 3: _t->Move((*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[2]))); break;
        case 4: _t->Hanoi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[2])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[3])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[4]))); break;
        case 5: _t->DeleteMyItem(); break;
        case 6: _t->on_lineEdit_returnPressed(); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
