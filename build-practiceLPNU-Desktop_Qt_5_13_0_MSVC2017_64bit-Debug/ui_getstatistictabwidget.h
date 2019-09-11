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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetStatisticTabWidget
{
public:
    QPushButton *getStatisticForObjects;
    QPushButton *getStatisticForSuplier;
    QPushButton *getStatisticForMaterial;
    QTableView *StatisticTableView;

    void setupUi(QWidget *GetStatisticTabWidget)
    {
        if (GetStatisticTabWidget->objectName().isEmpty())
            GetStatisticTabWidget->setObjectName(QString::fromUtf8("GetStatisticTabWidget"));
        GetStatisticTabWidget->resize(546, 309);
        getStatisticForObjects = new QPushButton(GetStatisticTabWidget);
        getStatisticForObjects->setObjectName(QString::fromUtf8("getStatisticForObjects"));
        getStatisticForObjects->setGeometry(QRect(170, 10, 191, 41));
        getStatisticForSuplier = new QPushButton(GetStatisticTabWidget);
        getStatisticForSuplier->setObjectName(QString::fromUtf8("getStatisticForSuplier"));
        getStatisticForSuplier->setGeometry(QRect(0, 10, 171, 41));
        getStatisticForMaterial = new QPushButton(GetStatisticTabWidget);
        getStatisticForMaterial->setObjectName(QString::fromUtf8("getStatisticForMaterial"));
        getStatisticForMaterial->setGeometry(QRect(360, 10, 181, 41));
        StatisticTableView = new QTableView(GetStatisticTabWidget);
        StatisticTableView->setObjectName(QString::fromUtf8("StatisticTableView"));
        StatisticTableView->setGeometry(QRect(0, 60, 541, 241));

        retranslateUi(GetStatisticTabWidget);

        QMetaObject::connectSlotsByName(GetStatisticTabWidget);
    } // setupUi

    void retranslateUi(QWidget *GetStatisticTabWidget)
    {
        GetStatisticTabWidget->setWindowTitle(QCoreApplication::translate("GetStatisticTabWidget", "Form", nullptr));
        getStatisticForObjects->setText(QCoreApplication::translate("GetStatisticTabWidget", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 \320\221\321\203\320\264\321\226\320\262\320\265\320\273\321\214\320\275\320\270\321\205 \320\276\320\261'\321\224\320\272\321\202\321\226\320\262", nullptr));
        getStatisticForSuplier->setText(QCoreApplication::translate("GetStatisticTabWidget", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 \320\237\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\321\226\320\262", nullptr));
        getStatisticForMaterial->setText(QCoreApplication::translate("GetStatisticTabWidget", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 \320\274\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\226\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetStatisticTabWidget: public Ui_GetStatisticTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETSTATISTICTABWIDGET_H
