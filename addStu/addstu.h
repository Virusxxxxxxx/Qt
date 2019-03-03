#ifndef ADDSTU_H
#define ADDSTU_H

#include <QDialog>

namespace Ui {
class addStu;
}

class addStu : public QDialog
{
    Q_OBJECT

public:
    explicit addStu(QWidget *parent = 0);
    ~addStu();

private slots:
    void on_pbtn_OK_clicked();

    void on_pbtn_cancel_clicked();

    void init_addstu();

private:
    Ui::addStu *ui;
    void writestd(QString cnt);
};

#endif // ADDSTU_H
