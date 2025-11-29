
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow() : menuBar(new CustomMenuBar(this)), screenCapture(new ScreenCapture(this))
{
    menuBar->setScreenCapture(screenCapture);
    this->resize(500, 200);

    setMenuBar(menuBar);
    setCentralWidget(screenCapture);

    qDebug()<< "Menu bar pointer:"<<menuBar;
    qDebug()<< "QMainWindow::menuBar() pointer"<<this->QMainWindow::menuBar();

    qDebug()<< "application instance: " << QApplication::instance();



}

MainWindow::~MainWindow()
{

}


void MainWindow::onScreenAdded(QScreen *screen)
{
    qDebug()<<"The "<< screen->name()<<" has vanished!";
    menuBar->populateScreenMenu();
}

void MainWindow::onScreenRemoved(QScreen *screen)
{
    qDebug()<<"The "<< screen->name()<<" has arrived!";
    menuBar->populateScreenMenu();
}

void MainWindow::testTest()
{
    qDebug()<<"this is a test";
    qDebug()<<"test function was executed";
}
