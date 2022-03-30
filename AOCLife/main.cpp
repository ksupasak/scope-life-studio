#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include "stationwindow.h"
#include <QWebEngineSettings>
#include <QWebEngineProfile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap(":/AOC.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();
    splash.showMessage("Loaded modules");

    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    QWebEngineProfile::defaultProfile()->settings()->setAttribute(QWebEngineSettings::DnsPrefetchEnabled, true);
    QWebEngineProfile::defaultProfile()->setPersistentCookiesPolicy(QWebEngineProfile::ForcePersistentCookies);



    MainWindow w;
    w.show();
    splash.finish(&w);
    w.setUrl(QUrl("https://pcm-life.com:1792/"));
//      w.setUrl(QUrl("https://www.apple.com/"));

    return a.exec();
}
