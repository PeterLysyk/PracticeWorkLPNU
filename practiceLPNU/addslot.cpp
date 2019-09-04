#include "addslot.h"
#include "ui_addslot.h"
#include "databasefunctions.h"

AddSlot::AddSlot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddSlot)
{
    ui->setupUi(this);
}

AddSlot::~AddSlot()
{
    delete ui;
}

void AddSlot::on_AddDeliveryButton_clicked()
{
    addRecordToSlotTable(
                ui->IdSlot->text().toInt(),
                ui->IdStorage->text().toInt(),
                ui->IdMaterial->text().toInt(),
                ui->MaterialCount->text().toInt());
}
