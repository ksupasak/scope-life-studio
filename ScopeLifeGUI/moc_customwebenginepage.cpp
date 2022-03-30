/****************************************************************************
** Meta object code from reading C++ file 'customwebenginepage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "customwebenginepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customwebenginepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomWebEnginePage_t {
    const uint offsetsAndSize[26];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CustomWebEnginePage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CustomWebEnginePage_t qt_meta_stringdata_CustomWebEnginePage = {
    {
QT_MOC_LITERAL(0, 19), // "CustomWebEnginePage"
QT_MOC_LITERAL(20, 12), // "startCapture"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 3), // "url"
QT_MOC_LITERAL(38, 14), // "consoleMessage"
QT_MOC_LITERAL(53, 29), // "JavaScriptConsoleMessageLevel"
QT_MOC_LITERAL(83, 5), // "level"
QT_MOC_LITERAL(89, 7), // "message"
QT_MOC_LITERAL(97, 15), // "startWebCapture"
QT_MOC_LITERAL(113, 14), // "featureControl"
QT_MOC_LITERAL(128, 6), // "origin"
QT_MOC_LITERAL(135, 23), // "QWebEnginePage::Feature"
QT_MOC_LITERAL(159, 7) // "feature"

    },
    "CustomWebEnginePage\0startCapture\0\0url\0"
    "consoleMessage\0JavaScriptConsoleMessageLevel\0"
    "level\0message\0startWebCapture\0"
    "featureControl\0origin\0QWebEnginePage::Feature\0"
    "feature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomWebEnginePage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    2,   41,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   46,    2, 0x0a,    6 /* Public */,
       9,    2,   49,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 11,   10,   12,

       0        // eod
};

void CustomWebEnginePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomWebEnginePage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startCapture((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->consoleMessage((*reinterpret_cast< JavaScriptConsoleMessageLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->startWebCapture((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 3: _t->featureControl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QWebEnginePage::Feature(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomWebEnginePage::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomWebEnginePage::startCapture)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomWebEnginePage::*)(JavaScriptConsoleMessageLevel , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomWebEnginePage::consoleMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CustomWebEnginePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWebEnginePage::staticMetaObject>(),
    qt_meta_stringdata_CustomWebEnginePage.offsetsAndSize,
    qt_meta_data_CustomWebEnginePage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CustomWebEnginePage_t
, QtPrivate::TypeAndForceComplete<CustomWebEnginePage, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<JavaScriptConsoleMessageLevel, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>, QtPrivate::TypeAndForceComplete<QWebEnginePage::Feature, std::false_type>


>,
    nullptr
} };


const QMetaObject *CustomWebEnginePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomWebEnginePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomWebEnginePage.stringdata0))
        return static_cast<void*>(this);
    return QWebEnginePage::qt_metacast(_clname);
}

int CustomWebEnginePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEnginePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CustomWebEnginePage::startCapture(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomWebEnginePage::consoleMessage(JavaScriptConsoleMessageLevel _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
