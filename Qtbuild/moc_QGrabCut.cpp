/****************************************************************************
** Meta object code from reading C++ file 'QGrabCut.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui/QGrabCut.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGrabCut.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGrabCut_t {
    QByteArrayData data[20];
    char stringdata[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGrabCut_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGrabCut_t qt_meta_stringdata_QGrabCut = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 16),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 6),
QT_MOC_LITERAL(4, 34, 18),
QT_MOC_LITERAL(5, 53, 15),
QT_MOC_LITERAL(6, 69, 12),
QT_MOC_LITERAL(7, 82, 13),
QT_MOC_LITERAL(8, 96, 15),
QT_MOC_LITERAL(9, 112, 5),
QT_MOC_LITERAL(10, 118, 20),
QT_MOC_LITERAL(11, 139, 17),
QT_MOC_LITERAL(12, 157, 6),
QT_MOC_LITERAL(13, 164, 22),
QT_MOC_LITERAL(14, 187, 8),
QT_MOC_LITERAL(15, 196, 6),
QT_MOC_LITERAL(16, 203, 30),
QT_MOC_LITERAL(17, 234, 17),
QT_MOC_LITERAL(18, 252, 5),
QT_MOC_LITERAL(19, 258, 16)
    },
    "QGrabCut\0chose_image_file\0\0excute\0"
    "chose_object_color\0chose_bkg_color\0"
    "zoomin_image\0zoomout_image\0scale_image_abs\0"
    "value\0paint_object_changed\0dot_width_changed\0"
    "_value\0segment_method_changed\0QAction*\0"
    "action\0img_window_orientation_changed\0"
    "canny_chk_changed\0state\0use_canny_or_log"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGrabCut[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,

       0        // eod
};

void QGrabCut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGrabCut *_t = static_cast<QGrabCut *>(_o);
        switch (_id) {
        case 0: _t->chose_image_file(); break;
        case 1: _t->excute(); break;
        case 2: _t->chose_object_color(); break;
        case 3: _t->chose_bkg_color(); break;
        case 4: _t->zoomin_image(); break;
        case 5: _t->zoomout_image(); break;
        case 6: _t->scale_image_abs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->paint_object_changed(); break;
        case 8: _t->dot_width_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->segment_method_changed((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->img_window_orientation_changed((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->canny_chk_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->use_canny_or_log(); break;
        default: ;
        }
    }
}

const QMetaObject QGrabCut::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QGrabCut.data,
      qt_meta_data_QGrabCut,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGrabCut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGrabCut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGrabCut.stringdata))
        return static_cast<void*>(const_cast< QGrabCut*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QGrabCut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
