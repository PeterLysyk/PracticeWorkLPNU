#include "databasefunctions.h"
#include "tablescreatequeries.h"
#include "tablerecordaddqueries.h"
#include "databasetablesnames.h"
#include <QSqlDatabase>
#include<iostream>
#include <QString>
#include <QMessageBox>
#include<QtSql>

void createTable(const QString &createTableQuery, const QString &tableName)
{
    qDebug()<<"QUERY = "<<createTableQuery;
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
    createTable(createSuplierTableQuery, suplierTableName);
    createTable(createStorageTableQuery, storageTableName);
    createTable(createConstructionObjectTableQuery, buildingObjectTableName);
    createTable(createMaterialTableQuery, materailTableName);
    createTable(createDeliveryTableQuery, deliveryTableName);
    createTable(createsSlotTableQuery, slotTableName);
    createTable(createUsingTableQuery, suplierTableName);
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
            (QDateTime::fromString(contractSignatureDate,"dd.mm.yyyy"));
    addSuplierRecordQuery.addBindValue(rate);

    if (!addSuplierRecordQuery.exec())
    {
        showAddingRecordError(suplierTableName);
        return;
    }
    showAddingRecordSuccess(suplierTableName);
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
        showAddingRecordError(storageTableName);
        return;
    }
    showAddingRecordSuccess(storageTableName);
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
    addConstructionOnjectRecordQuery.addBindValue(QDateTime::fromString(buildingStartDate,"dd.mm.yyyy"));

    if (!addConstructionOnjectRecordQuery.exec())
    {
        showAddingRecordError(buildingObjectTableName);
        return;
    }
    showAddingRecordSuccess(buildingObjectTableName);
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
        showAddingRecordError(materailTableName);
        return;
    }
    showAddingRecordSuccess(materailTableName);
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
        showAddingRecordError(deliveryTableName);
        return;
    }
    showAddingRecordSuccess(deliveryTableName);
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
        showAddingRecordError(slotTableName);
        return;
    }
    showAddingRecordSuccess(slotTableName);
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
    addUsingRecordTable.addBindValue(QDateTime::fromString(usingDate,"dd.mm.yyyy"));

    if (!addUsingRecordTable.exec())
    {
        showAddingRecordError(usingTableName);
        return;
    }
    showAddingRecordSuccess(usingTableName);
}

void changeMaterialCountInSlot(const int slotId, const int materialCountDiff)
{
    auto currentMaterialCount =
            getCurrentMaterialCountInSlot(slotId);

    if (currentMaterialCount + materialCountDiff < 0)
    {
        QMessageBox::warning(nullptr,
                             "Помилка!",
                             "На слоті нема стільки продукції!");
    }

    QSqlQuery changeMaterialInSlotQuery;
    changeMaterialInSlotQuery.prepare("UPDATE СЛОТ"
        "SET КІЛЬКІСТЬ_МАТЕРІАЛУ = " +
        QString::number(currentMaterialCount + materialCountDiff) +
        "WHERE ID = " + QString::number(slotId) + ";");

    if (changeMaterialInSlotQuery.exec())
    {
        QMessageBox::information(nullptr,
                                 "Успішна зміна",
                                 "Кількість продукції у слоті успішно змінено");
    }
    else
    {
        QMessageBox::information(nullptr,
                                 "Помилка зміни",
                                 "Не вдалось змінити кількість продукції у слоті");
    }
}

int getCurrentMaterialCountInSlot(const int slotId)
{
    QSqlQuery getCurrentMaterialQuery;
    getCurrentMaterialQuery.prepare("SELECT КІЛЬКІСТЬ_МАТЕРІАЛУ"
       "FROM СЛОТ WHERE ID =" + QString::number(slotId) + ";");
    return getCurrentMaterialQuery.exec() ? getCurrentMaterialQuery.value(0).toInt() : 0;
}
