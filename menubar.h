
#ifndef MENUBAR_H
#define MENUBAR_H


#include <QMenu>
#include <QMenuBar>
#include <QAction>

class MenuBar : public QMenuBar
{
public:
    MenuBar();
    MenuBar(QWidget *parent);
};

#endif // MENUBAR_H
