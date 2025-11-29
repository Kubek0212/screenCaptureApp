
#include "screencapture.h"

ScreenCapture::ScreenCapture()
{

}
ScreenCapture::ScreenCapture(QMainWindow *parent) : QVideoWidget(parent),
    session(new QMediaCaptureSession(this)),
    screenCapture(new QScreenCapture(this))
{
    session->setScreenCapture(screenCapture);
    session->setVideoOutput(this);

    QList<QScreen*> screenList = QApplication::screens();

    screenCapture->setScreen(screenList[0]);
    screenCapture->setActive(true);
}

ScreenCapture::~ScreenCapture()
{

}

void ScreenCapture::setScreenOnDisplay(QScreen *screen)
{
    if (!QApplication::screens().contains(screen))
    {
        QMessageBox::warning(this, "Display error", "Display you selected is no loger connected");
        screenCapture->setActive(false);
    }
    else
    {
        screenCapture->setScreen(screen);
        screenCapture->setActive(true);
    }
}
