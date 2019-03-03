#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moudle.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    current_num = "";
    m = new Moudle;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_0_clicked()
{
    if(current_num.size() != 0)
    {
        current_num += ui->btn_0->text();
        ui->lcdNumber->display(current_num);
    }
}

void MainWindow::on_btn_1_clicked()
{
    this->current_num += ui->btn_1->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_2_clicked()
{
    this->current_num += ui->btn_2->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_3_clicked()
{
    this->current_num += ui->btn_3->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_4_clicked()
{
    this->current_num += ui->btn_4->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_5_clicked()
{
    this->current_num += ui->btn_5->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_6_clicked()
{
    this->current_num += ui->btn_6->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_7_clicked()
{
    this->current_num += ui->btn_7->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_8_clicked()
{
    this->current_num += ui->btn_8->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_9_clicked()
{
    this->current_num += ui->btn_9->text();
    ui->lcdNumber->display(current_num);
}

void MainWindow::on_btn_clear_clicked()
{
    ui->lcdNumber->display(0);
    current_num = "";
}

void MainWindow::on_btn_plus_clicked()
{
    int num = current_num.toInt();
    this->m->getNum1(num);
    this->m->getFlag(this->ui->btn_plus->text());
    current_num = "";
}

void MainWindow::on_btn_minus_clicked()
{
    int num = current_num.toInt();
    this->m->getNum1(num);
    this->m->getFlag(this->ui->btn_minus->text());
    current_num = "";
}

void MainWindow::on_btn_mult_clicked()
{
    int num = current_num.toInt();
    this->m->getNum1(num);
    this->m->getFlag(this->ui->btn_mult->text());
    current_num = "";
}

void MainWindow::on_btn_divides_clicked()
{
    int num = current_num.toInt();
    this->m->getNum1(num);
    this->m->getFlag(this->ui->btn_divides->text());
    current_num = "";
}

void MainWindow::on_btn_equal_clicked()
{  
    this->m->getNum2(current_num.toInt());
    QString num = m->getResult();
    ui->lcdNumber->display(m->getResult());
    current_num = num;
    this->m->getNum1(num.toInt());
}
