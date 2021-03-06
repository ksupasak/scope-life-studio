#include "mainwindow.h"

#include <QApplication>
#include <QWebEngineProfile>
#include <QWebEngineSettings>

#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   QCoreApplication::setOrganizationName("PCMLIFE");
//    QWebEngineSettings::defaultSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::DnsPrefetchEnabled, true);
    QWebEngineProfile::defaultProfile()->setPersistentCookiesPolicy(QWebEngineProfile::ForcePersistentCookies);

    QPixmap pixmap(":/splash.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();
    splash.showMessage("Loaded modules");

    MainWindow w;

    QString startup = w.getCore()->getStringValue("system_startup");
    if(startup.compare("window")==0){
        w.resize(1920,1080);
        w.show();
    }
    if(startup.compare("fullscreen")==0){
        w.showFullScreen();
    }

    splash.finish(&w);

    return a.exec();
}
