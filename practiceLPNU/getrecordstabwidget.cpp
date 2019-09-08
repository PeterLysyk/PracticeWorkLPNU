#include "ui_getrecordstabwidget.h"
#include "getrecordstabwidget.h"
#include "databasetablesnames.h"
#include "databasefunctions.h"
#include <QSqlQueryModel>
#include <QHeaderView>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

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

    QHeaderView *verticalHeader = ui->selectedRecordsTableView->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
   // verticalHeader->setStretchLastSection(true);
    verticalHeader->setDefaultSectionSize(25);
    //ui->selectedRecordsTableView->horizontalHeader()->setStretchLastSection(true);
}

GetRecordsTabWidget::~GetRecordsTabWidget()
{
    delete ui;
}

void GetRecordsTabWidget::on_selectRecordByIdButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery selectOneRecordByIdQuery;

    selectOneRecordByIdQuery.prepare
            (createSelectionQueryForOneRecord(
                 ui->idInTheTableLineEdit->text(),
                 ui->TablesNamesListWidget->currentItem()->text()));
    if (!selectOneRecordByIdQuery.exec())
    {
        QMessageBox::information(nullptr,
                                 "Помилка",
                                 "Не вдалось знайти запис."
                                 "Перевірте правильність введення!");
    }

    model->setQuery(selectOneRecordByIdQuery);
    ui->selectedRecordsTableView->setModel(model);
}

void GetRecordsTabWidget::on_DeleteRecordByIdButton_clicked()
{

}

void GetRecordsTabWidget::on_selectAllRecords_clicked()
{
    QSqlQuery selectAllRecordsQuery;

}

QString GetRecordsTabWidget::createSelectionQueryForOneRecord(const QString id,
                                                              const QString tableName)
{
    return "SELECT * FROM " +  tableName + " WHERE ID = " + id + ";";
}
