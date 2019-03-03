#include "mymodelview.h"
#include <QApplication>
#include <QFileSystemModel>
#include <QListView>
#include <QTreeView>
#include <QSplitter>
#include <QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplitter *splitter = new QSplitter;

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    QTreeView *tview = new QTreeView(splitter);
    tview->setModel(model);
    tview->setRootIndex(model->index(QDir::currentPath()));

    QListView *lview = new QListView(splitter);
    lview->setModel(model);
    lview->setRootIndex(model->index(QDir::currentPath()));

    splitter->show();

    return a.exec();
}
