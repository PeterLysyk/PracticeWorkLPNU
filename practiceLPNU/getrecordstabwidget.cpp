#include "getrecordstabwidget.h"
#include "ui_getrecordstabwidget.h"
#include "databasetablesnames.h"

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
