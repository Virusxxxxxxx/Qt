#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QMenu>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->bt2,SIGNAL(clicked(bool)),this,SLOT(onBt2()));
    ui->bt3->installEventFilter(this);
    QMenu *menu = new QMenu;
    menu->addAction("打开");
    menu->addAction("关闭");
    ui->bt4->setMenu(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt1_clicked()
{
    qDebug()<<"Button1";
}

void MainWindow::onBt2()
{
    QMessageBox::information(this,"info","Button2");
}

bool MainWindow::eventFilter(QObject *o, QEvent *e)
{
    if(e->type() == QEvent::HoverEnter)
    {
        if(o == ui->bt3)
        {
            ui->bt3->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, "
                                   "fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), "
                                   "stop:1 rgba(0, 169, 255, 147));");
            return true;
        }
    }
    else if(e->type() == QEvent::HoverLeave)
    {
        if(o == ui->bt3)
        {
            ui->bt3->setStyleSheet("background-color: rgb(170, 255, 255);");
            return true;
        }
    }
    else
        return QObject::eventFilter(o,e);
}

