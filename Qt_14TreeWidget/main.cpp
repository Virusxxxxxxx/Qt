#include "mytreewidget.h"
#include <QApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTreeWidget w;
    w.show();
    qDebug()<<QDir::currentPath();
    return a.exec();
}
