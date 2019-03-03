#include <QAction>
#include <QIcon>
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include "lineedit.h"
#include "ui_lineedit.h"

LineEdit::LineEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LineEdit)
{
    qDebug()<<QDir::currentPath();
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Normal);
    ui->lineEdit->setPlaceholderText("Normal");

    ui->lineEdit_2->setEchoMode(QLineEdit::NoEcho);
    ui->lineEdit_2->setPlaceholderText("NoEcho");

    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setPlaceholderText("PassWord");

    ui->lineEdit_4->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->lineEdit_4->setPlaceholderText("PassWordEchoOnEdit");

    QAction *action = new QAction;
    action->setIcon(QIcon("/icon/clear"));

    ui->lineEdit_5->addAction(action,QLineEdit::TrailingPosition);
    connect(action,&QAction::triggered,this,&LineEdit::onClear);
}

LineEdit::~LineEdit()
{
    delete ui;
}

void LineEdit::onClear()
{
    ui->lineEdit_5->clear();
}

void LineEdit::on_pushButton_clicked()
{
    QMessageBox::information(this,"info",ui->lineEdit->text());
    ui->lineEdit->clear();
}

void LineEdit::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"info",ui->lineEdit_2->text());
    ui->lineEdit_2->clear();
}
void LineEdit::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"info",ui->lineEdit_3->text());
    ui->lineEdit_3->clear();
}
void LineEdit::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"info",ui->lineEdit_4->text());
    ui->lineEdit_4->clear();
}
