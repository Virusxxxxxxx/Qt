/********************************************************************************
** Form generated from reading UI file 'mytablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTABLEWIDGET_H
#define UI_MYTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *Search;
    QPushButton *Bt_insert;
    QPushButton *Bt_delete;
    QTableWidget *tableWidget;

    void setupUi(QWidget *MyTableWidget)
    {
        if (MyTableWidget->objectName().isEmpty())
            MyTableWidget->setObjectName(QStringLiteral("MyTableWidget"));
        MyTableWidget->resize(705, 520);
        verticalLayout = new QVBoxLayout(MyTableWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(MyTableWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Search = new QLineEdit(MyTableWidget);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setMinimumSize(QSize(300, 0));
        Search->setMaximumSize(QSize(300, 16777215));

        horizontalLayout->addWidget(Search);

        Bt_insert = new QPushButton(MyTableWidget);
        Bt_insert->setObjectName(QStringLiteral("Bt_insert"));

        horizontalLayout->addWidget(Bt_insert);

        Bt_delete = new QPushButton(MyTableWidget);
        Bt_delete->setObjectName(QStringLiteral("Bt_delete"));

        horizontalLayout->addWidget(Bt_delete);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(MyTableWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(MyTableWidget);

        QMetaObject::connectSlotsByName(MyTableWidget);
    } // setupUi

    void retranslateUi(QWidget *MyTableWidget)
    {
        MyTableWidget->setWindowTitle(QApplication::translate("MyTableWidget", "MyTableWidget", Q_NULLPTR));
        label->setText(QApplication::translate("MyTableWidget", "\345\270\246\344\275\240\351\243\236", Q_NULLPTR));
        Bt_insert->setText(QApplication::translate("MyTableWidget", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        Bt_delete->setText(QApplication::translate("MyTableWidget", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyTableWidget: public Ui_MyTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTABLEWIDGET_H
