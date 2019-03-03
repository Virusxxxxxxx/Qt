#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <querystu.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionaddStu_triggered()
{
    add.show();
}

void MainWindow::on_actionaboutQt_triggered()
{
    QMessageBox::aboutQt(this,"鸣谢");
}

void MainWindow::on_actionqueryStu_triggered()
{
    QueryStu query;
    query.exec();
}
