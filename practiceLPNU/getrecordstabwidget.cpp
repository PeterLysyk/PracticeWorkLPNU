#include "getrecordstabwidget.h"
#include "ui_getrecordstabwidget.h"
#include "databasetablesnames.h"
#include <QSqlQuery>

GetRecordsTabWidget::GetRecordsTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetRecordsTabWidget)
{
    ui->setupUi(this);
    ui->TablesNamesListWidget->addItem(buildingObjectTableName);
    ui->TablesNamesListWidget->addItem(usingTableName);
    ui->TablesNamesListWidget->addItem(materailTableName);
    ui->TablesNamesListWidget->addItem(deliveryTableName);
    ui->TablesNamesListWidget->addItem(suplierTableName);
    ui->TablesNamesListWidget->addItem(storageTableName);
    ui->TablesNamesListWidget->addItem(slotTableName);
}

GetRecordsTabWidget::~GetRecordsTabWidget()
{
    delete ui;
}

void GetRecordsTabWidget::on_selectRecordByIdButton_clicked()
{

}

void GetRecordsTabWidget::on_DeleteRecordByIdButton_clicked()
{

}

void GetRecordsTabWidget::on_selectAllRecords_clicked()
{
    QSqlQuery selectAllRecords;
}

QString GetRecordsTabWidget::createSelectionQueryForOneRecord(const int id, const QString &tableName)
{
    return "SELECT * FROM " +  tableName + " WHERE ";
}
