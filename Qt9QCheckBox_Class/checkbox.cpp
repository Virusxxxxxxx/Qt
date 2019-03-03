#include "checkbox.h"
#include "ui_checkbox.h"
#include <QMessageBox>
checkbox::checkbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::checkbox)
{
    ui->setupUi(this);
    ui->checkBox->setCheckState(Qt::PartiallyChecked);
}

checkbox::~checkbox()
{
    delete ui;
}

void checkbox::on_pushButton_clicked()
{
    if(ui->checkBox->checkState() == 2)
       QMessageBox::information(this,"info","Checked");
    if(ui->checkBox->checkState() == 1)
       QMessageBox::information(this,"info","PartiallyChecked");
    if(ui->checkBox->checkState() == 0)
       QMessageBox::information(this,"info","Unchecked");
}
void checkbox::on_pushButton_2_clicked()
{
    if(ui->checkBox_2->checkState() == Qt::Unchecked)
        ui->checkBox_2->setCheckState(Qt::Checked);
    else if(ui->checkBox_2->checkState() == 2)
        ui->checkBox_2->setCheckState(Qt::Unchecked);
}
