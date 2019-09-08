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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetRecordsTabWidget
{
public:
    QListWidget *TablesNamesListWidget;
    QLineEdit *idInTheTableLineEdit;
    QPushButton *selectRecordByIdButton;
    QPushButton *DeleteRecordByIdButton;
    QPushButton *selectAllRecords;
    QLabel *Idlabel;
    QTableView *tableView;

    void setupUi(QWidget *GetRecordsTabWidget)
    {
        if (GetRecordsTabWidget->objectName().isEmpty())
            GetRecordsTabWidget->setObjectName(QString::fromUtf8("GetRecordsTabWidget"));
        GetRecordsTabWidget->resize(557, 300);
        TablesNamesListWidget = new QListWidget(GetRecordsTabWidget);
        TablesNamesListWidget->setObjectName(QString::fromUtf8("TablesNamesListWidget"));
        TablesNamesListWidget->setGeometry(QRect(10, 10, 141, 131));
        idInTheTableLineEdit = new QLineEdit(GetRecordsTabWidget);
        idInTheTableLineEdit->setObjectName(QString::fromUtf8("idInTheTableLineEdit"));
        idInTheTableLineEdit->setGeometry(QRect(210, 10, 141, 21));
        selectRecordByIdButton = new QPushButton(GetRecordsTabWidget);
        selectRecordByIdButton->setObjectName(QString::fromUtf8("selectRecordByIdButton"));
        selectRecordByIdButton->setGeometry(QRect(210, 50, 141, 31));
        DeleteRecordByIdButton = new QPushButton(GetRecordsTabWidget);
        DeleteRecordByIdButton->setObjectName(QString::fromUtf8("DeleteRecordByIdButton"));
        DeleteRecordByIdButton->setGeometry(QRect(210, 80, 141, 31));
        selectAllRecords = new QPushButton(GetRecordsTabWidget);
        selectAllRecords->setObjectName(QString::fromUtf8("selectAllRecords"));
        selectAllRecords->setGeometry(QRect(210, 110, 141, 31));
        Idlabel = new QLabel(GetRecordsTabWidget);
        Idlabel->setObjectName(QString::fromUtf8("Idlabel"));
        Idlabel->setGeometry(QRect(160, 10, 47, 20));
        tableView = new QTableView(GetRecordsTabWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 150, 531, 141));

        retranslateUi(GetRecordsTabWidget);

        QMetaObject::connectSlotsByName(GetRecordsTabWidget);
    } // setupUi

    void retranslateUi(QWidget *GetRecordsTabWidget)
    {
        GetRecordsTabWidget->setWindowTitle(QCoreApplication::translate("GetRecordsTabWidget", "Form", nullptr));
        selectRecordByIdButton->setText(QCoreApplication::translate("GetRecordsTabWidget", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \320\267\320\260\320\277\320\270\321\201", nullptr));
        DeleteRecordByIdButton->setText(QCoreApplication::translate("GetRecordsTabWidget", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\267\320\260\320\277\320\270\321\201", nullptr));
        selectAllRecords->setText(QCoreApplication::translate("GetRecordsTabWidget", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \320\262\321\201\321\226 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        Idlabel->setText(QCoreApplication::translate("GetRecordsTabWidget", "ID \321\203 \320\261\320\260\320\267\321\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetRecordsTabWidget: public Ui_GetRecordsTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETRECORDSTABWIDGET_H
