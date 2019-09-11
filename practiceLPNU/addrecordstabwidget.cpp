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
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddBulidingObject(this);
    ui->AddObjectLayout->addWidget(obj);
}

void AddRecordsTabWidget::on_UsingAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddUsing(this);
    ui->AddObjectLayout->addWidget(obj);
}

void AddRecordsTabWidget::on_MaterialAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddMaterial(this);
    ui->AddObjectLayout->addWidget(obj);
}

void AddRecordsTabWidget::on_DevileryAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddDelivery(this);
    ui->AddObjectLayout->addWidget(obj);
}

void AddRecordsTabWidget::on_SuplierAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddSuplier(this);
    ui->AddObjectLayout->addWidget(obj);
}

void AddRecordsTabWidget::on_StorageAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddStorage(this);
    ui->AddObjectLayout->addWidget(obj);
}

void AddRecordsTabWidget::on_SlotAddRecordButton_clicked()
{
    clearWidgetsInsideLayout(ui->AddObjectLayout);
    auto obj = new AddSlot(this);
    ui->AddObjectLayout->addWidget(obj);
}

void clearWidgetsInsideLayout(QVBoxLayout *layout)
{
    while( QLayoutItem* item = layout->takeAt(0))
    {
        Q_ASSERT(!item->layout()); // otherwise the layout will leak
        delete item->widget();
        delete item;
    }
}
