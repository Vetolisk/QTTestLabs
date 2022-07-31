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
    QByteArrayData data[22];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "SetStopDebug"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "PaintRect"
QT_MOC_LITERAL(4, 35, 1), // "x"
QT_MOC_LITERAL(5, 37, 1), // "y"
QT_MOC_LITERAL(6, 39, 1), // "l"
QT_MOC_LITERAL(7, 41, 1), // "w"
QT_MOC_LITERAL(8, 43, 13), // "AnimationDown"
QT_MOC_LITERAL(9, 57, 14), // "AnimationRight"
QT_MOC_LITERAL(10, 72, 12), // "setAnimation"
QT_MOC_LITERAL(11, 85, 4), // "Move"
QT_MOC_LITERAL(12, 90, 23), // "QStack<QGraphicsItem*>&"
QT_MOC_LITERAL(13, 114, 3), // "one"
QT_MOC_LITERAL(14, 118, 3), // "two"
QT_MOC_LITERAL(15, 122, 5), // "Hanoi"
QT_MOC_LITERAL(16, 128, 1), // "n"
QT_MOC_LITERAL(17, 130, 4), // "tree"
QT_MOC_LITERAL(18, 135, 12), // "DeleteMyItem"
QT_MOC_LITERAL(19, 148, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(20, 174, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(21, 196, 19) // "onAnimationFinished"

    },
    "MainWindow\0SetStopDebug\0\0PaintRect\0x\0"
    "y\0l\0w\0AnimationDown\0AnimationRight\0"
    "setAnimation\0Move\0QStack<QGraphicsItem*>&\0"
    "one\0two\0Hanoi\0n\0tree\0DeleteMyItem\0"
    "on_lineEdit_returnPressed\0"
    "on_pushButton_clicked\0onAnimationFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    4,   70,    2, 0x08 /* Private */,
       8,    0,   79,    2, 0x08 /* Private */,
       9,    0,   80,    2, 0x08 /* Private */,
      10,    0,   81,    2, 0x08 /* Private */,
      11,    2,   82,    2, 0x08 /* Private */,
      15,    4,   87,    2, 0x08 /* Private */,
      18,    0,   96,    2, 0x08 /* Private */,
      19,    0,   97,    2, 0x08 /* Private */,
      20,    0,   98,    2, 0x08 /* Private */,
      21,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,   16,   13,   14,   17,
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
        case 0: _t->SetStopDebug(); break;
        case 1: _t->PaintRect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->AnimationDown(); break;
        case 3: _t->AnimationRight(); break;
        case 4: _t->setAnimation(); break;
        case 5: _t->Move((*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[2]))); break;
        case 6: _t->Hanoi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[2])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[3])),(*reinterpret_cast< QStack<QGraphicsItem*>(*)>(_a[4]))); break;
        case 7: _t->DeleteMyItem(); break;
        case 8: _t->on_lineEdit_returnPressed(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->onAnimationFinished(); break;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
