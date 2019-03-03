#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addstu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionaddStu_triggered();

    void on_actionaboutQt_triggered();

    void on_actionqueryStu_triggered();

private:
    Ui::MainWindow *ui;
    addStu add;
};

#endif // MAINWINDOW_H
