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
    //auto addBuldingObjectRecord = std::make_unique<AddBulidingObject>();
    auto addBuldingObjectRecord = new AddBulidingObject(ui->recordsAdderWidget);
    clearWidgets(ui->recordsAdderWidget);
    addBuldingObjectRecord->show();
}

void AddRecordsTabWidget::on_UsingAddRecordButton_clicked()
{
    //auto addUsingRecord = std::make_unique<AddUsing>();
    auto addUsingRecord = new AddUsing(ui->recordsAdderWidget);
    clearWidgets(ui->recordsAdderWidget);
    addUsingRecord->show();
}

void AddRecordsTabWidget::on_MaterialAddRecordButton_clicked()
{
    //auto addMaterialRecord = std::make_unique<AddMaterial>();
    auto addMaterialRecord = new AddMaterial(ui->recordsAdderWidget);
    clearWidgets(ui->recordsAdderWidget);
    addMaterialRecord->show();
}

void AddRecordsTabWidget::on_DevileryAddRecordButton_clicked()
{
    //auto addDeliveryRecord = std::make_unique<AddDelivery>();
    //ui->recordsAdderWidget->hide();
    ui->recordsAdderWidget->show();
    auto addDeliveryRecord = new AddDelivery(ui->recordsAdderWidget);
    //clearWidgets(ui->recordsAdderWidget);
    addDeliveryRecord->show();
}

void AddRecordsTabWidget::on_SuplierAddRecordButton_clicked()
{
    //auto addSuplierRecord = std::make_unique<AddSuplier>();
    auto addSuplierRecord = new AddSuplier(ui->recordsAdderWidget);
    //clearWidgets(ui->horizontalLayout);
    addSuplierRecord->show();
}

void AddRecordsTabWidget::on_StorageAddRecordButton_clicked()
{
   // auto addStorageRecord = std::make_unique<AddStorage>();
    auto addStorageRecord = new AddStorage(ui->recordsAdderWidget);
    clearWidgets(ui->recordsAdderWidget);
    addStorageRecord->show();
}

void AddRecordsTabWidget::on_SlotAddRecordButton_clicked()
{
    //auto addSlotRecord = std::make_unique<AddSlot>();
    auto addSlotRecord = new AddSlot(this);
    clearWidgets(ui->recordsAdderWidget);
    addSlotRecord->show();
}

void clearWidgets(QWidget *widget)
{
    QList< QWidget* > children;
        do
        {
           children = widget->findChildren< QWidget* >();
           if (!children.count())
               break;
           delete children.at( 0 );
        }
        while ( true );
}
