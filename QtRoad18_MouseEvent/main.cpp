#include "mymouseevent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyMouseEvent *label = new MyMouseEvent;
    label->setWindowTitle("MouseEvent");
    label->resize(300,200);
    label->setMouseTracking(true);      //可以不无需单击就直接有效果
    label->show();
    return a.exec();
}
