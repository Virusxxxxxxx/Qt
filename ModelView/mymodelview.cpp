#include "mymodelview.h"
#include "ui_mymodelview.h"

myModelView::myModelView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myModelView)
{
    ui->setupUi(this);
}

myModelView::~myModelView()
{
    delete ui;
}
