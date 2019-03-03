/********************************************************************************
** Form generated from reading UI file 'querystu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSTU_H
#define UI_QUERYSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueryStu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbb_method;
    QLineEdit *le_search;
    QPushButton *btn_search;
    QTableView *tableView;

    void setupUi(QDialog *QueryStu)
    {
        if (QueryStu->objectName().isEmpty())
            QueryStu->setObjectName(QStringLiteral("QueryStu"));
        QueryStu->resize(780, 560);
        verticalLayout = new QVBoxLayout(QueryStu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbb_method = new QComboBox(QueryStu);
        cbb_method->setObjectName(QStringLiteral("cbb_method"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(11);
        cbb_method->setFont(font);

        horizontalLayout->addWidget(cbb_method);

        le_search = new QLineEdit(QueryStu);
        le_search->setObjectName(QStringLiteral("le_search"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        le_search->setFont(font1);

        horizontalLayout->addWidget(le_search);

        btn_search = new QPushButton(QueryStu);
        btn_search->setObjectName(QStringLiteral("btn_search"));
        btn_search->setFont(font);

        horizontalLayout->addWidget(btn_search);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 6);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(QueryStu);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        tableView->setFont(font2);
        tableView->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(237, 254, 255);"));
        tableView->setGridStyle(Qt::NoPen);
        tableView->setSortingEnabled(true);

        verticalLayout->addWidget(tableView);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(QueryStu);

        QMetaObject::connectSlotsByName(QueryStu);
    } // setupUi

    void retranslateUi(QDialog *QueryStu)
    {
        QueryStu->setWindowTitle(QApplication::translate("QueryStu", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        cbb_method->clear();
        cbb_method->insertItems(0, QStringList()
         << QApplication::translate("QueryStu", "\350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", Q_NULLPTR)
         << QApplication::translate("QueryStu", "\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("QueryStu", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("QueryStu", "\346\214\211\346\200\247\345\210\253\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("QueryStu", "\346\214\211\345\271\264\351\276\204\346\237\245\350\257\242", Q_NULLPTR)
         << QApplication::translate("QueryStu", "\346\214\211\351\231\242\347\263\273\346\237\245\350\257\242", Q_NULLPTR)
        );
        btn_search->setText(QApplication::translate("QueryStu", "Search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryStu: public Ui_QueryStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSTU_H
