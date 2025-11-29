
#include "custommenubar.h"

CustomMenuBar::CustomMenuBar()
{

}

CustomMenuBar::CustomMenuBar(QMainWindow *parent) : QMenuBar(parent)
{
    this->setMinimumWidth(800);
    screenMenu = this->addMenu("Screens");
    populateScreenMenu();


    captionMenu = this->addMenu("Mode");
    QAction *captionNative = new QAction("Native cation", this);
    QAction *caption60 = new QAction("Caption 60FPS", this);
    QAction *caption30 = new QAction("Caption 30FPS", this);
    QAction *caption20 = new QAction("Caption 20FPS", this);
    QAction *caption10 = new QAction("Caption 10FPS", this);

    captionMenu->addAction(captionNative);
    captionMenu->addAction(caption60);
    captionMenu->addAction(caption30);
    captionMenu->addAction(caption20);
    captionMenu->addAction(caption10);


    resizeMenu = this->addMenu("Resize");
    QAction *sizeLarge = new QAction("Size large", this);
    QAction *sizeMedium = new QAction("Size medium", this);
    QAction *sizeSmall = new QAction("Size small", this);

    qDebug()<<sizeLarge->isEnabled();

    resizeMenu->addAction(sizeLarge);
    resizeMenu->addAction(sizeMedium);
    resizeMenu->addAction(sizeSmall);

    connect(sizeSmall, &QAction::triggered, this, &CustomMenuBar::testSlot);

}

CustomMenuBar::~CustomMenuBar()
{

}

void CustomMenuBar::populateScreenMenu()
{
    screenMenu->clear();
    QAction *refreshScreensAction = new QAction("Refresh screens list", this);
    screenMenu->addAction(refreshScreensAction);
    connect(refreshScreensAction, &QAction::triggered, this, &CustomMenuBar::populateScreenMenu);

    screenMenu->addSeparator(); //-----------------------

    QList<QScreen*> screens = QApplication::screens();
    qDebug()<<"detected screens: "<< screens.size();
    for (QScreen *screen : screens)
    {
        QString screenName = screen->name();
        QAction *screenAction = new QAction(screenName, this);
        connect(screenAction, &QAction::triggered, this, [this, screen](){screenCapture->setScreenOnDisplay(screen);});
        screenMenu->addAction(screenAction);
    }
}

void CustomMenuBar::setScreenCapture(ScreenCapture *sC)
{
    screenCapture = sC;
}

void CustomMenuBar::testSlot()
{
    qDebug()<<"run test slot";
}

