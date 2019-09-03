#include "databasefunctions.h"
#include "createtablesqueries.h"
#include <QSqlDatabase>
#include<iostream>
#include <QMessageBox>
#include<QtSql>

void createTable(const QString &createTableQuery)
{
    QSqlQuery creatingQuery;
    if (!creatingQuery.exec(createTableQuery))
    {
        throw std::runtime_error("Could not create table!");
    }
}

void showCreationTableError(const QString &tableName, QWidget *widget)
{
    QMessageBox::warning(widget,
                         QString("Помилка створення!"),
                         QString("Таблиця " + tableName + " вже існує!")
                         );
}

void showCreationTableSuccess(const QString &tableName, QWidget *widget)
{
    QMessageBox::information(widget,
                             QString("Успішно створено!"),
                             QString("Таблиця " + tableName + " успішно створена!")
                             );
}

void createTableWithCheck(const QString &createTableQuery, const QString &tableName, QWidget *widget)
{
    try
    {
        createTable(createTableQuery);
    }
    catch (std::runtime_error)
    {
        showCreationTableError(tableName, widget);
        return;
    }
    showCreationTableSuccess(tableName, widget);
}

void createAllTablesInTheDataBase(QWidget *widget)
{
    qDebug()<<"Creation with check start";
    createTableWithCheck(createSuplierTableQuery, "ПОСТАЧАЛЬНИК", widget);
    createTableWithCheck(createStorageTableQuery, "СКЛАД", widget);
    createTableWithCheck(createConstructionObjectTableQuery, "БУДІВЛЬНИЙ_ОБЄКТ", widget);
    createTableWithCheck(createMaterialTableQuery, "МАТЕРІАЛ", widget);
    createTableWithCheck(createDeliveryTableQuery, "ПОСТАВКА", widget);
    createTableWithCheck(createsSlotTableQuery, "СЛОТ", widget);
    createTableWithCheck(createUsingTableQuery, "ВИКОРИСТАННЯ", widget);
}
