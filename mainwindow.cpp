
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow() : menuBar(new MenuBar(this)), screenCapture(new ScreenCapture(this))
{
    this->resize(500, 200);

    setMenuBar(menuBar);
    setCentralWidget(screenCapture);
}

