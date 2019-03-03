#include "mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Qt12"));
    openAction = new QAction(tr("&Open..."),this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("Open a file"));
    connect(openAction,&QAction::triggered,this,&MainWindow::open);
    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    QToolBar *tool = addToolBar(tr("&File"));
    QToolBar *tool2 = addToolBar(tr("&HXX"));
    tool->addAction(openAction);
    tool2->addAction(openAction);
    statusBar();
}

MainWindow::~MainWindow()
{
}

void MainWindow::open()
{
    QMessageBox::information(this,tr("open"),tr("opening..."));
}
