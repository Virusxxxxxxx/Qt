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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QGridLayout *gridLayout;
    QPushButton *btn_7;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_3;
    QPushButton *btn_mult;
    QPushButton *btn_1;
    QPushButton *btn_9;
    QPushButton *btn_2;
    QPushButton *btn_clear;
    QPushButton *btn_8;
    QPushButton *btn_plus;
    QPushButton *btn_minus;
    QPushButton *btn_4;
    QPushButton *btn_equal;
    QPushButton *btn_0;
    QPushButton *btn_divides;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(450, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        lcdNumber->setFont(font);
        lcdNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(8);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(0));
        lcdNumber->setProperty("intValue", QVariant(0));

        verticalLayout->addWidget(lcdNumber);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_7 = new QPushButton(centralWidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
        btn_7->setFont(font1);

        gridLayout->addWidget(btn_7, 0, 0, 1, 1);

        btn_5 = new QPushButton(centralWidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setFont(font1);

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_6 = new QPushButton(centralWidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setFont(font1);

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_3 = new QPushButton(centralWidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setFont(font1);

        gridLayout->addWidget(btn_3, 2, 2, 1, 1);

        btn_mult = new QPushButton(centralWidget);
        btn_mult->setObjectName(QStringLiteral("btn_mult"));
        sizePolicy.setHeightForWidth(btn_mult->sizePolicy().hasHeightForWidth());
        btn_mult->setSizePolicy(sizePolicy);
        btn_mult->setFont(font1);

        gridLayout->addWidget(btn_mult, 2, 3, 1, 1);

        btn_1 = new QPushButton(centralWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setFont(font1);

        gridLayout->addWidget(btn_1, 2, 0, 1, 1);

        btn_9 = new QPushButton(centralWidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        btn_9->setFont(font1);

        gridLayout->addWidget(btn_9, 0, 2, 1, 1);

        btn_2 = new QPushButton(centralWidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setFont(font1);

        gridLayout->addWidget(btn_2, 2, 1, 1, 1);

        btn_clear = new QPushButton(centralWidget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);
        btn_clear->setFont(font1);

        gridLayout->addWidget(btn_clear, 3, 0, 1, 1);

        btn_8 = new QPushButton(centralWidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setFont(font1);

        gridLayout->addWidget(btn_8, 0, 1, 1, 1);

        btn_plus = new QPushButton(centralWidget);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        sizePolicy.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy);
        btn_plus->setFont(font1);

        gridLayout->addWidget(btn_plus, 0, 3, 1, 1);

        btn_minus = new QPushButton(centralWidget);
        btn_minus->setObjectName(QStringLiteral("btn_minus"));
        sizePolicy.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy);
        btn_minus->setFont(font1);

        gridLayout->addWidget(btn_minus, 1, 3, 1, 1);

        btn_4 = new QPushButton(centralWidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setFont(font1);

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);

        btn_equal = new QPushButton(centralWidget);
        btn_equal->setObjectName(QStringLiteral("btn_equal"));
        sizePolicy.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy);
        btn_equal->setFont(font1);

        gridLayout->addWidget(btn_equal, 3, 2, 1, 1);

        btn_0 = new QPushButton(centralWidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setFont(font1);

        gridLayout->addWidget(btn_0, 3, 1, 1, 1);

        btn_divides = new QPushButton(centralWidget);
        btn_divides->setObjectName(QStringLiteral("btn_divides"));
        sizePolicy.setHeightForWidth(btn_divides->sizePolicy().hasHeightForWidth());
        btn_divides->setSizePolicy(sizePolicy);
        btn_divides->setFont(font1);

        gridLayout->addWidget(btn_divides, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "HXX's Calculator", Q_NULLPTR));
        btn_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        btn_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        btn_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        btn_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        btn_mult->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        btn_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        btn_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        btn_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        btn_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        btn_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        btn_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        btn_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        btn_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        btn_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        btn_divides->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
