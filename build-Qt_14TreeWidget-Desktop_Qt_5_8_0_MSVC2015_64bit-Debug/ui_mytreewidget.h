/********************************************************************************
** Form generated from reading UI file 'mytreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTREEWIDGET_H
#define UI_MYTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myTreeWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *SchoolLabel;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ClassLabel;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *myTreeWidget)
    {
        if (myTreeWidget->objectName().isEmpty())
            myTreeWidget->setObjectName(QStringLiteral("myTreeWidget"));
        myTreeWidget->resize(622, 494);
        horizontalLayout_3 = new QHBoxLayout(myTreeWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(myTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_3->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        SchoolLabel = new QLabel(myTreeWidget);
        SchoolLabel->setObjectName(QStringLiteral("SchoolLabel"));

        horizontalLayout->addWidget(SchoolLabel);

        label_2 = new QLabel(myTreeWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ClassLabel = new QLabel(myTreeWidget);
        ClassLabel->setObjectName(QStringLiteral("ClassLabel"));

        horizontalLayout_2->addWidget(ClassLabel);

        label_4 = new QLabel(myTreeWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(myTreeWidget);

        QMetaObject::connectSlotsByName(myTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *myTreeWidget)
    {
        myTreeWidget->setWindowTitle(QApplication::translate("myTreeWidget", "myTreeWidget", Q_NULLPTR));
        SchoolLabel->setText(QApplication::translate("myTreeWidget", "\345\255\246\346\240\241\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("myTreeWidget", "TextLabel", Q_NULLPTR));
        ClassLabel->setText(QApplication::translate("myTreeWidget", "\347\217\255\347\272\247\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("myTreeWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myTreeWidget: public Ui_myTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTREEWIDGET_H
