#include "addusing.h"
#include "ui_addusing.h"
#include "addusing.h"
#include "databasefunctions.h"

AddUsing::AddUsing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddUsing)
{
    ui->setupUi(this);
}

AddUsing::~AddUsing()
{
    delete ui;
}


void AddUsing::on_AddUsingButton_clicked()
{
    addRecordToUsingTable(
                ui->IdUsing->text().toInt(),
                ui->IdObject->text().toInt(),
                ui->IdSlot->text().toInt(),
                ui->materialCount->text().toInt(),
                ui->UsingDate->text()
            );
    changeMaterialCountInSlot(ui->IdSlot->text().toInt(),
                              -ui->materialCount->text().toInt());
}
