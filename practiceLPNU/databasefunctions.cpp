#include "databasefunctions.h"
#include "tablescreatequeries.h"
#include "tableselectqueries.h"
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
    QMessageBox::warning(
                widget,
                QString("Помилка створення"),
                QString("Таблиця " + tableName + " вже існує!"));
}

void showCreationTableSuccess(const QString &tableName, QWidget *widget)
{
    QMessageBox::information(
                widget,
                QString("Успішно створено!"),
                QString("Таблиця " + tableName + " успішно створена!"));
}

void showAddingRecordError(const QString &tableName, QWidget *widget)
{
    QMessageBox::warning(
                widget,
                QString("Помилка додавання"),
                QString("Не вдалося додати запис до таблиці" + tableName));
}

void showAddingRecordSuccess(const QString &tableName, QWidget *widget)
{
    QMessageBox::information(
                widget,
                QString("Успішно додано!"),
                QString("Запис був успішно доданий до таблиці " + tableName));
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

void addRecordToSuplierTable(const int &idSuplier,
                             const QString &name,
                             const QString &contractSignatureDate,
                             const int &rate)
{
    QSqlQuery addRecordToSuplierTableQuery;
    addRecordToSuplierTableQuery.prepare(createSuplierTableQuery);

    addRecordToSuplierTableQuery.addBindValue(idSuplier);
    addRecordToSuplierTableQuery.addBindValue(name);
    addRecordToSuplierTableQuery.addBindValue
            (QDateTime::fromString(contractSignatureDate, "yyyy-mm-dd"));
    addRecordToSuplierTableQuery.addBindValue(rate);

    if (!addRecordToSuplierTableQuery.exec())
    {
        showAddingRecordError("ПОСТАЧАЛЬНИК", nullptr);
        return;
    }
    showAddingRecordSuccess("ПОСТАЧАЛЬНИК", nullptr);
}

void addRecordToStorageTable(
         const int &idStorage,
         const QString &cityAdress,
         const QString &streetAdress,
         const QString &buildingAdress,
         const double &square)
{

}

void addRecordToConstructionObjectTable(
         const int &idConstructionObject,
         const QString &cityAdress,
         const QString &streetAdress,
         const QString &buildingAdress,
         const int &priority,
         const QString &buildingStartDate)
{

}

void addRecordToMaterialTable(
         const int &idMaterial,
         const QString &name,
         const QString &madeDate,
         const QString &expirationDate,
         const double &weight,
         const int &count,
         const QString &quality,
         const QString &description)
{

}

void addRecordToDeliveryTable(
        const int &idDevilery,
        const int &idSuplier,
        const int &idMaterial,
        const QString &state)
{

}

void addRecordToSlotTable(
         const int &idSlot,
         const int &idStorage,
         const int &idMaterial,
         const int &materialCount)
{

}

void addRecordToUsingTable(
        const int &idUsing,
        const int &idConstructionObject,
        const int &idSlot,
        const QString &usingDate)
{

}
