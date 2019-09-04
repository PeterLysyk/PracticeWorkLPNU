#include "databasefunctions.h"
#include "tablescreatequeries.h"
#include "tableselectqueries.h"
#include "tablerecordaddqueries.h"
#include <QSqlDatabase>
#include<iostream>
#include <QMessageBox>
#include<QtSql>

void createTable(const QString &createTableQuery, const QString &tableName)
{
    QSqlQuery creatingQuery;
    if (!creatingQuery.exec(createTableQuery))
    {
        showCreationTableError(tableName);
        return;
    }
    showCreationTableSuccess(tableName);
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

void createAllTablesInTheDataBase()
{
    createTable(createSuplierTableQuery, "ПОСТАЧАЛЬНИК");
    createTable(createStorageTableQuery, "СКЛАД");
    createTable(createConstructionObjectTableQuery, "БУДІВЛЬНИЙ_ОБЄКТ");
    createTable(createMaterialTableQuery, "МАТЕРІАЛ");
    createTable(createDeliveryTableQuery, "ПОСТАВКА");
    createTable(createsSlotTableQuery, "СЛОТ");
    createTable(createUsingTableQuery, "ПОСТАЧАЛЬНИК");
}

void addRecordToSuplierTable(const int idSuplier,
                             const QString &name,
                             const QString &contractSignatureDate,
                             const int rate)
{
    QSqlQuery addSuplierRecordQuery;

    addSuplierRecordQuery.prepare(addRecordToSuplierTableQuery);

    addSuplierRecordQuery.addBindValue(idSuplier);
    addSuplierRecordQuery.addBindValue(name);
    addSuplierRecordQuery.addBindValue
            (QDateTime::fromString(contractSignatureDate,"dd-mm-yyyy"));
    addSuplierRecordQuery.addBindValue(rate);

    if (!addSuplierRecordQuery.exec())
    {
        showAddingRecordError("ПОСТАЧАЛЬНИК");
        return;
    }
    showAddingRecordSuccess("ПОСТАЧАЛЬНИК");
}

void addRecordToStorageTable(
         const int idStorage,
         const QString &cityAdress,
         const QString &streetAdress,
         const QString &buildingAdress,
         const double square)
{
    QSqlQuery addStorageRecordQuery;

    addStorageRecordQuery.prepare(addRecordToStorageTableQuery);

    addStorageRecordQuery.addBindValue(idStorage);
    addStorageRecordQuery.addBindValue(cityAdress);
    addStorageRecordQuery.addBindValue(streetAdress);
    addStorageRecordQuery.addBindValue(buildingAdress);
    addStorageRecordQuery.addBindValue(square);

    if (!addStorageRecordQuery.exec())
    {
        showAddingRecordError("СКЛАД");
        return;
    }
    showAddingRecordSuccess("СКЛАД");
}

void addRecordToConstructionObjectTable(
         const int idConstructionObject,
         const QString &cityAdress,
         const QString &streetAdress,
         const QString &buildingAdress,
         const int priority,
         const QString &buildingStartDate)
{
    QSqlQuery addConstructionOnjectRecordQuery;

    addConstructionOnjectRecordQuery.prepare(addRecordToConstructionObjectTableQuery);

    addConstructionOnjectRecordQuery.addBindValue(idConstructionObject);
    addConstructionOnjectRecordQuery.addBindValue(cityAdress);
    addConstructionOnjectRecordQuery.addBindValue(streetAdress);
    addConstructionOnjectRecordQuery.addBindValue(buildingAdress);
    addConstructionOnjectRecordQuery.addBindValue(priority);
    addConstructionOnjectRecordQuery.addBindValue(QDateTime::fromString(buildingStartDate,"dd-mm-yyyy"));

    if (!addConstructionOnjectRecordQuery.exec())
    {
        showAddingRecordError("БУДІВЕЛЬНИЙ_ОБЄКТ");
        return;
    }
    showAddingRecordSuccess("БУДІВЕЛЬНИЙ_ОБЄКТ");
}

void addRecordToMaterialTable(
         const int idMaterial,
         const QString &name,
         const QString &madeDate,
         const QString &expirationDate,
         const double weight,
         const int count,
         const QString &quality,
         const QString &description)
{

    QSqlQuery addMaterialRecordQuery;

    addMaterialRecordQuery.prepare(addRecordToMaterialTableQuery);

    addMaterialRecordQuery.addBindValue(idMaterial);
    addMaterialRecordQuery.addBindValue(name);
    addMaterialRecordQuery.addBindValue(QDateTime::fromString(madeDate,"dd-mm-yyyy"));
    addMaterialRecordQuery.addBindValue(QDateTime::fromString(expirationDate,"dd-mm-yyyy"));
    addMaterialRecordQuery.addBindValue(weight);
    addMaterialRecordQuery.addBindValue(count);
    addMaterialRecordQuery.addBindValue(quality);
    addMaterialRecordQuery.addBindValue(description);

    if (!addMaterialRecordQuery.exec())
    {
        showAddingRecordError("МАТЕРІАЛ");
        return;
    }
    showAddingRecordSuccess("МАТЕРІАЛ");
}

void addRecordToDeliveryTable(
        const int idDevilery,
        const int idSuplier,
        const int idMaterial,
        const QString &state)
{
    QSqlQuery addDeliveryRecordQuery;

    addDeliveryRecordQuery.prepare(addRecordToDeliveryTableQuery);

    addDeliveryRecordQuery.addBindValue(idDevilery);
    addDeliveryRecordQuery.addBindValue(idSuplier);
    addDeliveryRecordQuery.addBindValue(idMaterial);
    addDeliveryRecordQuery.addBindValue(state);

    if (!addDeliveryRecordQuery.exec())
    {
        showAddingRecordError("ПОСТАВКА");
        return;
    }
    showAddingRecordSuccess("ПОСТАВКА");
}

void addRecordToSlotTable(
         const int idSlot,
         const int idStorage,
         const int idMaterial,
         const int materialCount)
{
    QSqlQuery addSlotRecordQuery;

    addSlotRecordQuery.prepare(addRecordToSlotTableQuery);

    addSlotRecordQuery.addBindValue(idSlot);
    addSlotRecordQuery.addBindValue(idStorage);
    addSlotRecordQuery.addBindValue(idMaterial);
    addSlotRecordQuery.addBindValue(materialCount);

    if (!addSlotRecordQuery.exec())
    {
        showAddingRecordError("СЛОТ");
        return;
    }
    showAddingRecordSuccess("СЛОТ");
}

void addRecordToUsingTable(
        const int idUsing,
        const int idConstructionObject,
        const int idSlot,
        const QString &usingDate)
{
    QSqlQuery addUsingRecordTable;

    addUsingRecordTable.prepare(addRecordToUsingTableQuery);

    addUsingRecordTable.addBindValue(idUsing);
    addUsingRecordTable.addBindValue(idConstructionObject);
    addUsingRecordTable.addBindValue(idSlot);
    addUsingRecordTable.addBindValue(QDateTime::fromString(usingDate,"dd-mm-yyyy"));

    if (!addUsingRecordTable.exec())
    {
        showAddingRecordError("ВИКОРИСТАННЯ");
        return;
    }
    showAddingRecordSuccess("ВИКОРИСТАННЯ");
}
