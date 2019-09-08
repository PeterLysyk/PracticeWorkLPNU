/********************************************************************************
** Form generated from reading UI file 'addrecordstabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDSTABWIDGET_H
#define UI_ADDRECORDSTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRecordsTabWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *AddObjectLayout;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *BuildingObjectAddRecordButton;
    QPushButton *UsingAddRecordButton;
    QPushButton *MaterialAddRecordButton;
    QPushButton *DevileryAddRecordButton;
    QPushButton *SuplierAddRecordButton;
    QPushButton *StorageAddRecordButton;
    QPushButton *SlotAddRecordButton;

    void setupUi(QWidget *addRecordsTabWidget)
    {
        if (addRecordsTabWidget->objectName().isEmpty())
            addRecordsTabWidget->setObjectName(QString::fromUtf8("addRecordsTabWidget"));
        addRecordsTabWidget->resize(571, 277);
        verticalLayoutWidget = new QWidget(addRecordsTabWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(159, 10, 401, 261));
        AddObjectLayout = new QVBoxLayout(verticalLayoutWidget);
        AddObjectLayout->setObjectName(QString::fromUtf8("AddObjectLayout"));
        AddObjectLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(addRecordsTabWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 141, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BuildingObjectAddRecordButton = new QPushButton(layoutWidget);
        BuildingObjectAddRecordButton->setObjectName(QString::fromUtf8("BuildingObjectAddRecordButton"));

        verticalLayout->addWidget(BuildingObjectAddRecordButton);

        UsingAddRecordButton = new QPushButton(layoutWidget);
        UsingAddRecordButton->setObjectName(QString::fromUtf8("UsingAddRecordButton"));

        verticalLayout->addWidget(UsingAddRecordButton);

        MaterialAddRecordButton = new QPushButton(layoutWidget);
        MaterialAddRecordButton->setObjectName(QString::fromUtf8("MaterialAddRecordButton"));

        verticalLayout->addWidget(MaterialAddRecordButton);

        DevileryAddRecordButton = new QPushButton(layoutWidget);
        DevileryAddRecordButton->setObjectName(QString::fromUtf8("DevileryAddRecordButton"));

        verticalLayout->addWidget(DevileryAddRecordButton);

        SuplierAddRecordButton = new QPushButton(layoutWidget);
        SuplierAddRecordButton->setObjectName(QString::fromUtf8("SuplierAddRecordButton"));

        verticalLayout->addWidget(SuplierAddRecordButton);

        StorageAddRecordButton = new QPushButton(layoutWidget);
        StorageAddRecordButton->setObjectName(QString::fromUtf8("StorageAddRecordButton"));

        verticalLayout->addWidget(StorageAddRecordButton);

        SlotAddRecordButton = new QPushButton(layoutWidget);
        SlotAddRecordButton->setObjectName(QString::fromUtf8("SlotAddRecordButton"));

        verticalLayout->addWidget(SlotAddRecordButton);


        retranslateUi(addRecordsTabWidget);

        QMetaObject::connectSlotsByName(addRecordsTabWidget);
    } // setupUi

    void retranslateUi(QWidget *addRecordsTabWidget)
    {
        addRecordsTabWidget->setWindowTitle(QCoreApplication::translate("addRecordsTabWidget", "Form", nullptr));
        BuildingObjectAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\221\321\203\320\264\321\226\320\262\320\265\320\273\321\214\320\275\320\270\320\271 \320\276\320\261'\321\224\320\272\321\202", nullptr));
        UsingAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\222\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\217", nullptr));
        MaterialAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\234\320\260\321\202\320\265\321\200\321\226\320\260\320\273", nullptr));
        DevileryAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\237\320\276\321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        SuplierAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\237\320\276\321\201\321\202\320\260\321\207\320\260\320\273\321\214\320\275\320\270\320\272", nullptr));
        StorageAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        SlotAddRecordButton->setText(QCoreApplication::translate("addRecordsTabWidget", "\320\241\320\273\320\276\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addRecordsTabWidget: public Ui_addRecordsTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDSTABWIDGET_H
