/********************************************************************************
** Form generated from reading UI file 'listviewtest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTVIEWTEST_H
#define UI_LISTVIEWTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListViewTest
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtConfire;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ListViewTest)
    {
        if (ListViewTest->objectName().isEmpty())
            ListViewTest->setObjectName(QStringLiteral("ListViewTest"));
        ListViewTest->resize(356, 455);
        verticalLayout = new QVBoxLayout(ListViewTest);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ListViewTest);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(ListViewTest);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(250, 16777215));
        comboBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        listView = new QListView(ListViewTest);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtConfire = new QPushButton(ListViewTest);
        BtConfire->setObjectName(QStringLiteral("BtConfire"));

        horizontalLayout->addWidget(BtConfire);

        pushButton_2 = new QPushButton(ListViewTest);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ListViewTest);

        QMetaObject::connectSlotsByName(ListViewTest);
    } // setupUi

    void retranslateUi(QWidget *ListViewTest)
    {
        ListViewTest->setWindowTitle(QApplication::translate("ListViewTest", "ListViewTest", Q_NULLPTR));
        label->setText(QApplication::translate("ListViewTest", "Model:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ListViewTest", "Student", Q_NULLPTR)
         << QApplication::translate("ListViewTest", "Teacher", Q_NULLPTR)
         << QApplication::translate("ListViewTest", "Worker", Q_NULLPTR)
        );
        BtConfire->setText(QApplication::translate("ListViewTest", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ListViewTest", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListViewTest: public Ui_ListViewTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEWTEST_H
