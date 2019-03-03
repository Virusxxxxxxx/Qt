/********************************************************************************
** Form generated from reading UI file 'myqmessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQMESSAGEBOX_H
#define UI_MYQMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyQMessageBox
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *MyQMessageBox)
    {
        if (MyQMessageBox->objectName().isEmpty())
            MyQMessageBox->setObjectName(QStringLiteral("MyQMessageBox"));
        MyQMessageBox->resize(400, 300);
        gridLayout = new QGridLayout(MyQMessageBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(MyQMessageBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(MyQMessageBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);


        retranslateUi(MyQMessageBox);

        QMetaObject::connectSlotsByName(MyQMessageBox);
    } // setupUi

    void retranslateUi(QWidget *MyQMessageBox)
    {
        MyQMessageBox->setWindowTitle(QApplication::translate("MyQMessageBox", "MyQMessageBox", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyQMessageBox", "Question", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MyQMessageBox", "\350\207\252\345\256\232\344\271\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyQMessageBox: public Ui_MyQMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQMESSAGEBOX_H
