#ifndef MYMOUSEEVENT_H
#define MYMOUSEEVENT_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
class MyMouseEvent : public QLabel
{
    Q_OBJECT

//public:
//    MyMouseEvent(QWidget *parent = 0);
//    ~MyMouseEvent();
protected:
    void mouseMoveEvent(QMouseEvent *event);            //三个虚函数
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};

#endif // MYMOUSEEVENT_H
