/****************************************************************************
** Meta object code from reading C++ file 'dialog_http_download.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../untitled1/dialog_http_download.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_http_download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogHttpDownload_t {
    QByteArrayData data[12];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogHttpDownload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogHttpDownload_t qt_meta_stringdata_DialogHttpDownload = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DialogHttpDownload"
QT_MOC_LITERAL(1, 19, 17), // "DownLoadErrorCode"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "DownloadErrorCode"
QT_MOC_LITERAL(4, 56, 10), // "HideWindow"
QT_MOC_LITERAL(5, 67, 4), // "path"
QT_MOC_LITERAL(6, 72, 30), // "on_pushButton_loadpath_clicked"
QT_MOC_LITERAL(7, 103, 27), // "on_pushButton_start_clicked"
QT_MOC_LITERAL(8, 131, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(9, 156, 3), // "arg"
QT_MOC_LITERAL(10, 160, 19), // "UpdateDownLoadState"
QT_MOC_LITERAL(11, 180, 9) // "errorCode"

    },
    "DialogHttpDownload\0DownLoadErrorCode\0"
    "\0DownloadErrorCode\0HideWindow\0path\0"
    "on_pushButton_loadpath_clicked\0"
    "on_pushButton_start_clicked\0"
    "on_checkBox_stateChanged\0arg\0"
    "UpdateDownLoadState\0errorCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogHttpDownload[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 3,   11,

       0        // eod
};

void DialogHttpDownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogHttpDownload *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DownLoadErrorCode((*reinterpret_cast< DownloadErrorCode(*)>(_a[1]))); break;
        case 1: _t->HideWindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_loadpath_clicked(); break;
        case 3: _t->on_pushButton_start_clicked(); break;
        case 4: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->UpdateDownLoadState((*reinterpret_cast< DownloadErrorCode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogHttpDownload::*)(DownloadErrorCode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogHttpDownload::DownLoadErrorCode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogHttpDownload::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogHttpDownload::HideWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogHttpDownload::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogHttpDownload.data,
    qt_meta_data_DialogHttpDownload,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogHttpDownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogHttpDownload::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHttpDownload.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogHttpDownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DialogHttpDownload::DownLoadErrorCode(DownloadErrorCode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogHttpDownload::HideWindow(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
