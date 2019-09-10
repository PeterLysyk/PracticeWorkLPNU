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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *idSlotAdding;
    QLabel *IdSlotLabel_2;
    QLineEdit *MaterialCountAdding;
    QLabel *MaterialCountLabel_2;
    QPushButton *addMatherialsToSlot;

    void setupUi(QWidget *AddSlot)
    {
        if (AddSlot->objectName().isEmpty())
            AddSlot->setObjectName(QString::fromUtf8("AddSlot"));
        AddSlot->resize(345, 244);
        IdSlot = new QLineEdit(AddSlot);
        IdSlot->setObjectName(QString::fromUtf8("IdSlot"));
        IdSlot->setGeometry(QRect(110, 20, 231, 22));
        IdStorage = new QLineEdit(AddSlot);
        IdStorage->setObjectName(QString::fromUtf8("IdStorage"));
        IdStorage->setGeometry(QRect(110, 50, 231, 22));
        IdSlotLabel = new QLabel(AddSlot);
        IdSlotLabel->setObjectName(QString::fromUtf8("IdSlotLabel"));
        IdSlotLabel->setGeometry(QRect(10, 20, 91, 16));
        IdMaterialLabel = new QLabel(AddSlot);
        IdMaterialLabel->setObjectName(QString::fromUtf8("IdMaterialLabel"));
        IdMaterialLabel->setGeometry(QRect(10, 80, 81, 16));
        IdStorageLabel = new QLabel(AddSlot);
        IdStorageLabel->setObjectName(QString::fromUtf8("IdStorageLabel"));
        IdStorageLabel->setGeometry(QRect(10, 50, 91, 16));
        MaterialCount = new QLineEdit(AddSlot);
        MaterialCount->setObjectName(QString::fromUtf8("MaterialCount"));
        MaterialCount->setGeometry(QRect(110, 110, 231, 22));
        AddDeliveryButton = new QPushButton(AddSlot);
        AddDeliveryButton->setObjectName(QString::fromUtf8("AddDeliveryButton"));
        AddDeliveryButton->setGeometry(QRect(260, 130, 80, 21));
        IdMaterial = new QLineEdit(AddSlot);
        IdMaterial->setObjectName(QString::fromUtf8("IdMaterial"));
        IdMaterial->setGeometry(QRect(110, 80, 231, 22));
        MaterialCountLabel = new QLabel(AddSlot);
        MaterialCountLabel->setObjectName(QString::fromUtf8("MaterialCountLabel"));
        MaterialCountLabel->setGeometry(QRect(10, 110, 101, 21));
        label = new QLabel(AddSlot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 161, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(AddSlot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 150, 211, 20));
        label_2->setFont(font);
        idSlotAdding = new QLineEdit(AddSlot);
        idSlotAdding->setObjectName(QString::fromUtf8("idSlotAdding"));
        idSlotAdding->setGeometry(QRect(110, 170, 231, 22));
        IdSlotLabel_2 = new QLabel(AddSlot);
        IdSlotLabel_2->setObjectName(QString::fromUtf8("IdSlotLabel_2"));
        IdSlotLabel_2->setGeometry(QRect(10, 170, 91, 16));
        MaterialCountAdding = new QLineEdit(AddSlot);
        MaterialCountAdding->setObjectName(QString::fromUtf8("MaterialCountAdding"));
        MaterialCountAdding->setGeometry(QRect(110, 200, 231, 22));
        MaterialCountLabel_2 = new QLabel(AddSlot);
        MaterialCountLabel_2->setObjectName(QString::fromUtf8("MaterialCountLabel_2"));
        MaterialCountLabel_2->setGeometry(QRect(10, 200, 101, 21));
        addMatherialsToSlot = new QPushButton(AddSlot);
        addMatherialsToSlot->setObjectName(QString::fromUtf8("addMatherialsToSlot"));
        addMatherialsToSlot->setGeometry(QRect(260, 220, 80, 21));

        retranslateUi(AddSlot);

        QMetaObject::connectSlotsByName(AddSlot);
    } // setupUi

    void retranslateUi(QWidget *AddSlot)
    {
        AddSlot->setWindowTitle(QCoreApplication::translate("AddSlot", "\320\241\320\233\320\236\320\242", nullptr));
        IdSlotLabel->setText(QCoreApplication::translate("AddSlot", "ID \320\241\320\273\320\276\321\202\320\260", nullptr));
        IdMaterialLabel->setText(QCoreApplication::translate("AddSlot", "ID \320\234\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
        IdStorageLabel->setText(QCoreApplication::translate("AddSlot", "ID \320\241\320\272\320\273\320\260\320\264\321\203", nullptr));
        AddDeliveryButton->setText(QCoreApplication::translate("AddSlot", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        MaterialCountLabel->setText(QCoreApplication::translate("AddSlot", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
        label->setText(QCoreApplication::translate("AddSlot", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\275\320\276\320\262\320\270\320\271 \321\201\320\273\320\276\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("AddSlot", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270  \321\226\321\201\320\275\321\203\321\216\321\207\320\270\320\271 \321\201\320\273\320\276\321\202", nullptr));
        IdSlotLabel_2->setText(QCoreApplication::translate("AddSlot", "ID \320\241\320\273\320\276\321\202\320\260", nullptr));
        MaterialCountLabel_2->setText(QCoreApplication::translate("AddSlot", "\320\227\320\274\321\226\320\275\320\260 \320\274\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
        addMatherialsToSlot->setText(QCoreApplication::translate("AddSlot", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSlot: public Ui_AddSlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSLOT_H
