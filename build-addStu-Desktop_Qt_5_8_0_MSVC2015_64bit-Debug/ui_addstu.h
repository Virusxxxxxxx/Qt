/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addStu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *name;
    QLabel *label_name;
    QLineEdit *le_name;
    QHBoxLayout *num;
    QLabel *label_num;
    QLineEdit *le_num;
    QHBoxLayout *sex;
    QLabel *label_sex;
    QRadioButton *rbtn_male;
    QRadioButton *rbtn_female;
    QHBoxLayout *age;
    QLabel *label_age;
    QComboBox *comboBox_age;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *major;
    QLabel *label_major;
    QComboBox *comboBox_major;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *ins;
    QLabel *label_ins;
    QGridLayout *gridLayout;
    QCheckBox *basketball;
    QCheckBox *football;
    QCheckBox *badminton;
    QCheckBox *volleyball;
    QHBoxLayout *btn;
    QPushButton *pbtn_OK;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbtn_cancel;
    QButtonGroup *sexGroup;
    QButtonGroup *insGroup;

    void setupUi(QDialog *addStu)
    {
        if (addStu->objectName().isEmpty())
            addStu->setObjectName(QStringLiteral("addStu"));
        addStu->resize(450, 620);
        addStu->setMinimumSize(QSize(450, 620));
        addStu->setMaximumSize(QSize(450, 620));
        verticalLayout = new QVBoxLayout(addStu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(addStu);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        name = new QHBoxLayout();
        name->setSpacing(6);
        name->setObjectName(QStringLiteral("name"));
        label_name = new QLabel(addStu);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(11);
        label_name->setFont(font1);

        name->addWidget(label_name);

        le_name = new QLineEdit(addStu);
        le_name->setObjectName(QStringLiteral("le_name"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        le_name->setFont(font2);
        le_name->setClearButtonEnabled(true);

        name->addWidget(le_name);

        name->setStretch(0, 1);
        name->setStretch(1, 8);

        verticalLayout->addLayout(name);

        num = new QHBoxLayout();
        num->setSpacing(6);
        num->setObjectName(QStringLiteral("num"));
        label_num = new QLabel(addStu);
        label_num->setObjectName(QStringLiteral("label_num"));
        label_num->setFont(font1);

        num->addWidget(label_num);

        le_num = new QLineEdit(addStu);
        le_num->setObjectName(QStringLiteral("le_num"));
        le_num->setFont(font2);
        le_num->setClearButtonEnabled(true);

        num->addWidget(le_num);

        num->setStretch(0, 1);
        num->setStretch(1, 8);

        verticalLayout->addLayout(num);

        sex = new QHBoxLayout();
        sex->setSpacing(6);
        sex->setObjectName(QStringLiteral("sex"));
        label_sex = new QLabel(addStu);
        label_sex->setObjectName(QStringLiteral("label_sex"));
        label_sex->setFont(font1);

        sex->addWidget(label_sex);

        rbtn_male = new QRadioButton(addStu);
        sexGroup = new QButtonGroup(addStu);
        sexGroup->setObjectName(QStringLiteral("sexGroup"));
        sexGroup->setExclusive(true);
        sexGroup->addButton(rbtn_male);
        rbtn_male->setObjectName(QStringLiteral("rbtn_male"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(9);
        rbtn_male->setFont(font3);
        rbtn_male->setChecked(true);

        sex->addWidget(rbtn_male);

        rbtn_female = new QRadioButton(addStu);
        sexGroup->addButton(rbtn_female);
        rbtn_female->setObjectName(QStringLiteral("rbtn_female"));
        rbtn_female->setFont(font3);

        sex->addWidget(rbtn_female);

        sex->setStretch(0, 3);
        sex->setStretch(1, 3);
        sex->setStretch(2, 3);

        verticalLayout->addLayout(sex);

        age = new QHBoxLayout();
        age->setSpacing(6);
        age->setObjectName(QStringLiteral("age"));
        label_age = new QLabel(addStu);
        label_age->setObjectName(QStringLiteral("label_age"));
        label_age->setFont(font1);

        age->addWidget(label_age);

        comboBox_age = new QComboBox(addStu);
        comboBox_age->setObjectName(QStringLiteral("comboBox_age"));
        comboBox_age->setFont(font2);

        age->addWidget(comboBox_age);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        age->addItem(horizontalSpacer_2);

        age->setStretch(0, 1);
        age->setStretch(1, 3);
        age->setStretch(2, 5);

        verticalLayout->addLayout(age);

        major = new QHBoxLayout();
        major->setSpacing(6);
        major->setObjectName(QStringLiteral("major"));
        label_major = new QLabel(addStu);
        label_major->setObjectName(QStringLiteral("label_major"));
        label_major->setFont(font1);

        major->addWidget(label_major);

        comboBox_major = new QComboBox(addStu);
        comboBox_major->setObjectName(QStringLiteral("comboBox_major"));
        comboBox_major->setFont(font2);

        major->addWidget(comboBox_major);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        major->addItem(horizontalSpacer_3);

        major->setStretch(0, 1);
        major->setStretch(1, 3);
        major->setStretch(2, 5);

        verticalLayout->addLayout(major);

        ins = new QHBoxLayout();
        ins->setSpacing(6);
        ins->setObjectName(QStringLiteral("ins"));
        label_ins = new QLabel(addStu);
        label_ins->setObjectName(QStringLiteral("label_ins"));
        label_ins->setFont(font1);

        ins->addWidget(label_ins);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        basketball = new QCheckBox(addStu);
        insGroup = new QButtonGroup(addStu);
        insGroup->setObjectName(QStringLiteral("insGroup"));
        insGroup->setExclusive(false);
        insGroup->addButton(basketball);
        basketball->setObjectName(QStringLiteral("basketball"));
        basketball->setFont(font2);

        gridLayout->addWidget(basketball, 0, 0, 1, 1);

        football = new QCheckBox(addStu);
        insGroup->addButton(football);
        football->setObjectName(QStringLiteral("football"));
        football->setFont(font2);

        gridLayout->addWidget(football, 0, 1, 1, 1);

        badminton = new QCheckBox(addStu);
        insGroup->addButton(badminton);
        badminton->setObjectName(QStringLiteral("badminton"));
        badminton->setFont(font2);

        gridLayout->addWidget(badminton, 1, 0, 1, 1);

        volleyball = new QCheckBox(addStu);
        insGroup->addButton(volleyball);
        volleyball->setObjectName(QStringLiteral("volleyball"));
        volleyball->setFont(font2);

        gridLayout->addWidget(volleyball, 1, 1, 1, 1);


        ins->addLayout(gridLayout);

        ins->setStretch(0, 1);
        ins->setStretch(1, 8);

        verticalLayout->addLayout(ins);

        btn = new QHBoxLayout();
        btn->setSpacing(6);
        btn->setObjectName(QStringLiteral("btn"));
        pbtn_OK = new QPushButton(addStu);
        pbtn_OK->setObjectName(QStringLiteral("pbtn_OK"));
        pbtn_OK->setFont(font2);

        btn->addWidget(pbtn_OK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        btn->addItem(horizontalSpacer);

        pbtn_cancel = new QPushButton(addStu);
        pbtn_cancel->setObjectName(QStringLiteral("pbtn_cancel"));
        pbtn_cancel->setFont(font2);

        btn->addWidget(pbtn_cancel);

        btn->setStretch(0, 3);
        btn->setStretch(1, 3);
        btn->setStretch(2, 3);

        verticalLayout->addLayout(btn);


        retranslateUi(addStu);

        QMetaObject::connectSlotsByName(addStu);
    } // setupUi

    void retranslateUi(QDialog *addStu)
    {
        addStu->setWindowTitle(QApplication::translate("addStu", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        label->setText(QApplication::translate("addStu", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        label_name->setText(QApplication::translate("addStu", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        le_name->setPlaceholderText(QApplication::translate("addStu", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", Q_NULLPTR));
        label_num->setText(QApplication::translate("addStu", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        le_num->setPlaceholderText(QApplication::translate("addStu", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267(\344\270\215\345\260\221\344\272\21610\344\275\215)", Q_NULLPTR));
        label_sex->setText(QApplication::translate("addStu", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        rbtn_male->setText(QApplication::translate("addStu", "\347\224\267", Q_NULLPTR));
        rbtn_female->setText(QApplication::translate("addStu", "\345\245\263", Q_NULLPTR));
        label_age->setText(QApplication::translate("addStu", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        comboBox_age->clear();
        comboBox_age->insertItems(0, QStringList()
         << QApplication::translate("addStu", "18", Q_NULLPTR)
         << QApplication::translate("addStu", "19", Q_NULLPTR)
         << QApplication::translate("addStu", "20", Q_NULLPTR)
         << QApplication::translate("addStu", "21", Q_NULLPTR)
         << QApplication::translate("addStu", "22", Q_NULLPTR)
         << QApplication::translate("addStu", "23", Q_NULLPTR)
         << QApplication::translate("addStu", "24", Q_NULLPTR)
         << QApplication::translate("addStu", "25", Q_NULLPTR)
         << QApplication::translate("addStu", "26", Q_NULLPTR)
        );
        label_major->setText(QApplication::translate("addStu", "\351\231\242\347\263\273\357\274\232", Q_NULLPTR));
        comboBox_major->clear();
        comboBox_major->insertItems(0, QStringList()
         << QApplication::translate("addStu", "\350\256\241\347\256\227\346\234\272\347\263\273", Q_NULLPTR)
         << QApplication::translate("addStu", "\346\225\260\345\255\227\345\252\222\344\275\223\347\263\273", Q_NULLPTR)
         << QApplication::translate("addStu", "\346\234\272\346\242\260\347\263\273", Q_NULLPTR)
         << QApplication::translate("addStu", "\345\225\206\345\212\241\347\256\241\347\220\206\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("addStu", "\351\253\230\350\201\214\345\255\246\351\231\242", Q_NULLPTR)
        );
        label_ins->setText(QApplication::translate("addStu", "\345\205\264\350\266\243\357\274\232", Q_NULLPTR));
        basketball->setText(QApplication::translate("addStu", "\347\257\256\347\220\203", Q_NULLPTR));
        football->setText(QApplication::translate("addStu", "\350\266\263\347\220\203", Q_NULLPTR));
        badminton->setText(QApplication::translate("addStu", "\347\276\275\346\257\233\347\220\203", Q_NULLPTR));
        volleyball->setText(QApplication::translate("addStu", "\346\216\222\347\220\203", Q_NULLPTR));
        pbtn_OK->setText(QApplication::translate("addStu", "\347\241\256\350\256\244", Q_NULLPTR));
        pbtn_cancel->setText(QApplication::translate("addStu", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addStu: public Ui_addStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
