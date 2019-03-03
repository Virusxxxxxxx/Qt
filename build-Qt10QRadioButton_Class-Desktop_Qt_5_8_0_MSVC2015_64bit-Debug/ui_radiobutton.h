/********************************************************************************
** Form generated from reading UI file 'radiobutton.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOBUTTON_H
#define UI_RADIOBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RadioButton
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_dragon;
    QRadioButton *radioButton_donglin;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_ziyang;
    QRadioButton *radioButton_chengzhang;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RadioButton)
    {
        if (RadioButton->objectName().isEmpty())
            RadioButton->setObjectName(QStringLiteral("RadioButton"));
        RadioButton->resize(461, 378);
        verticalLayout_3 = new QVBoxLayout(RadioButton);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(RadioButton);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_dragon = new QRadioButton(groupBox);
        radioButton_dragon->setObjectName(QStringLiteral("radioButton_dragon"));

        verticalLayout->addWidget(radioButton_dragon);

        radioButton_donglin = new QRadioButton(groupBox);
        radioButton_donglin->setObjectName(QStringLiteral("radioButton_donglin"));

        verticalLayout->addWidget(radioButton_donglin);


        horizontalLayout->addLayout(verticalLayout);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(RadioButton);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_ziyang = new QRadioButton(groupBox_2);
        radioButton_ziyang->setObjectName(QStringLiteral("radioButton_ziyang"));

        verticalLayout_2->addWidget(radioButton_ziyang);

        radioButton_chengzhang = new QRadioButton(groupBox_2);
        radioButton_chengzhang->setObjectName(QStringLiteral("radioButton_chengzhang"));

        verticalLayout_2->addWidget(radioButton_chengzhang);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(RadioButton);

        QMetaObject::connectSlotsByName(RadioButton);
    } // setupUi

    void retranslateUi(QDialog *RadioButton)
    {
        RadioButton->setWindowTitle(QApplication::translate("RadioButton", "RadioButton", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RadioButton", "LR", Q_NULLPTR));
        radioButton_dragon->setText(QApplication::translate("RadioButton", "\351\255\224\346\232\264\351\276\231", Q_NULLPTR));
        radioButton_donglin->setText(QApplication::translate("RadioButton", "\345\206\254\347\201\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RadioButton", "\351\200\211\346\213\251", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("RadioButton", "XD", Q_NULLPTR));
        radioButton_ziyang->setText(QApplication::translate("RadioButton", "\346\273\213\345\205\273", Q_NULLPTR));
        radioButton_chengzhang->setText(QApplication::translate("RadioButton", "\351\207\216\346\200\247\346\210\220\351\225\277", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RadioButton", "\351\200\211\346\213\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RadioButton: public Ui_RadioButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOBUTTON_H
