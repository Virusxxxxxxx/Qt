#ifndef LISTVIEWTEST_H
#define LISTVIEWTEST_H

#include <QWidget>
#include <QStandardItemModel>
namespace Ui {
class ListViewTest;
}

class ListViewTest : public QWidget
{
    Q_OBJECT

public:
    explicit ListViewTest(QWidget *parent = 0);
    ~ListViewTest();
private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_BtConfire_clicked();

private:
    void initModel();
private:
    Ui::ListViewTest *ui;
    QStandardItemModel *Student;
    QStandardItemModel *Teacher;
    QStandardItemModel *Worker;
};

#endif // LISTVIEWTEST_H
