#include "addstorage.h"
#include "ui_addstorage.h"
#include "databasefunctions.h"

AddStorage::AddStorage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStorage)
{
    ui->setupUi(this);
}

AddStorage::~AddStorage()
{
    delete ui;
}

void AddStorage::on_AddStorageButton_clicked()
{
    addRecordToStorageTable(
                ui->IdStorage->text().toInt(),
                ui->AdressCity->text(),
                ui->AdressStreet->text(),
                ui->AdressBuilding->text(),
                ui->Square->text().toDouble());
}
