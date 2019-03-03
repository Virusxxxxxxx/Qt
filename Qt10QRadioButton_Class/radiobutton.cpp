#include "radiobutton.h"
#include "ui_radiobutton.h"
#include <QMessageBox>
RadioButton::RadioButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RadioButton)
{
    ui->setupUi(this);
}

RadioButton::~RadioButton()
{
    delete ui;
}

void RadioButton::on_pushButton_clicked()
{
    if(ui->radioButton_dragon->isChecked())
        QMessageBox::information(this,"LR",ui->radioButton_dragon->text());
    else
        QMessageBox::information(this,"LR",ui->radioButton_donglin->text());
}

void RadioButton::on_pushButton_2_clicked()
{
    if(ui->radioButton_chengzhang->isChecked())
        QMessageBox::information(this,"XD",ui->radioButton_chengzhang->text());
    else if(ui->radioButton_ziyang->isChecked())
        QMessageBox::information(this,"XD",ui->radioButton_ziyang->text());
}
