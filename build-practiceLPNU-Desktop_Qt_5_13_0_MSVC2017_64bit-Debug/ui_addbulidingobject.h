/********************************************************************************
** Form generated from reading UI file 'addbulidingobject.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBULIDINGOBJECT_H
#define UI_ADDBULIDINGOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBulidingObject
{
public:
    QPushButton *AddBuildObjectButton;
    QLabel *IdObjectLabel;
    QLineEdit *IdObject;
    QLabel *AdressStreetLabel;
    QLineEdit *AdressStreet;
    QLabel *AdressBuildingLabel;
    QLineEdit *AdressBuilding;
    QLabel *PrioretyLabel;
    QLineEdit *Priorety;
    QLabel *StartBuildingDateLabel;
    QLabel *AdressCityLabel;
    QLineEdit *AdressCity;
    QDateEdit *StartBuildingDate;

    void setupUi(QWidget *AddBulidingObject)
    {
        if (AddBulidingObject->objectName().isEmpty())
            AddBulidingObject->setObjectName(QString::fromUtf8("AddBulidingObject"));
        AddBulidingObject->resize(321, 213);
        AddBuildObjectButton = new QPushButton(AddBulidingObject);
        AddBuildObjectButton->setObjectName(QString::fromUtf8("AddBuildObjectButton"));
        AddBuildObjectButton->setGeometry(QRect(240, 190, 80, 21));
        IdObjectLabel = new QLabel(AddBulidingObject);
        IdObjectLabel->setObjectName(QString::fromUtf8("IdObjectLabel"));
        IdObjectLabel->setGeometry(QRect(11, 11, 51, 16));
        IdObject = new QLineEdit(AddBulidingObject);
        IdObject->setObjectName(QString::fromUtf8("IdObject"));
        IdObject->setGeometry(QRect(90, 10, 232, 19));
        AdressStreetLabel = new QLabel(AddBulidingObject);
        AdressStreetLabel->setObjectName(QString::fromUtf8("AdressStreetLabel"));
        AdressStreetLabel->setGeometry(QRect(11, 71, 41, 16));
        AdressStreet = new QLineEdit(AddBulidingObject);
        AdressStreet->setObjectName(QString::fromUtf8("AdressStreet"));
        AdressStreet->setGeometry(QRect(90, 70, 231, 22));
        AdressBuildingLabel = new QLabel(AddBulidingObject);
        AdressBuildingLabel->setObjectName(QString::fromUtf8("AdressBuildingLabel"));
        AdressBuildingLabel->setGeometry(QRect(11, 101, 51, 16));
        AdressBuilding = new QLineEdit(AddBulidingObject);
        AdressBuilding->setObjectName(QString::fromUtf8("AdressBuilding"));
        AdressBuilding->setGeometry(QRect(90, 100, 231, 22));
        PrioretyLabel = new QLabel(AddBulidingObject);
        PrioretyLabel->setObjectName(QString::fromUtf8("PrioretyLabel"));
        PrioretyLabel->setGeometry(QRect(11, 131, 81, 16));
        Priorety = new QLineEdit(AddBulidingObject);
        Priorety->setObjectName(QString::fromUtf8("Priorety"));
        Priorety->setGeometry(QRect(90, 130, 231, 22));
        StartBuildingDateLabel = new QLabel(AddBulidingObject);
        StartBuildingDateLabel->setObjectName(QString::fromUtf8("StartBuildingDateLabel"));
        StartBuildingDateLabel->setGeometry(QRect(10, 160, 81, 21));
        AdressCityLabel = new QLabel(AddBulidingObject);
        AdressCityLabel->setObjectName(QString::fromUtf8("AdressCityLabel"));
        AdressCityLabel->setGeometry(QRect(11, 41, 30, 16));
        AdressCity = new QLineEdit(AddBulidingObject);
        AdressCity->setObjectName(QString::fromUtf8("AdressCity"));
        AdressCity->setGeometry(QRect(90, 40, 231, 22));
        StartBuildingDate = new QDateEdit(AddBulidingObject);
        StartBuildingDate->setObjectName(QString::fromUtf8("StartBuildingDate"));
        StartBuildingDate->setGeometry(QRect(90, 160, 231, 22));
        StartBuildingDate->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        retranslateUi(AddBulidingObject);

        QMetaObject::connectSlotsByName(AddBulidingObject);
    } // setupUi

    void retranslateUi(QWidget *AddBulidingObject)
    {
        AddBulidingObject->setWindowTitle(QCoreApplication::translate("AddBulidingObject", "\320\221\320\243\320\224\320\206\320\222\320\225\320\233\320\254\320\235\320\230\320\231 \320\236\320\221'\320\204\320\232\320\242", nullptr));
        AddBuildObjectButton->setText(QCoreApplication::translate("AddBulidingObject", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        IdObjectLabel->setText(QCoreApplication::translate("AddBulidingObject", "ID \320\276\320\261'\321\224\320\272\321\202\321\203", nullptr));
        AdressStreetLabel->setText(QCoreApplication::translate("AddBulidingObject", " \320\222\321\203\320\273\320\270\321\206\321\217", nullptr));
        AdressBuildingLabel->setText(QCoreApplication::translate("AddBulidingObject", "\320\221\321\203\320\264\320\270\320\275\320\276\320\272", nullptr));
        PrioretyLabel->setText(QCoreApplication::translate("AddBulidingObject", "\320\237\321\200\321\226\320\276\321\200\320\270\321\202\320\265\321\202\320\275\321\226\321\201\321\202\321\214", nullptr));
        StartBuildingDateLabel->setText(QCoreApplication::translate("AddBulidingObject", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\207\320\260\321\202\320\272\321\203", nullptr));
        AdressCityLabel->setText(QCoreApplication::translate("AddBulidingObject", " \320\234\321\226\321\201\321\202\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBulidingObject: public Ui_AddBulidingObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBULIDINGOBJECT_H
