/********************************************************************************
** Form generated from reading UI file 'addusing.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSING_H
#define UI_ADDUSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUsing
{
public:
    QLabel *IdUsingLabel;
    QLineEdit *IdObject;
    QDateEdit *UsingDate;
    QLineEdit *IdUsing;
    QPushButton *AddUsingButton;
    QLabel *UsingDateLabel;
    QLabel *IdObjectLabel;
    QLabel *IdSlotLabel;
    QLineEdit *IdSlot;
    QLineEdit *materialCount;
    QLabel *materialCountLabel;

    void setupUi(QWidget *AddUsing)
    {
        if (AddUsing->objectName().isEmpty())
            AddUsing->setObjectName(QString::fromUtf8("AddUsing"));
        AddUsing->resize(341, 196);
        IdUsingLabel = new QLabel(AddUsing);
        IdUsingLabel->setObjectName(QString::fromUtf8("IdUsingLabel"));
        IdUsingLabel->setGeometry(QRect(10, 10, 91, 16));
        IdObject = new QLineEdit(AddUsing);
        IdObject->setObjectName(QString::fromUtf8("IdObject"));
        IdObject->setGeometry(QRect(110, 40, 231, 22));
        UsingDate = new QDateEdit(AddUsing);
        UsingDate->setObjectName(QString::fromUtf8("UsingDate"));
        UsingDate->setGeometry(QRect(110, 130, 231, 22));
        IdUsing = new QLineEdit(AddUsing);
        IdUsing->setObjectName(QString::fromUtf8("IdUsing"));
        IdUsing->setGeometry(QRect(110, 10, 231, 22));
        AddUsingButton = new QPushButton(AddUsing);
        AddUsingButton->setObjectName(QString::fromUtf8("AddUsingButton"));
        AddUsingButton->setGeometry(QRect(260, 170, 80, 21));
        UsingDateLabel = new QLabel(AddUsing);
        UsingDateLabel->setObjectName(QString::fromUtf8("UsingDateLabel"));
        UsingDateLabel->setGeometry(QRect(0, 130, 101, 21));
        IdObjectLabel = new QLabel(AddUsing);
        IdObjectLabel->setObjectName(QString::fromUtf8("IdObjectLabel"));
        IdObjectLabel->setGeometry(QRect(10, 40, 81, 16));
        IdSlotLabel = new QLabel(AddUsing);
        IdSlotLabel->setObjectName(QString::fromUtf8("IdSlotLabel"));
        IdSlotLabel->setGeometry(QRect(10, 70, 81, 16));
        IdSlot = new QLineEdit(AddUsing);
        IdSlot->setObjectName(QString::fromUtf8("IdSlot"));
        IdSlot->setGeometry(QRect(110, 70, 231, 22));
        materialCount = new QLineEdit(AddUsing);
        materialCount->setObjectName(QString::fromUtf8("materialCount"));
        materialCount->setGeometry(QRect(110, 100, 231, 22));
        materialCountLabel = new QLabel(AddUsing);
        materialCountLabel->setObjectName(QString::fromUtf8("materialCountLabel"));
        materialCountLabel->setGeometry(QRect(10, 100, 81, 16));

        retranslateUi(AddUsing);

        QMetaObject::connectSlotsByName(AddUsing);
    } // setupUi

    void retranslateUi(QWidget *AddUsing)
    {
        AddUsing->setWindowTitle(QCoreApplication::translate("AddUsing", "\320\222\320\230\320\232\320\236\320\240\320\230\320\241\320\242\320\220\320\235\320\235\320\257", nullptr));
        IdUsingLabel->setText(QCoreApplication::translate("AddUsing", "ID \320\222\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\217", nullptr));
        AddUsingButton->setText(QCoreApplication::translate("AddUsing", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        UsingDateLabel->setText(QCoreApplication::translate("AddUsing", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\217", nullptr));
        IdObjectLabel->setText(QCoreApplication::translate("AddUsing", "ID \320\276\320\261'\321\224\320\272\321\202\321\203", nullptr));
        IdSlotLabel->setText(QCoreApplication::translate("AddUsing", "ID \321\201\320\273\320\276\321\202\320\260", nullptr));
        materialCountLabel->setText(QCoreApplication::translate("AddUsing", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUsing: public Ui_AddUsing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSING_H
