#include "addbulidingobject.h"
#include "ui_addbulidingobject.h"
#include "databasefunctions.h"

AddBulidingObject::AddBulidingObject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddBulidingObject)
{
    ui->setupUi(this);
}

AddBulidingObject::~AddBulidingObject()
{
    delete ui;
}

void AddBulidingObject::on_AddBuildObjectButton_clicked()
{
    addRecordToConstructionObjectTable(
                ui->IdObject->text().toInt(),
                ui->AdressCity->text(),
                ui->AdressStreet->text(),
                ui->AdressBuilding->text(),
                ui->Priorety->text().toInt(),
                ui->StartBuildingDate->text()
                );
    this->close();
}
