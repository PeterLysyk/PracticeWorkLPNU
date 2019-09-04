#include "databasefunctions.h"
#include "createtablesqueries.h"
#include <QSqlDatabase>
#include<iostream>
#include <QMessageBox>
#include<QtSql>


void createTable(const QString &createTableQuery, const QString &tableName)
{
    QSqlQuery creatingQuery;
    if (!creatingQuery.exec(createTableQuery))
    {
        throw std::runtime_error((tableName).toStdString());
    }
}

void showCreationTableError(const QString &tableName, QWidget *widget)
{
    QMessageBox::warning(widget,
                         QString("Помилка створення"),
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


void createAllTablesInTheDataBase(QWidget *widget)
{
    createTableWithCheck(createSuplierTableQuery, "ПОСТАЧАЛЬНИК", widget);
    createTableWithCheck(createStorageTableQuery, "СКЛАД", widget);
    createTableWithCheck(createConstructionObjectTableQuery, "БУДІВЛЬНИЙ_ОБЄКТ", widget);
    createTableWithCheck(createMaterialTableQuery, "МАТЕРІАЛ", widget);
    createTableWithCheck(createDeliveryTableQuery, "ПОСТАВКА", widget);
    createTableWithCheck(createsSlotTableQuery, "СЛОТ", widget);
    createTableWithCheck(createUsingTableQuery, "ВИКОРИСТАННЯ", widget);
}

void createTableWithCheck(const QString &createTableQuery, const QString &tableName, QWidget *widget)
{
    try
    {
        createTable(createTableQuery, tableName);
    }
    catch(const std::runtime_error &re)
    {
        showCreationTableError(re.what(), widget);
        return;
    }
    showCreationTableSuccess(tableName, widget);
}