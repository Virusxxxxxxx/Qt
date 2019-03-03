#ifndef MYQMESSAGEBOX_H
#define MYQMESSAGEBOX_H

#include <QWidget>

namespace Ui {
class MyQMessageBox;
}

class MyQMessageBox : public QWidget
{
    Q_OBJECT

public:
    explicit MyQMessageBox(QWidget *parent = 0);
    ~MyQMessageBox();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MyQMessageBox *ui;
};

#endif // MYQMESSAGEBOX_H
