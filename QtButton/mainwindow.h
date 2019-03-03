#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QEvent>
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
    void on_bt1_clicked();

    void onBt2();
    bool eventFilter(QObject *o,QEvent *e);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
