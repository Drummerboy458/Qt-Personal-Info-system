/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Personal_Info/mainwindow_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_Login_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_Login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_Login_t qt_meta_stringdata_MainWindow_Login = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainWindow_Login"
QT_MOC_LITERAL(1, 17, 21), // "on_yesOrNoBox_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 57, 6), // "button"
QT_MOC_LITERAL(5, 64, 22), // "on_registerBtn_clicked"
QT_MOC_LITERAL(6, 87, 26), // "on_forgetPasswdBtn_clicked"
QT_MOC_LITERAL(7, 114, 26) // "on_Exit_pushButton_clicked"

    },
    "MainWindow_Login\0on_yesOrNoBox_clicked\0"
    "\0QAbstractButton*\0button\0"
    "on_registerBtn_clicked\0"
    "on_forgetPasswdBtn_clicked\0"
    "on_Exit_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow_Login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow_Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow_Login *_t = static_cast<MainWindow_Login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_yesOrNoBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->on_registerBtn_clicked(); break;
        case 2: _t->on_forgetPasswdBtn_clicked(); break;
        case 3: _t->on_Exit_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow_Login::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow_Login.data,
      qt_meta_data_MainWindow_Login,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow_Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow_Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow_Login.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow_Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
