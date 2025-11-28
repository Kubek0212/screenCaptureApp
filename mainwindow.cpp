
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow() : menuBar(new CustomMenuBar(this)), screenCapture(new ScreenCapture(this))
{
    this->resize(500, 200);

    setMenuBar(menuBar);
    setCentralWidget(screenCapture);

    qDebug()<< "Menu bar pointer:"<<menuBar;
    qDebug()<< "QMainWindow::menuBar() pointer"<<this->QMainWindow::menuBar();
}

