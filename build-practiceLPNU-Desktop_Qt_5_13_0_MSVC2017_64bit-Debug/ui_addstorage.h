/********************************************************************************
** Form generated from reading UI file 'addstorage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTORAGE_H
#define UI_ADDSTORAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStorage
{
public:
    QLabel *AdressBuildingLabel;
    QLineEdit *Square;
    QLabel *AdressStreetLabel;
    QLineEdit *AdressBuilding;
    QPushButton *AddStorageButton;
    QLineEdit *IdStorage;
    QLabel *SquareLabel;
    QLineEdit *AdressCity;
    QLineEdit *AdressStreet;
    QLabel *IdStorageLabel;
    QLabel *AdressCityLabel;

    void setupUi(QWidget *AddStorage)
    {
        if (AddStorage->objectName().isEmpty())
            AddStorage->setObjectName(QString::fromUtf8("AddStorage"));
        AddStorage->resize(319, 184);
        AdressBuildingLabel = new QLabel(AddStorage);
        AdressBuildingLabel->setObjectName(QString::fromUtf8("AdressBuildingLabel"));
        AdressBuildingLabel->setGeometry(QRect(1, 101, 41, 16));
        Square = new QLineEdit(AddStorage);
        Square->setObjectName(QString::fromUtf8("Square"));
        Square->setGeometry(QRect(80, 130, 231, 22));
        AdressStreetLabel = new QLabel(AddStorage);
        AdressStreetLabel->setObjectName(QString::fromUtf8("AdressStreetLabel"));
        AdressStreetLabel->setGeometry(QRect(1, 71, 41, 16));
        AdressBuilding = new QLineEdit(AddStorage);
        AdressBuilding->setObjectName(QString::fromUtf8("AdressBuilding"));
        AdressBuilding->setGeometry(QRect(80, 100, 231, 22));
        AddStorageButton = new QPushButton(AddStorage);
        AddStorageButton->setObjectName(QString::fromUtf8("AddStorageButton"));
        AddStorageButton->setGeometry(QRect(230, 160, 80, 21));
        IdStorage = new QLineEdit(AddStorage);
        IdStorage->setObjectName(QString::fromUtf8("IdStorage"));
        IdStorage->setGeometry(QRect(80, 10, 232, 19));
        SquareLabel = new QLabel(AddStorage);
        SquareLabel->setObjectName(QString::fromUtf8("SquareLabel"));
        SquareLabel->setGeometry(QRect(1, 131, 71, 16));
        AdressCity = new QLineEdit(AddStorage);
        AdressCity->setObjectName(QString::fromUtf8("AdressCity"));
        AdressCity->setGeometry(QRect(80, 40, 231, 22));
        AdressStreet = new QLineEdit(AddStorage);
        AdressStreet->setObjectName(QString::fromUtf8("AdressStreet"));
        AdressStreet->setGeometry(QRect(80, 70, 231, 22));
        IdStorageLabel = new QLabel(AddStorage);
        IdStorageLabel->setObjectName(QString::fromUtf8("IdStorageLabel"));
        IdStorageLabel->setGeometry(QRect(1, 11, 51, 16));
        AdressCityLabel = new QLabel(AddStorage);
        AdressCityLabel->setObjectName(QString::fromUtf8("AdressCityLabel"));
        AdressCityLabel->setGeometry(QRect(1, 41, 30, 16));

        retranslateUi(AddStorage);

        QMetaObject::connectSlotsByName(AddStorage);
    } // setupUi

    void retranslateUi(QWidget *AddStorage)
    {
        AddStorage->setWindowTitle(QCoreApplication::translate("AddStorage", "\320\241\320\232\320\233\320\220\320\224", nullptr));
        AdressBuildingLabel->setText(QCoreApplication::translate("AddStorage", " \320\222\321\203\320\273\320\270\321\206\321\217", nullptr));
        AdressStreetLabel->setText(QCoreApplication::translate("AddStorage", " \320\222\321\203\320\273\320\270\321\206\321\217", nullptr));
        AddStorageButton->setText(QCoreApplication::translate("AddStorage", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        SquareLabel->setText(QCoreApplication::translate("AddStorage", "\320\237\320\273\320\276\321\211\320\260", nullptr));
        IdStorageLabel->setText(QCoreApplication::translate("AddStorage", "ID \321\201\320\272\320\273\320\260\320\264\321\203", nullptr));
        AdressCityLabel->setText(QCoreApplication::translate("AddStorage", " \320\234\321\226\321\201\321\202\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStorage: public Ui_AddStorage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTORAGE_H
