/****************************************************************************
** Meta object code from reading C++ file 'webcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "webcontroller.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebController_t {
    const uint offsetsAndSize[44];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_WebController_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_WebController_t qt_meta_stringdata_WebController = {
    {
QT_MOC_LITERAL(0, 13), // "WebController"
QT_MOC_LITERAL(14, 4), // "back"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 12), // "startCapture"
QT_MOC_LITERAL(33, 3), // "url"
QT_MOC_LITERAL(37, 14), // "consoleMessage"
QT_MOC_LITERAL(52, 45), // "QWebEnginePage::JavaScriptCon..."
QT_MOC_LITERAL(98, 5), // "level"
QT_MOC_LITERAL(104, 7), // "message"
QT_MOC_LITERAL(112, 17), // "on_go_btn_clicked"
QT_MOC_LITERAL(130, 10), // "urlChanged"
QT_MOC_LITERAL(141, 12), // "loadFinished"
QT_MOC_LITERAL(154, 2), // "ok"
QT_MOC_LITERAL(157, 12), // "loadProgress"
QT_MOC_LITERAL(170, 8), // "progress"
QT_MOC_LITERAL(179, 11), // "loadStarted"
QT_MOC_LITERAL(191, 19), // "startCaptureRequest"
QT_MOC_LITERAL(211, 19), // "on_next_btn_clicked"
QT_MOC_LITERAL(231, 19), // "on_back_btn_clicked"
QT_MOC_LITERAL(251, 19), // "on_exit_btn_clicked"
QT_MOC_LITERAL(271, 20), // "on_url_returnPressed"
QT_MOC_LITERAL(292, 18) // "consoleMessagePage"

    },
    "WebController\0back\0\0startCapture\0url\0"
    "consoleMessage\0"
    "QWebEnginePage::JavaScriptConsoleMessageLevel\0"
    "level\0message\0on_go_btn_clicked\0"
    "urlChanged\0loadFinished\0ok\0loadProgress\0"
    "progress\0loadStarted\0startCaptureRequest\0"
    "on_next_btn_clicked\0on_back_btn_clicked\0"
    "on_exit_btn_clicked\0on_url_returnPressed\0"
    "consoleMessagePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    1,   99,    2, 0x06,    2 /* Public */,
       5,    2,  102,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  107,    2, 0x08,    7 /* Private */,
      10,    1,  108,    2, 0x08,    8 /* Private */,
      11,    1,  111,    2, 0x08,   10 /* Private */,
      13,    1,  114,    2, 0x08,   12 /* Private */,
      15,    0,  117,    2, 0x08,   14 /* Private */,
      16,    1,  118,    2, 0x08,   15 /* Private */,
      17,    0,  121,    2, 0x08,   17 /* Private */,
      18,    0,  122,    2, 0x08,   18 /* Private */,
      19,    0,  123,    2, 0x08,   19 /* Private */,
      20,    0,  124,    2, 0x08,   20 /* Private */,
      21,    2,  125,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QUrl,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,

       0        // eod
};

void WebController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back(); break;
        case 1: { bool _r = _t->startCapture((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->consoleMessage((*reinterpret_cast< QWebEnginePage::JavaScriptConsoleMessageLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->on_go_btn_clicked(); break;
        case 4: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->loadStarted(); break;
        case 8: _t->startCaptureRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->on_next_btn_clicked(); break;
        case 10: _t->on_back_btn_clicked(); break;
        case 11: _t->on_exit_btn_clicked(); break;
        case 12: _t->on_url_returnPressed(); break;
        case 13: _t->consoleMessagePage((*reinterpret_cast< QWebEnginePage::JavaScriptConsoleMessageLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebController::back)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (WebController::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebController::startCapture)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebController::*)(QWebEnginePage::JavaScriptConsoleMessageLevel , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebController::consoleMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WebController::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WebController.offsetsAndSize,
    qt_meta_data_WebController,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WebController_t
, QtPrivate::TypeAndForceComplete<WebController, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWebEnginePage::JavaScriptConsoleMessageLevel, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWebEnginePage::JavaScriptConsoleMessageLevel, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *WebController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebController.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WebController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void WebController::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
bool WebController::startCapture(const QUrl & _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void WebController::consoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
