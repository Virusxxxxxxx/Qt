#include "listviewtest.h"
#include "ui_listviewtest.h"
#include <QMessageBox>
ListViewTest::ListViewTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListViewTest)
{
    ui->setupUi(this);
    initModel();
    ui->listView->setModel(Student);
}

ListViewTest::~ListViewTest()
{
    delete ui;
}

void ListViewTest::initModel()
{
    Student = new QStandardItemModel(0,1);
    for(int i = 0;i<10;i++)
    {
        QStandardItem *item = new QStandardItem(QString("学生:%1").arg(i));
        item->setCheckable(true);
        item->setCheckState(Qt::Unchecked);
        Student->appendRow(item);
    }

    Teacher = new QStandardItemModel(0,1);
    for(int i = 0;i<10;i++)
    {
        QStandardItem *item = new QStandardItem(QString("老师:%1").arg(i));
        item->setCheckable(true);
        item->setCheckState(Qt::Unchecked);
        Teacher->appendRow(item);
    }

    Worker = new QStandardItemModel(0,1);
    for(int i = 0;i<10;i++)
    {
        QStandardItem *item = new QStandardItem(QString("工人:%1").arg(i));
        item->setCheckable(true);
        item->setCheckState(Qt::Unchecked);
        Worker->appendRow(item);
    }

}

void ListViewTest::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1.contains("Student"))
    {
        ui->listView->setModel(Student);
    }
    if(arg1.contains("Teacher"))
    {
        ui->listView->setModel(Teacher);
    }
    if(arg1.contains("Worker"))
    {
        ui->listView->setModel(Worker);
    }
}

void ListViewTest::on_pushButton_2_clicked()
{
    close();
}

void ListViewTest::on_BtConfire_clicked()
{
    QString current = ui->comboBox->currentText();
    QString total;
    if(current.contains("Student"))
    {
        for(int i = 0 ; i < Student->rowCount() ; i++)
        {
            if(Student->item(i,0)->checkState() == Qt::Checked)
                total += Student->item(i,0)->text() + "\n";
        }
    }

    if(current.contains("Teacher"))
    {
        for(int i = 0 ; i < Teacher->rowCount() ; i++)
        {
            if(Teacher->item(i,0)->checkState() == Qt::Checked)
                total += Teacher->item(i,0)->text() + "\n";
        }
    }

    if(current.contains("Worker"))
    {
        for(int i = 0 ; i < Worker->rowCount() ; i++)
        {
            if(Worker->item(i,0)->checkState() == Qt::Checked)
                total += Worker->item(i,0)->text() + "\n";
        }
    }
    QMessageBox msgbox;
    msgbox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgbox.setText("Current Model : " + current);
    msgbox.setWindowTitle(current);
    msgbox.setInformativeText(total);
    if(msgbox.exec() == QMessageBox::Accepted)
    {
        close();
    }
}
