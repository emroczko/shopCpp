/****************************************************************************
** Meta object code from reading C++ file 'mainwindow2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PROEProjekt2/mainwindow2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow2_t {
    QByteArrayData data[14];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow2_t qt_meta_stringdata_MainWindow2 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindow2"
QT_MOC_LITERAL(1, 12, 25), // "on_Dodaj_samochod_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 30), // "on_Posiadane_samochodu_clicked"
QT_MOC_LITERAL(4, 70, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 92, 17), // "on_Wyjcie_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_Sprzedaj_Auto_clicked"
QT_MOC_LITERAL(7, 135, 30), // "on_Posiadane_motocykle_clicked"
QT_MOC_LITERAL(8, 166, 35), // "on_stanKontsa_windowIconTextC..."
QT_MOC_LITERAL(9, 202, 8), // "iconText"
QT_MOC_LITERAL(10, 211, 21), // "on_Savetofile_clicked"
QT_MOC_LITERAL(11, 233, 27), // "on_SprzedajMotocykl_clicked"
QT_MOC_LITERAL(12, 261, 20), // "on_SalonInfo_clicked"
QT_MOC_LITERAL(13, 282, 27) // "on_Zatrudnij_nowego_clicked"

    },
    "MainWindow2\0on_Dodaj_samochod_clicked\0"
    "\0on_Posiadane_samochodu_clicked\0"
    "on_pushButton_clicked\0on_Wyjcie_clicked\0"
    "on_Sprzedaj_Auto_clicked\0"
    "on_Posiadane_motocykle_clicked\0"
    "on_stanKontsa_windowIconTextChanged\0"
    "iconText\0on_Savetofile_clicked\0"
    "on_SprzedajMotocykl_clicked\0"
    "on_SalonInfo_clicked\0on_Zatrudnij_nowego_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow2[] = {

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
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Dodaj_samochod_clicked(); break;
        case 1: _t->on_Posiadane_samochodu_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_Wyjcie_clicked(); break;
        case 4: _t->on_Sprzedaj_Auto_clicked(); break;
        case 5: _t->on_Posiadane_motocykle_clicked(); break;
        case 6: _t->on_stanKontsa_windowIconTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_Savetofile_clicked(); break;
        case 8: _t->on_SprzedajMotocykl_clicked(); break;
        case 9: _t->on_SalonInfo_clicked(); break;
        case 10: _t->on_Zatrudnij_nowego_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow2::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow2.data,
    qt_meta_data_MainWindow2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow2.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
