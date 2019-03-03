#include "mylistwidget.h"
#include "ui_mylistwidget.h"
#include <QListWidgetItem>
#include <QMessageBox>
MyListWidget::MyListWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyListWidget)
{
    ui->setupUi(this);
    for(int i = 1;i<=20;i++)
    {
        QListWidgetItem *item = new QListWidgetItem("selection"+QString::number(i));
        item->setCheckState(Qt::Unchecked);
        ui->listWidget->addItem(item);
    }
    connect(ui->pushButton_1,SIGNAL(clicked(bool)),this,SLOT(onOKbt()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(onCancelbt()));
}

MyListWidget::~MyListWidget()
{
    delete ui;
}

void MyListWidget::onOKbt()
{
    int listcount = ui->listWidget->count();
    QString checked;
    for(int row = 0; row <listcount;row++)
    {
        if(ui->listWidget->item(row)->checkState() == Qt::Checked)
            checked += ui->listWidget->item(row)->text() + "\n";
    }
    QMessageBox::information(this,"info",checked);
}

void MyListWidget::onCancelbt()
{
    close();
}
