
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
