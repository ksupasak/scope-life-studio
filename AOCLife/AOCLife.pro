QT       += core gui multimedia multimediawidgets webenginewidgets serialport network sql core5compat webenginecore

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    stationwindow.cpp

HEADERS += \
    mainwindow.h \
    stationwindow.h

FORMS += \
    mainwindow.ui \
    stationwindow.ui




win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ScopeLifeCore/release/ -lScopeLifeCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ScopeLifeCore/debug/ -lScopeLifeCore
else:unix: LIBS += -L$$OUT_PWD/../ScopeLifeCore/ -lScopeLifeCore

INCLUDEPATH += $$PWD/../ScopeLifeCore
DEPENDPATH += $$PWD/../ScopeLifeCore


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../ScopeLifeGUI/release/ -lScopeLifeGUI
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../ScopeLifeGUI/debug/ -lScopeLifeGUI
else:unix: LIBS += -L$$OUT_PWD/../ScopeLifeGUI/ -lScopeLifeGUI

INCLUDEPATH += $$PWD/../ScopeLifeGUI
DEPENDPATH += $$PWD/../ScopeLifeGUI


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    main.qss

