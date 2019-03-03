/********************************************************************************
** Form generated from reading UI file 'mymodelview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMODELVIEW_H
#define UI_MYMODELVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myModelView
{
public:

    void setupUi(QWidget *myModelView)
    {
        if (myModelView->objectName().isEmpty())
            myModelView->setObjectName(QStringLiteral("myModelView"));
        myModelView->resize(400, 300);

        retranslateUi(myModelView);

        QMetaObject::connectSlotsByName(myModelView);
    } // setupUi

    void retranslateUi(QWidget *myModelView)
    {
        myModelView->setWindowTitle(QApplication::translate("myModelView", "myModelView", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myModelView: public Ui_myModelView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMODELVIEW_H
