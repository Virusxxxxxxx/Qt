#include "myqmessagebox.h"
#include "ui_myqmessagebox.h"
#include <QMessageBox>
MyQMessageBox::MyQMessageBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyQMessageBox)
{
    ui->setupUi(this);
}

MyQMessageBox::~MyQMessageBox()
{
    delete ui;
}

void MyQMessageBox::on_pushButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox::question(this,"Question","Are you sure?",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
    {
        QMessageBox::information(this,"info","Good!");
    }
    else
    {
        QMessageBox::information(this,"info","Sorry!");
    }
}

void MyQMessageBox::on_pushButton_2_clicked()
{
    QMessageBox msgbox;
    msgbox.setText("The document has been modified.");
    msgbox.setInformativeText("Do you want to save your change?");
    msgbox.setDetailedText("Difference here...");
    msgbox.setStandardButtons(QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel);
    msgbox.setDefaultButton(QMessageBox::Save);
    int ret = msgbox.exec();
    switch (ret) {
    case QMessageBox::Save:
        QMessageBox::information(this,"info","Save!");
        break;
    case QMessageBox::Discard:
        QMessageBox::information(this,"info","Discard!");
        break;
    case QMessageBox::Cancel:
        QMessageBox::information(this,"info","Cancel!");
        break;
    default:
        break;
    }
}
