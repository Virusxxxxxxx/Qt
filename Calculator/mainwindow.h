#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "moudle.h"
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Moudle *m;

private slots:
    void on_btn_0_clicked();
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();

    void on_btn_clear_clicked();

    void on_btn_plus_clicked();

    void on_btn_minus_clicked();

    void on_btn_mult_clicked();

    void on_btn_divides_clicked();

    void on_btn_equal_clicked();

private:
    Ui::MainWindow *ui;
    QString current_num;
};

#endif // MAINWINDOW_H
