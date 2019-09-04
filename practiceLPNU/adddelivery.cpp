#include "adddelivery.h"
#include "ui_adddelivery.h"
#include "databasefunctions.h"

AddDelivery::AddDelivery(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddDelivery)
{
    ui->setupUi(this);
}

AddDelivery::~AddDelivery()
{
    delete ui;
}

void AddDelivery::on_AddDeliveryButton_clicked()
{
    addRecordToDeliveryTable(
                ui->IdDelivery->text().toInt(),
                ui->IdSuplier->text().toInt(),
                ui->IdMaterial->text().toInt(),
                ui->State->text());
}
