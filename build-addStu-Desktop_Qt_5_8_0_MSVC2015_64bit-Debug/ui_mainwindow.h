/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionaddStu;
    QAction *actionqueryStu;
    QAction *actionaboutQt;
    QAction *actionHelp;
    QAction *actionLog_out;
    QAction *actionSwitch_acount;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 580);
        MainWindow->setMinimumSize(QSize(750, 580));
        MainWindow->setMaximumSize(QSize(750, 580));
        actionaddStu = new QAction(MainWindow);
        actionaddStu->setObjectName(QStringLiteral("actionaddStu"));
        actionqueryStu = new QAction(MainWindow);
        actionqueryStu->setObjectName(QStringLiteral("actionqueryStu"));
        actionaboutQt = new QAction(MainWindow);
        actionaboutQt->setObjectName(QStringLiteral("actionaboutQt"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionLog_out = new QAction(MainWindow);
        actionLog_out->setObjectName(QStringLiteral("actionLog_out"));
        actionSwitch_acount = new QAction(MainWindow);
        actionSwitch_acount->setObjectName(QStringLiteral("actionSwitch_acount"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(42);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(85, 170, 255);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionaddStu);
        menu->addAction(actionqueryStu);
        menu_2->addAction(actionaboutQt);
        menu_2->addAction(actionHelp);
        menu_3->addAction(actionLog_out);
        menu_3->addAction(actionSwitch_acount);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionaddStu->setText(QApplication::translate("MainWindow", "addStu", Q_NULLPTR));
        actionqueryStu->setText(QApplication::translate("MainWindow", "queryStu", Q_NULLPTR));
        actionaboutQt->setText(QApplication::translate("MainWindow", "aboutQt", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        actionLog_out->setText(QApplication::translate("MainWindow", "Log out", Q_NULLPTR));
        actionSwitch_acount->setText(QApplication::translate("MainWindow", "Switch acount", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\264\246\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
