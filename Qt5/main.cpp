#include "dialog.h"
#include <QApplication>
#include <QUiLoader>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug()<<QDir::currentPath();
    QUiLoader uiloader;
    QFile file("../Qt5/dialog.ui");
    QWidget *widget = uiloader.load(&file);
    if(widget)
    {
        QPushButton *btn = widget->findChild<QPushButton*>("pushButton");
        btn->setText("btn");
        widget->show();
    }

    return a.exec();
}
