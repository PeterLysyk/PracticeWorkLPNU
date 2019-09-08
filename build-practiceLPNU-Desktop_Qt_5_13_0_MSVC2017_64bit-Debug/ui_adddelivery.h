/********************************************************************************
** Form generated from reading UI file 'adddelivery.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELIVERY_H
#define UI_ADDDELIVERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDelivery
{
public:
    QPushButton *AddDeliveryButton;
    QLabel *IdMaterialLabel;
    QLabel *IdSuplierLabel;
    QLineEdit *IdMaterial;
    QLineEdit *IdDelivery;
    QLabel *IdDeliveryLabel;
    QLabel *StateLabel;
    QLineEdit *IdSuplier;
    QLineEdit *State;

    void setupUi(QWidget *AddDelivery)
    {
        if (AddDelivery->objectName().isEmpty())
            AddDelivery->setObjectName(QString::fromUtf8("AddDelivery"));
        AddDelivery->resize(346, 149);
        AddDeliveryButton = new QPushButton(AddDelivery);
        AddDeliveryButton->setObjectName(QString::fromUtf8("AddDeliveryButton"));
        AddDeliveryButton->setGeometry(QRect(260, 120, 80, 21));
        IdMaterialLabel = new QLabel(AddDelivery);
        IdMaterialLabel->setObjectName(QString::fromUtf8("IdMaterialLabel"));
        IdMaterialLabel->setGeometry(QRect(10, 60, 81, 16));
        IdSuplierLabel = new QLabel(AddDelivery);
        IdSuplierLabel->setObjectName(QString::fromUtf8("IdSuplierLabel"));
        IdSuplierLabel->setGeometry(QRect(10, 30, 91, 16));
        IdMaterial = new QLineEdit(AddDelivery);
        IdMaterial->setObjectName(QString::fromUtf8("IdMaterial"));
        IdMaterial->setGeometry(QRect(110, 60, 231, 22));
        IdDelivery = new QLineEdit(AddDelivery);
        IdDelivery->setObjectName(QString::fromUtf8("IdDelivery"));
        IdDelivery->setGeometry(QRect(110, 0, 231, 22));
        IdDeliveryLabel = new QLabel(AddDelivery);
        IdDeliveryLabel->setObjectName(QString::fromUtf8("IdDeliveryLabel"));
        IdDeliveryLabel->setGeometry(QRect(10, 0, 91, 16));
        StateLabel = new QLabel(AddDelivery);
        StateLabel->setObjectName(QString::fromUtf8("StateLabel"));
        StateLabel->setGeometry(QRect(10, 90, 101, 21));
        IdSuplier = new QLineEdit(AddDelivery);
        IdSuplier->setObjectName(QString::fromUtf8("IdSuplier"));
        IdSuplier->setGeometry(QRect(110, 30, 231, 22));
        State = new QLineEdit(AddDelivery);
        State->setObjectName(QString::fromUtf8("State"));
        State->setGeometry(QRect(110, 90, 231, 22));

        retranslateUi(AddDelivery);

        QMetaObject::connectSlotsByName(AddDelivery);
    } // setupUi

    void retranslateUi(QWidget *AddDelivery)
    {
        AddDelivery->setWindowTitle(QCoreApplication::translate("AddDelivery", "\320\224\320\236\320\241\320\242\320\220\320\222\320\232\320\220", nullptr));
        AddDeliveryButton->setText(QCoreApplication::translate("AddDelivery", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        IdMaterialLabel->setText(QCoreApplication::translate("AddDelivery", "ID \320\234\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
        IdSuplierLabel->setText(QCoreApplication::translate("AddDelivery", "ID \320\237\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        IdDeliveryLabel->setText(QCoreApplication::translate("AddDelivery", "ID \320\237\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        StateLabel->setText(QCoreApplication::translate("AddDelivery", "\320\241\321\202\320\260\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDelivery: public Ui_AddDelivery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELIVERY_H
