/********************************************************************************
** Form generated from reading UI file 'getstatistictabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETSTATISTICTABWIDGET_H
#define UI_GETSTATISTICTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetStatisticTabWidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *GetStatisticTabWidget)
    {
        if (GetStatisticTabWidget->objectName().isEmpty())
            GetStatisticTabWidget->setObjectName(QString::fromUtf8("GetStatisticTabWidget"));
        GetStatisticTabWidget->resize(400, 300);
        pushButton = new QPushButton(GetStatisticTabWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 110, 80, 21));
        pushButton_2 = new QPushButton(GetStatisticTabWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 100, 80, 21));
        pushButton_3 = new QPushButton(GetStatisticTabWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 260, 80, 21));

        retranslateUi(GetStatisticTabWidget);

        QMetaObject::connectSlotsByName(GetStatisticTabWidget);
    } // setupUi

    void retranslateUi(QWidget *GetStatisticTabWidget)
    {
        GetStatisticTabWidget->setWindowTitle(QCoreApplication::translate("GetStatisticTabWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("GetStatisticTabWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GetStatisticTabWidget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GetStatisticTabWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetStatisticTabWidget: public Ui_GetStatisticTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSTATISTICTABWIDGET_H
