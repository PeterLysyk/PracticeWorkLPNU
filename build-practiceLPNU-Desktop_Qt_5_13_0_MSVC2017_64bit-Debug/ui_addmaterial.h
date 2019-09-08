/********************************************************************************
** Form generated from reading UI file 'addmaterial.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMATERIAL_H
#define UI_ADDMATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMaterial
{
public:
    QLabel *ExpiritDateLabel;
    QLineEdit *Weight;
    QLabel *MadeDateLabel;
    QPushButton *AddMaterialButton;
    QLineEdit *IdMaterial;
    QLabel *CountLabel;
    QLabel *WeightLabel;
    QLineEdit *Name;
    QLabel *IdMaterialLabel;
    QLabel *NameLabel;
    QLineEdit *Count;
    QLabel *QualityLabel;
    QLineEdit *Quality;
    QLabel *DescriptionLabel;
    QLineEdit *Description;
    QDateEdit *MadeDate;
    QDateEdit *ExpiritDate;

    void setupUi(QWidget *AddMaterial)
    {
        if (AddMaterial->objectName().isEmpty())
            AddMaterial->setObjectName(QString::fromUtf8("AddMaterial"));
        AddMaterial->resize(395, 310);
        ExpiritDateLabel = new QLabel(AddMaterial);
        ExpiritDateLabel->setObjectName(QString::fromUtf8("ExpiritDateLabel"));
        ExpiritDateLabel->setGeometry(QRect(10, 100, 101, 16));
        Weight = new QLineEdit(AddMaterial);
        Weight->setObjectName(QString::fromUtf8("Weight"));
        Weight->setGeometry(QRect(120, 130, 271, 22));
        MadeDateLabel = new QLabel(AddMaterial);
        MadeDateLabel->setObjectName(QString::fromUtf8("MadeDateLabel"));
        MadeDateLabel->setGeometry(QRect(10, 70, 101, 16));
        AddMaterialButton = new QPushButton(AddMaterial);
        AddMaterialButton->setObjectName(QString::fromUtf8("AddMaterialButton"));
        AddMaterialButton->setGeometry(QRect(310, 280, 80, 21));
        IdMaterial = new QLineEdit(AddMaterial);
        IdMaterial->setObjectName(QString::fromUtf8("IdMaterial"));
        IdMaterial->setGeometry(QRect(121, 10, 271, 20));
        CountLabel = new QLabel(AddMaterial);
        CountLabel->setObjectName(QString::fromUtf8("CountLabel"));
        CountLabel->setGeometry(QRect(9, 159, 81, 21));
        WeightLabel = new QLabel(AddMaterial);
        WeightLabel->setObjectName(QString::fromUtf8("WeightLabel"));
        WeightLabel->setGeometry(QRect(10, 130, 81, 16));
        Name = new QLineEdit(AddMaterial);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(120, 40, 271, 22));
        IdMaterialLabel = new QLabel(AddMaterial);
        IdMaterialLabel->setObjectName(QString::fromUtf8("IdMaterialLabel"));
        IdMaterialLabel->setGeometry(QRect(10, 10, 71, 16));
        NameLabel = new QLabel(AddMaterial);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setGeometry(QRect(10, 40, 30, 16));
        Count = new QLineEdit(AddMaterial);
        Count->setObjectName(QString::fromUtf8("Count"));
        Count->setGeometry(QRect(120, 160, 271, 22));
        QualityLabel = new QLabel(AddMaterial);
        QualityLabel->setObjectName(QString::fromUtf8("QualityLabel"));
        QualityLabel->setGeometry(QRect(9, 189, 81, 21));
        Quality = new QLineEdit(AddMaterial);
        Quality->setObjectName(QString::fromUtf8("Quality"));
        Quality->setGeometry(QRect(120, 190, 271, 22));
        DescriptionLabel = new QLabel(AddMaterial);
        DescriptionLabel->setObjectName(QString::fromUtf8("DescriptionLabel"));
        DescriptionLabel->setGeometry(QRect(9, 219, 81, 21));
        Description = new QLineEdit(AddMaterial);
        Description->setObjectName(QString::fromUtf8("Description"));
        Description->setGeometry(QRect(120, 220, 271, 51));
        MadeDate = new QDateEdit(AddMaterial);
        MadeDate->setObjectName(QString::fromUtf8("MadeDate"));
        MadeDate->setGeometry(QRect(120, 70, 271, 22));
        ExpiritDate = new QDateEdit(AddMaterial);
        ExpiritDate->setObjectName(QString::fromUtf8("ExpiritDate"));
        ExpiritDate->setGeometry(QRect(120, 100, 271, 22));

        retranslateUi(AddMaterial);

        QMetaObject::connectSlotsByName(AddMaterial);
    } // setupUi

    void retranslateUi(QWidget *AddMaterial)
    {
        AddMaterial->setWindowTitle(QCoreApplication::translate("AddMaterial", "\320\234\320\220\320\242\320\225\320\240\320\206\320\220\320\233", nullptr));
        ExpiritDateLabel->setText(QCoreApplication::translate("AddMaterial", "\320\242\320\265\321\200\320\274\321\226\320\275 \320\277\321\200\320\270\320\264\320\260\321\202\320\275\320\276\321\201\321\202\321\226", nullptr));
        MadeDateLabel->setText(QCoreApplication::translate("AddMaterial", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\263\320\276\321\202\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        AddMaterialButton->setText(QCoreApplication::translate("AddMaterial", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        CountLabel->setText(QCoreApplication::translate("AddMaterial", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", nullptr));
        WeightLabel->setText(QCoreApplication::translate("AddMaterial", "\320\222\320\260\320\263\320\260", nullptr));
        IdMaterialLabel->setText(QCoreApplication::translate("AddMaterial", "ID \320\274\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", nullptr));
        NameLabel->setText(QCoreApplication::translate("AddMaterial", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        QualityLabel->setText(QCoreApplication::translate("AddMaterial", "\320\257\320\272\321\226\321\201\321\202\321\214", nullptr));
        DescriptionLabel->setText(QCoreApplication::translate("AddMaterial", "\320\236\320\277\320\270\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMaterial: public Ui_AddMaterial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMATERIAL_H
