
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow()
{
    this->resize(500, 200);

    MenuBar *menuBar = new MenuBar(this);
    setMenuBar(menuBar);

    QVideoWidget *videoWidget = new QVideoWidget(this);
    QScreenCapture *screenCapture = new QScreenCapture(this);
    QMediaCaptureSession *session = new QMediaCaptureSession(this);
    session->setScreenCapture(screenCapture);
    session->setVideoOutput(videoWidget);

    QList<QScreen*> screenList = QApplication::screens();

    if (screenList.length() == 0)
    {
        qDebug()<<"no screens";
    }
    else
    {
        qDebug()<<"yes screens";
        qDebug()<<screenList.length();
    }

    screenCapture->setScreen(screenList[0]);
    screenCapture->setActive(true);

    setCentralWidget(videoWidget);
}

