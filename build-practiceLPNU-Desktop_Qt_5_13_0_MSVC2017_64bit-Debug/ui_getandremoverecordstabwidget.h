/********************************************************************************
** Form generated from reading UI file 'getandremoverecordstabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETANDREMOVERECORDSTABWIDGET_H
#define UI_GETANDREMOVERECORDSTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetRecordsTabWidget
{
public:
    QListWidget *TablesNamesListWidget;

    void setupUi(QWidget *GetRecordsTabWidget)
    {
        if (GetRecordsTabWidget->objectName().isEmpty())
            GetRecordsTabWidget->setObjectName(QString::fromUtf8("GetRecordsTabWidget"));
        GetRecordsTabWidget->resize(403, 300);
        TablesNamesListWidget = new QListWidget(GetRecordsTabWidget);
        TablesNamesListWidget->setObjectName(QString::fromUtf8("TablesNamesListWidget"));
        TablesNamesListWidget->setGeometry(QRect(10, 10, 341, 141));

        retranslateUi(GetRecordsTabWidget);

        QMetaObject::connectSlotsByName(GetRecordsTabWidget);
    } // setupUi

    void retranslateUi(QWidget *GetRecordsTabWidget)
    {
        GetRecordsTabWidget->setWindowTitle(QCoreApplication::translate("GetRecordsTabWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetRecordsTabWidget: public Ui_GetRecordsTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETANDREMOVERECORDSTABWIDGET_H