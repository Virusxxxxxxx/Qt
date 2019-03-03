#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ptimer = new QTimer;
    connect(this->ptimer,SIGNAL(timeout()),this,SLOT(updateAndDisplay()));
    this->ui->lcdNumber->display("00:00:00:000");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateAndDisplay()
{
    QTime current = QTime::currentTime();
    int t = this->basetime.msecsTo(current);
    QTime showTime(0,0,0,0);
    showTime = showTime.addMSecs(t);
    showStr = showTime.toString("hh,mm,ss,zzz");
    this->ui->lcdNumber->display(showStr);
}

void MainWindow::on_btn_start_clicked()
{
    this->basetime = QTime::currentTime();
    this->ptimer->start(1);
    ui->btn_start->setEnabled(false);
    ui->btn_stop->setEnabled(true);
    ui->btn_pause->setEnabled(true);
    ui->btn_point->setEnabled(true);
}

void MainWindow::on_btn_stop_clicked()
{
    if(ui->btn_stop->text() == "清零")
    {
        ui->btn_stop->setText("停止");
        ui->lcdNumber->display("00:00:00:000");
        ui->textBrowser->clear();
        ui->btn_start->setEnabled(true);
        ui->btn_stop->setEnabled(false);
        ui->btn_point->setEnabled(false);
    }
    else
    {
        ui->btn_start->setEnabled(false);
        ui->btn_pause->setEnabled(false);
        ptimer->stop();
        ui->btn_stop->setText("清零");
    }
}

void MainWindow::on_btn_pause_clicked()
{
    static QTime pauseTime;
    if(ui->btn_pause->text() == "暂停")
    {
        pauseTime = QTime::currentTime();
        ui->btn_pause->setText("继续");
        ptimer->stop();
    }
    else
    {
        QTime now = QTime::currentTime();
        int temp = pauseTime.msecsTo(now);
        this->basetime = this->basetime.addMSecs(temp);
        this->ptimer->start(1);
        ui->btn_pause->setText("暂停");
    }
}

void MainWindow::on_btn_point_clicked()
{
    ui->textBrowser->append(showStr);
}
