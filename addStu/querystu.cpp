#include "querystu.h"
#include "ui_querystu.h"
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QString>
/**********
 * 1  ReadFromFile 读取文件
 * 2  doQuery    split分割字符串   QStringList存放分割好的字符串
 * 3  setModel 建立表格模型
 * 4  display  填入表格
 *
 * */
QueryStu::QueryStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QueryStu)
{
    ui->setupUi(this);
    //判断打开文件是否成功
    if(readFromFile() == -1)
    {
        QMessageBox::critical(this,"严重错误","读取文件失败，请重试");
        this->close();
    }

    //建立表格模型
    model = new QStandardItemModel;
    setModel();
}

QueryStu::~QueryStu()
{
    delete ui;
}

//读取文件
int QueryStu::readFromFile()
{
    QFile file("Student.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return -1;

    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        stu_lines.append(line);
    }
    file.close();
    return 0;
}

void QueryStu::doQuery(int index, QString cnt)
{
    int row = 0;
    for(int i = 0 ; i < stu_lines.size() ; i++)
    {
        QString line = stu_lines.at(i);
        //line = line.trimmed(); 去除多余的空格
        QStringList subs = line.split(" ");
        QString temp = subs.at(0);
        switch (index) {
        case 1:
            if(temp.contains(cnt))
                display(row++,subs);
            break;
        case 2:
            if(cnt == subs.at(1))
                display(row++,subs);
            break;
        case 3:
            if(cnt == subs.at(2))
                display(row++,subs);
            break;
        case 4:
            if(cnt == subs.at(3))
                display(row++,subs);
            break;
        case 5:
            if(cnt == subs.at(4))
                display(row++,subs);
            break;
        default:
            break;
        }
    }
}

void QueryStu::setModel()
{
    model->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    model->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    model->setHorizontalHeaderItem(2,new QStandardItem("性别"));
    model->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
    model->setHorizontalHeaderItem(4,new QStandardItem("院系"));
    model->setHorizontalHeaderItem(5,new QStandardItem("兴趣"));
    this->ui->tableView->setModel(model);

    ui->tableView->setColumnWidth(0,120);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,50);
    ui->tableView->setColumnWidth(3,50);
    ui->tableView->setColumnWidth(4,120);
    ui->tableView->setColumnWidth(5,200);
}

void QueryStu::display(int row, QStringList subs)
{
    for(int i = 0 ; i < 5 ; i++)
    {
        this->model->setItem(row,i,new QStandardItem(subs.at(i)));
    }
    QString temp = "";
    for(int i = 5 ; i < subs.size() ; i++)
    {
        if(temp != "")
            temp += ",";
        temp += subs.at(i);
    }
    this->model->setItem(row,5,new QStandardItem(temp));
}

void QueryStu::on_btn_search_clicked()
{
    this->model->clear();
    this->setModel();
    int index = ui->cbb_method->currentIndex();
    QString cnt = ui->le_search->text();
    doQuery(index,cnt);
}
