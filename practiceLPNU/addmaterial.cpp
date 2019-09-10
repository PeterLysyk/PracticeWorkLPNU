#include "addmaterial.h"
#include "ui_addmaterial.h"
#include "databasefunctions.h"

AddMaterial::AddMaterial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMaterial)
{
    ui->setupUi(this);
}

AddMaterial::~AddMaterial()
{
    delete ui;
}

void AddMaterial::on_AddMaterialButton_clicked()
{
    addRecordToMaterialTable(
                ui->IdMaterial->text().toInt(),
                ui->Name->text(),
                ui->MadeDate->text(),
                ui->ExpiritDate->text(),
                ui->Weight->text().toDouble(),
                ui->Count->text().toInt(),
                ui->Quality->text(),
                ui->Description->text());
}
