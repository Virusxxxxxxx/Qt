#ifndef HELLO_H
#define HELLO_H

#include <QMainWindow>

class Hello : public QMainWindow
{
    Q_OBJECT

public:
    Hello(QWidget *parent = 0);
    ~Hello();
};

#endif // HELLO_H
