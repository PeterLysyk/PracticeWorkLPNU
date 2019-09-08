/********************************************************************************
** Form generated from reading UI file 'getrecordstabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETRECORDSTABWIDGET_H
#define UI_GETRECORDSTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetRecordsTabWidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *GetRecordsTabWidget)
    {
        if (GetRecordsTabWidget->objectName().isEmpty())
            GetRecordsTabWidget->setObjectName(QString::fromUtf8("GetRecordsTabWidget"));
        GetRecordsTabWidget->resize(400, 300);
        pushButton = new QPushButton(GetRecordsTabWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 130, 80, 21));
        pushButton_2 = new QPushButton(GetRecordsTabWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 130, 80, 21));
        pushButton_3 = new QPushButton(GetRecordsTabWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 120, 80, 21));

        retranslateUi(GetRecordsTabWidget);

        QMetaObject::connectSlotsByName(GetRecordsTabWidget);
    } // setupUi

    void retranslateUi(QWidget *GetRecordsTabWidget)
    {
        GetRecordsTabWidget->setWindowTitle(QCoreApplication::translate("GetRecordsTabWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("GetRecordsTabWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GetRecordsTabWidget", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GetRecordsTabWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetRecordsTabWidget: public Ui_GetRecordsTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETRECORDSTABWIDGET_H
