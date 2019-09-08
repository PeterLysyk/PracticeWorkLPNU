/********************************************************************************
** Form generated from reading UI file 'addslot.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSLOT_H
#define UI_ADDSLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddSlot
{
public:
    QLineEdit *IdSlot;
    QLineEdit *IdStorage;
    QLabel *IdSlotLabel;
    QLabel *IdMaterialLabel;
    QLabel *IdStorageLabel;
    QLineEdit *MaterialCount;
    QPushButton *AddDeliveryButton;
    QLineEdit *IdMaterial;
    QLabel *MaterialCountLabel;

    void setupUi(QWidget *AddSlot)
    {
        if (AddSlot->objectName().isEmpty())
            AddSlot->setObjectName(QString::fromUtf8("AddSlot"));
        AddSlot->resize(345, 158);
        IdSlot = new QLineEdit(AddSlot);
        IdSlot->setObjectName(QString::fromUtf8("IdSlot"));
        IdSlot->setGeometry(QRect(110, 10, 231, 22));
        IdStorage = new QLineEdit(AddSlot);
        IdStorage->setObjectName(QString::fromUtf8("IdStorage"));
        IdStorage->setGeometry(QRect(110, 40, 231, 22));
        IdSlotLabel = new QLabel(AddSlot);
        IdSlotLabel->setObjectName(QString::fromUtf8("IdSlotLabel"));
        IdSlotLabel->setGeometry(QRect(10, 10, 91, 16));
        IdMaterialLabel = new QLabel(AddSlot);
        IdMaterialLabel->setObjectName(QString::fromUtf8("IdMaterialLabel"));
        IdMaterialLabel->setGeometry(QRect(10, 70, 81, 16));
        IdStorageLabel = new QLabel(AddSlot);
        IdStorageLabel->setObjectName(QString::fromUtf8("IdStorageLabel"));
        IdStorageLabel->setGeometry(QRect(10, 40, 91, 16));
        MaterialCount = new QLineEdit(AddSlot);
        MaterialCount->setObjectName(QString::fromUtf8("MaterialCount"));
        MaterialCount->setGeometry(QRect(110, 100, 231, 22));
        AddDeliveryButton = new QPushButton(AddSlot);
        AddDeliveryButton->setObjectName(QString::fromUtf8("AddDeliveryButton"));
        AddDeliveryButton->setGeometry(QRect(260, 130, 80, 21));
        IdMaterial = new QLineEdit(AddSlot);
        IdMaterial->setObjectName(QString::fromUtf8("IdMaterial"));
        IdMaterial->setGeometry(QRect(110, 70, 231, 22));
        MaterialCountLabel = new QLabel(AddSlot);
        MaterialCountLabel->setObjectName(QString::fromUtf8("MaterialCountLabel"));
        MaterialCountLabel->setGeometry(QRect(10, 100, 101, 21));

        retranslateUi(AddSlot);

        QMetaObject::connectSlotsByName(AddSlot);
    } // setupUi

    void retranslateUi(QWidget *AddSlot)
    {
        AddSlot->setWindowTitle(QCoreApplication::translate("AddSlot", "\320\241\320\233\320\236\320\242", nullptr));
        IdSlotLabel->setText(QCoreApplication::translate("AddSlot", "ID \320\241\320\273\320\276\321\202\320\260", nullptr));
        IdMaterialLabel->setText(QCoreApplication::translate("AddSlot", "ID \320\234\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
        IdStorageLabel->setText(QCoreApplication::translate("AddSlot", "ID \320\241\320\272\320\273\320\260\320\264\321\203", nullptr));
        AddDeliveryButton->setText(QCoreApplication::translate("AddSlot", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        MaterialCountLabel->setText(QCoreApplication::translate("AddSlot", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSlot: public Ui_AddSlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSLOT_H
