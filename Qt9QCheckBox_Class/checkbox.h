#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QMainWindow>

namespace Ui {
class checkbox;
}

class checkbox : public QMainWindow
{
    Q_OBJECT

public:
    explicit checkbox(QWidget *parent = 0);
    ~checkbox();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::checkbox *ui;
};

#endif // CHECKBOX_H
