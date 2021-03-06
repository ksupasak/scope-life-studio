#ifndef WEBCONTROLLER_H
#define WEBCONTROLLER_H

#include <QWidget>
#include <QWebEngineView>
#include <corelib.h>
#include <QWebEnginePage>

#include "customwebenginepage.h"

#include "ScopeLifeGUI_global.h"

namespace Ui {
class WebController;
}

class SCOPELIFEGUI_EXPORT WebController : public QWidget
{
    Q_OBJECT

public:
    explicit WebController(QWidget *parent = nullptr);
    ~WebController();

    void setUrl(const QUrl& url);

    void setCore(CoreLib *core);

    void finish();

signals:

    void back();

    bool startCapture(const QUrl&url);

    void consoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString &message);


private slots:
    void on_go_btn_clicked();

    void urlChanged(const QUrl& url);
    void loadFinished(bool ok);
    void loadProgress(int progress);
    void loadStarted();
    void startCaptureRequest(const QUrl& url);

    void on_next_btn_clicked();

    void on_back_btn_clicked();

    void on_exit_btn_clicked();

    void on_url_returnPressed();

    void consoleMessagePage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString &message);


private:
    Ui::WebController *ui;
    CoreLib *core;
    QWebEngineView *view;
    QWebEngineProfile* profile;
    CustomWebEnginePage *current_page=NULL;

};

#endif // WEBCONTROLLER_H
