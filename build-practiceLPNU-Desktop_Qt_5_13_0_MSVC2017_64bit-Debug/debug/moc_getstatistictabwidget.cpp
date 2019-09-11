/****************************************************************************
** Meta object code from reading C++ file 'getstatistictabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../practiceLPNU/getstatistictabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getstatistictabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GetStatisticTabWidget_t {
    QByteArrayData data[7];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetStatisticTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetStatisticTabWidget_t qt_meta_stringdata_GetStatisticTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GetStatisticTabWidget"
QT_MOC_LITERAL(1, 22, 33), // "on_getStatisticForObjects_cli..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 34), // "on_getStatisticForMaterial_cl..."
QT_MOC_LITERAL(4, 92, 33), // "on_getStatisticForSuplier_cli..."
QT_MOC_LITERAL(5, 126, 19), // "addStatisticForView"
QT_MOC_LITERAL(6, 146, 14) // "statisticQuery"

    },
    "GetStatisticTabWidget\0"
    "on_getStatisticForObjects_clicked\0\0"
    "on_getStatisticForMaterial_clicked\0"
    "on_getStatisticForSuplier_clicked\0"
    "addStatisticForView\0statisticQuery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetStatisticTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void GetStatisticTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetStatisticTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_getStatisticForObjects_clicked(); break;
        case 1: _t->on_getStatisticForMaterial_clicked(); break;
        case 2: _t->on_getStatisticForSuplier_clicked(); break;
        case 3: _t->addStatisticForView((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetStatisticTabWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GetStatisticTabWidget.data,
    qt_meta_data_GetStatisticTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetStatisticTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetStatisticTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetStatisticTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GetStatisticTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
