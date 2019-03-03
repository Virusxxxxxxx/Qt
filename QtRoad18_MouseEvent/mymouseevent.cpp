#include "mymouseevent.h"

//MyMouseEvent::MyMouseEvent(QWidget *parent)
//    : QWidget(parent)
//{
//}

//MyMouseEvent::~MyMouseEvent()
//{

//}

void MyMouseEvent::mouseMoveEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Move: (%1 , %2)</h1></center>").
                  arg(QString::number(event->x()),QString::number(event->y())));        //arg函数可以自动替换掉QString中出现的占位符。
}

void MyMouseEvent::mousePressEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Press: (%1, %2)</h1></center>")
                  .arg(QString::number(event->x()), QString::number(event->y())));
}

void MyMouseEvent::mouseReleaseEvent(QMouseEvent *event)            //c语言风格
{
    QString msg;
    msg.sprintf("<center><h1>Release: (%d, %d)</h1></center>",
                event->x(), event->y());
    this->setText(msg);
}
