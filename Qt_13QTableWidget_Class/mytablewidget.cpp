#include "mytablewidget.h"
#include "ui_mytablewidget.h"

MyTableWidget::MyTableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyTableWidget)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setColumnCount(10);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->Search->setPlaceholderText("Search...");
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

MyTableWidget::~MyTableWidget()
{
    delete ui;
}

void MyTableWidget::on_Bt_insert_clicked()
{
    int currentrow = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(currentrow+1);
}

void MyTableWidget::on_Bt_delete_clicked()
{
    int currentrow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(currentrow);
}

void MyTableWidget::on_Search_textChanged(const QString &arg1)
{
    if(arg1.isEmpty())
    {
        int rowcount = ui->tableWidget->rowCount();
        for(int i = 0;i<rowcount ; i++)
        {
            ui->tableWidget->showRow(i);
        }
        return;
    }
    int rowcount = ui->tableWidget->rowCount();
    int columncount = ui->tableWidget->columnCount();
    for(int row = 0;row < rowcount ; row ++)
    {
        QString rowDate;
        for(int column = 0; column <columncount ; column ++)
        {
            if(ui->tableWidget->item(row,column))
                rowDate += ui->tableWidget->item(row,column)->text();
        }
        if(!rowDate.isEmpty())
        {
            if(rowDate.contains(arg1))
            {
                ui->tableWidget->showRow(row);
            }
            else
            {
                ui->tableWidget->hideRow(row);
            }
        }
        else
        {
            ui->tableWidget->hideRow(row);
        }
    }




















}
