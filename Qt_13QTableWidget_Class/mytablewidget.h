#ifndef MYTABLEWIDGET_H
#define MYTABLEWIDGET_H

#include <QWidget>

namespace Ui {
class MyTableWidget;
}

class MyTableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyTableWidget(QWidget *parent = 0);
    ~MyTableWidget();

private slots:
    void on_Bt_insert_clicked();

    void on_Bt_delete_clicked();

    void on_Search_textChanged(const QString &arg1);

private:
    Ui::MyTableWidget *ui;
};

#endif // MYTABLEWIDGET_H
