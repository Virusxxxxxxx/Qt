/********************************************************************************
** Form generated from reading UI file 'checkbox.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKBOX_H
#define UI_CHECKBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkbox
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *checkbox)
    {
        if (checkbox->objectName().isEmpty())
            checkbox->setObjectName(QStringLiteral("checkbox"));
        checkbox->resize(471, 339);
        centralWidget = new QWidget(checkbox);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(groupBox_2);

        checkbox->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(checkbox);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        checkbox->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(checkbox);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        checkbox->setStatusBar(statusBar);
        menuBar = new QMenuBar(checkbox);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 471, 26));
        checkbox->setMenuBar(menuBar);

        retranslateUi(checkbox);

        QMetaObject::connectSlotsByName(checkbox);
    } // setupUi

    void retranslateUi(QMainWindow *checkbox)
    {
        checkbox->setWindowTitle(QApplication::translate("checkbox", "checkbox", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("checkbox", "\350\216\267\345\217\226\347\212\266\346\200\201", Q_NULLPTR));
        checkBox->setText(QApplication::translate("checkbox", "\350\260\203\346\225\264\347\225\214\351\235\242", Q_NULLPTR));
        pushButton->setText(QApplication::translate("checkbox", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("checkbox", "\347\202\271\345\207\273\345\213\276\351\200\211", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("checkbox", "\345\210\233\345\273\272\347\225\214\351\235\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("checkbox", "\345\213\276\351\200\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class checkbox: public Ui_checkbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKBOX_H
