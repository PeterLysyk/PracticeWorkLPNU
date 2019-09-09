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

}

GetRecordsTabWidget::~GetRecordsTabWidget()
{
    delete ui;
}

void GetRecordsTabWidget::on_selectRecordByIdButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery selectOneRecordByIdQuery;

    selectOneRecordByIdQuery.prepare(createSelectionForOneRecordQuery
                 (
                 ui->idInTheTableLineEdit->text(),
                 ui->TablesNamesListWidget->currentItem()->text()
                 ));
    if (!selectOneRecordByIdQuery.exec())
    {
        QMessageBox::information(nullptr,
                                 "Помилка",
                                 "Не вдалось знайти запис."
                                 "Перевірте правильність введення!");
    }

    model->setQuery(selectOneRecordByIdQuery);
    ui->selectedRecordsTableView->setModel(model);
    ui->selectedRecordsTableView->resizeRowsToContents();
    ui->selectedRecordsTableView->resizeColumnsToContents();
}

void GetRecordsTabWidget::on_DeleteRecordByIdButton_clicked()
{
    QSqlQuery deleteRecordQuery;
    deleteRecordQuery.prepare(createDeleteRecordQuery
                              (
                              ui->idInTheTableLineEdit->text(),
                              ui->TablesNamesListWidget->currentItem()->text()
                              ));
    if (!deleteRecordQuery.exec())
    {
        QMessageBox::information(nullptr,
                                 "Помилка",
                                 "Не вдалось видалити запис.");
    }
    else
    {
        QMessageBox::information(nullptr,
                                 "Видалення",
                                 "Запис успішно видалено!");
    }
}

void GetRecordsTabWidget::on_selectAllRecords_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery selectAllRecordsQuery;
    selectAllRecordsQuery.prepare(createSelectionForAllRecordsQuery
                    (
                    ui->TablesNamesListWidget->currentItem()->text())
                    );
    if (!selectAllRecordsQuery.exec())
    {
        QMessageBox::information(nullptr,
                                 "Помилка",
                                 "Записів не існує."
                                 "Перевірте правильність введення!");
    }
    model->setQuery(selectAllRecordsQuery);
    ui->selectedRecordsTableView->setModel(model);
    ui->selectedRecordsTableView->resizeRowsToContents();
    ui->selectedRecordsTableView->resizeColumnsToContents();
}

QString GetRecordsTabWidget::createSelectionForAllRecordsQuery(const QString &tableName) const
{
    return "SELECT * FROM " +  tableName + ";";
}

QString GetRecordsTabWidget::createDeleteRecordQuery(const QString &id,
                                                     const QString &tableName) const
{
    return "DELETE FROM " +  tableName + " WHERE ID = " + id + ";";
}

QString GetRecordsTabWidget::createSelectionForOneRecordQuery(const QString &id,
                                                              const QString &tableName) const
{
    return "SELECT * FROM " +  tableName + " WHERE ID = " + id + ";";
}
