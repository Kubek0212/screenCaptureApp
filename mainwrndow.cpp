
#include "screencapturewindow.h"

ScreenCaptureWindow::ScreenCaptureWindow()
{
    this->resize(500, 200);
    MenuBar *menuBar = new MenuBar(this);
    setMenuBar(menuBar);

    QVideoWidget *videoWidget = new QVideoWidget(this);
    setCentralWidget(videoWidget);

}

