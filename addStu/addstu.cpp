#include "addstu.h"
#include "ui_addstu.h"
#include <QString>
#include <QDebug>
#include <QList>
#include <QMessageBox>
#include <QFile>
#include <QIODevice>
#include <QTextStream>

addStu::addStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addStu)
{
    ui->setupUi(this);

}

addStu::~addStu()
{
    delete ui;
}

void addStu::on_pbtn_OK_clicked()
{
    QString name = ui->le_name->text();
    QString num = ui->le_num->text();
    QString sex = ui->sexGroup->checkedButton()->text();
    QString age = ui->comboBox_age->currentText();
    QString major = ui->comboBox_major->currentText();

    QList<QAbstractButton *> ins_list = this->ui->insGroup->buttons();
    QString ins;

    int ins_size = ins_list.size();
    for(int i = 0 ; i < ins_size ; i++)
    {
        QAbstractButton *temp = ins_list.at(i);
        if(temp->isChecked())
        {
            if(ins != "")
                ins += " ";
            ins += temp->text();
        }
    }

    QString content = name + '\n' + num + '\n' + sex + '\n' + age + '\n' + major + '\n' + ins;
    QString cnt = name + " " + num + " " + sex + " " + age + " " + major + " " + ins + "\n";

    if(name.size() < 1 || num.size() < 10 || ins.size() < 1 || sex.size() < 1)
        QMessageBox::critical(this,"ERROR","输入信息有误，请检查！","确认");
    else
    {
        int ret = QMessageBox::question(this,"确认信息",content,"确认","取消");
        if(ret == 0)
        {
            init_addstu();
            writestd(cnt);
        }
    }
}


void addStu::on_pbtn_cancel_clicked()
{
    this->close();
}

void addStu::init_addstu()
{
    this->ui->le_name->setFocus();
    ui->le_name->clear();
    ui->le_num->clear();
    ui->rbtn_male->setChecked(true);
    ui->comboBox_age->setCurrentIndex(0);
    ui->comboBox_major->setCurrentIndex(0);
    for(int i = 0 ; i < ui->insGroup->buttons().size() ; i++)
    {
        QAbstractButton *temp = ui->insGroup->buttons().at(i);
        temp->setChecked(false);
    }
}

void addStu::writestd(QString cnt)
{
    QFile file("Student.txt");
    if(!file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(this,"fail","文件打开失败，请重试","确定");
        return;
    }
    QTextStream out(&file);
    out<<cnt;
    QMessageBox::information(this,"success","Information saved","确定");
    file.close();
}
