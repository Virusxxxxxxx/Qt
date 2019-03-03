#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QMainWindow>

namespace Ui {
class MyListWidget;
}

class MyListWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyListWidget(QWidget *parent = 0);
    ~MyListWidget();
private slots:
    void onOKbt();
    void onCancelbt();

private:
    Ui::MyListWidget *ui;
};

#endif // MYLISTWIDGET_H
