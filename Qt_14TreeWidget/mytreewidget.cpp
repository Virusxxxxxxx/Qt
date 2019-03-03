#include "mytreewidget.h"
#include "ui_mytreewidget.h"


myTreeWidget::myTreeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTreeWidget)
{
    ui->setupUi(this);
    ui->SchoolLabel->setMinimumWidth(150);
    ui->ClassLabel->setMinimumWidth(150);
    ui->treeWidget->setHeaderLabel("School/Class");
    initTreeWidget();
    creatMenu();
    PopMenu->exec();
}

myTreeWidget::~myTreeWidget()
{
    delete ui;
}

void myTreeWidget::initTreeWidget()
{
    QTreeWidgetItem *QinYunSchool = new QTreeWidgetItem(ui->treeWidget);
    QinYunSchool->setText(0,"Qin Yun School");
    QTreeWidgetItem *QinYunClassOne = new QTreeWidgetItem(QinYunSchool);
    QinYunClassOne->setText(0,"Qin Yun Class One");
    QTreeWidgetItem *QinYunClassTwo = new QTreeWidgetItem(QinYunSchool);
    QinYunClassTwo->setText(0,"Qin Yun Class Two");
    QTreeWidgetItem *QinYunClassThree = new QTreeWidgetItem(QinYunSchool);
    QinYunClassThree->setText(0,"Qin Yun Class Three");

    QTreeWidgetItem *DianJiSchool = new QTreeWidgetItem(ui->treeWidget);
    DianJiSchool->setText(0,"Dian Ji School");
    QTreeWidgetItem *DianJiClassOne = new QTreeWidgetItem(DianJiSchool);
    DianJiClassOne->setText(0,"Dian Ji Class One");
    QTreeWidgetItem *DianJiClassTwo = new QTreeWidgetItem(DianJiSchool);
    DianJiClassTwo->setText(0,"Dian Ji Class Two");
    QTreeWidgetItem *DianJiClassThree = new QTreeWidgetItem(DianJiSchool);
    DianJiClassThree->setText(0,"Dian Ji Class Three");

}

void myTreeWidget::creatMenu()
{
    PopMenu = new QMenu;

    m_Addmenu = new QMenu("Add");
    m_Addmenu->setIcon(QIcon("../Qt_14TreeWidget/icon/Add.png"));
    m_AddSchoolAction = new QAction("Add School");
    m_AddClassAction = new QAction("Add Class");
    m_Addmenu->addAction(m_AddClassAction);
    m_Addmenu->addAction(m_AddSchoolAction);

    m_DelAction = new QAction("Del");
    m_DelAction->setIcon(QIcon("../Qt_14TreeWidget/icon/Del.png"));

    PopMenu->addMenu(m_Addmenu);
    PopMenu->addAction(m_DelAction);
}

void myTreeWidget::contextMenuEvent(QContextMenuEvent *event)
{
    if(ui->treeWidget->hasFocus())
    {
        PopMenu->move(cursor().pos());
        PopMenu->show();
    }
}
