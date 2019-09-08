#include "addrecordstabwidget.h"
#include "ui_addrecordstabwidget.h"
#include "databasefunctions.h"
#include "addbulidingobject.h"
#include "adddelivery.h"
#include "addmaterial.h"
#include "addslot.h"
#include "addstorage.h"
#include "addsuplier.h"
#include "addusing.h"
#include<iostream>
#include<QLayout>
#include <QVBoxLayout>
#include<memory>

AddRecordsTabWidget::AddRecordsTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addRecordsTabWidget)
{
    ui->setupUi(this);
}

AddRecordsTabWidget::~AddRecordsTabWidget()
{
    delete ui;
}

void AddRecordsTabWidget::on_BuildingObjectAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddBulidingObject(this);
   // ui->AddObjectLayout->addWidget(obj);
    ui->AddObjectLayout->addWidget(obj);
    obj->setWindowModality(Qt::WindowModal);

    qDebug()<<"here!";
}

void AddRecordsTabWidget::on_UsingAddRecordButton_clicked()
{
    //auto addUsingRecord = std::make_unique<AddUsing>();
//    auto addUsingRecord = new AddUsing(ui->recordsAdderDocerWidget);
//    clearWidgets(ui->recordsAdderDocerWidget);
//    addUsingRecord->show();
}

void AddRecordsTabWidget::on_MaterialAddRecordButton_clicked()
{
    //auto addMaterialRecord = std::make_unique<AddMaterial>();
//    auto addMaterialRecord = new AddMaterial(ui->recordsAdderDocerWidget);
//    clearWidgets(ui->recordsAdderDocerWidget);
//    addMaterialRecord->show();
}

void AddRecordsTabWidget::on_DevileryAddRecordButton_clicked()
{
    //auto addDeliveryRecord = std::make_unique<AddDelivery>();
    //ui->recordsAdderWidget->hide();
//    ui->recordsAdderDocerWidget->show();
//    auto addDeliveryRecord = new AddDelivery(ui->recordsAdderDocerWidget);
//    //clearWidgets(ui->recordsAdderWidget);
//    addDeliveryRecord->show();
}

void AddRecordsTabWidget::on_SuplierAddRecordButton_clicked()
{
//    //auto addSuplierRecord = std::make_unique<AddSuplier>();
//    auto addSuplierRecord = new AddSuplier(ui->recordsAdderDocerWidget);
//    //clearWidgets(ui->horizontalLayout);
//    addSuplierRecord->show();
}

void AddRecordsTabWidget::on_StorageAddRecordButton_clicked()
{
//   // auto addStorageRecord = std::make_unique<AddStorage>();
//    auto addStorageRecord = new AddStorage(ui->recordsAdderDocerWidget);
//    clearWidgets(ui->recordsAdderDocerWidget);
//    addStorageRecord->show();
}

void AddRecordsTabWidget::on_SlotAddRecordButton_clicked()
{
//    //auto addSlotRecord = std::make_unique<AddSlot>();
//    auto addSlotRecord = new AddSlot(this);
//    clearWidgets(ui->recordsAdderDocerWidget);
//    addSlotRecord->show();
}

void clearWidgetsInsideLayout(QVBoxLayout *layout)
{
    while(QLayoutItem *item = layout->takeAt(0))
    {
        Q_ASSERT(!item->layout());
        delete item->widget();
        delete item;
    }
}
