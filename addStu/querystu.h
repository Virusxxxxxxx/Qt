#ifndef QUERYSTU_H
#define QUERYSTU_H

#include <QDialog>
#include <QFile>
#include <QList>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QStringList>

namespace Ui {
class QueryStu;
}

class QueryStu : public QDialog
{
    Q_OBJECT

public:
    explicit QueryStu(QWidget *parent = 0);
    ~QueryStu();
    int readFromFile();
    void doQuery(int index , QString cnt);
    void setModel();
    void display(int row , QStringList subs);

private slots:
    void on_btn_search_clicked();

private:
    Ui::QueryStu *ui;
    QList<QString> stu_lines;
    QStandardItemModel *model;
};

#endif // QUERYSTU_H
