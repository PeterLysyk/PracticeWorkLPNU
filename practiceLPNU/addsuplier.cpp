#include "addsuplier.h"
#include "ui_addsuplier.h"
#include "databasefunctions.h"

AddSuplier::AddSuplier(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddSuplier)
{
    ui->setupUi(this);
}

AddSuplier::~AddSuplier()
{
    delete ui;
}

void AddSuplier::on_AddSuplierButton_clicked()
{
    addRecordToSuplierTable(
                ui->IdSuplier->text().toInt(),
                ui->Name->text(),
                ui->CotractDate->text(),
                ui->Rate->text().toInt());
}
