/********************************************************************************
** Form generated from reading UI file 'addsuplier.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUPLIER_H
#define UI_ADDSUPLIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddSuplier
{
public:
    QLineEdit *IdSuplier;
    QLineEdit *Name;
    QLabel *IdSuplierLabel;
    QLabel *CotractDateLabel;
    QLabel *NameLabel;
    QLineEdit *Rate;
    QPushButton *AddSuplierButton;
    QLabel *RateLabel;
    QDateEdit *CotractDate;

    void setupUi(QWidget *AddSuplier)
    {
        if (AddSuplier->objectName().isEmpty())
            AddSuplier->setObjectName(QString::fromUtf8("AddSuplier"));
        AddSuplier->resize(366, 156);
        IdSuplier = new QLineEdit(AddSuplier);
        IdSuplier->setObjectName(QString::fromUtf8("IdSuplier"));
        IdSuplier->setGeometry(QRect(140, 10, 221, 22));
        Name = new QLineEdit(AddSuplier);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(140, 40, 221, 22));
        IdSuplierLabel = new QLabel(AddSuplier);
        IdSuplierLabel->setObjectName(QString::fromUtf8("IdSuplierLabel"));
        IdSuplierLabel->setGeometry(QRect(10, 10, 91, 16));
        CotractDateLabel = new QLabel(AddSuplier);
        CotractDateLabel->setObjectName(QString::fromUtf8("CotractDateLabel"));
        CotractDateLabel->setGeometry(QRect(10, 70, 131, 16));
        NameLabel = new QLabel(AddSuplier);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setGeometry(QRect(10, 40, 91, 16));
        Rate = new QLineEdit(AddSuplier);
        Rate->setObjectName(QString::fromUtf8("Rate"));
        Rate->setGeometry(QRect(140, 100, 221, 22));
        AddSuplierButton = new QPushButton(AddSuplier);
        AddSuplierButton->setObjectName(QString::fromUtf8("AddSuplierButton"));
        AddSuplierButton->setGeometry(QRect(280, 130, 80, 21));
        RateLabel = new QLabel(AddSuplier);
        RateLabel->setObjectName(QString::fromUtf8("RateLabel"));
        RateLabel->setGeometry(QRect(10, 100, 111, 21));
        CotractDate = new QDateEdit(AddSuplier);
        CotractDate->setObjectName(QString::fromUtf8("CotractDate"));
        CotractDate->setGeometry(QRect(140, 70, 221, 22));

        retranslateUi(AddSuplier);

        QMetaObject::connectSlotsByName(AddSuplier);
    } // setupUi

    void retranslateUi(QWidget *AddSuplier)
    {
        AddSuplier->setWindowTitle(QCoreApplication::translate("AddSuplier", "\320\237\320\236\320\241\320\242\320\220\320\247\320\220\320\233\320\254\320\235\320\230\320\232", nullptr));
        IdSuplierLabel->setText(QCoreApplication::translate("AddSuplier", "ID \320\237\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        CotractDateLabel->setText(QCoreApplication::translate("AddSuplier", "\320\224\320\260\321\202\320\260 \321\203\320\272\320\273\320\260\320\264\320\265\320\275\320\275\321\217 \320\264\320\276\320\262\320\263\320\276\321\200\321\203", nullptr));
        NameLabel->setText(QCoreApplication::translate("AddSuplier", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        AddSuplierButton->setText(QCoreApplication::translate("AddSuplier", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        RateLabel->setText(QCoreApplication::translate("AddSuplier", "\320\240\320\265\320\271\321\202\320\270\320\275\320\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSuplier: public Ui_AddSuplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUPLIER_H
