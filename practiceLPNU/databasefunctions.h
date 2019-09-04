#ifndef DATABASEFUNCTIONS_H
#define DATABASEFUNCTIONS_H

#include <QString>
#include <QWidget>

void showCreationTableError(const QString &tableName, QWidget *widget);
void showCreationTableError(const QString &tableName, QWidget *widget);

void createTable(const QString &createTableQuery, const QString &tableName);
void createAllTablesInTheDataBase( QWidget *widget);
void createTableWithCheck(const QString &createTableQuery, const QString &tableName, QWidget *widget);

void addRecordToSuplierTable(
         const int &idSuplier,
         const QString &name,
         const QString &contractSignatureDate,
         const int &rate);

void addRecordToStorageTable(
         const int &idStorage,
         const QString &cityAdress,
         const QString &streetAdress,
         const QString &buildingAdress,
         const double &square);

void addRecordToConstructionObjectTable(
         const int &idConstructionObject,
         const QString &cityAdress,
         const QString &streetAdress,
         const QString &buildingAdress,
         const int &priority,
         const QString &buildingStartDate);

void addRecordToMaterialTable(
         const int &idMaterial,
         const QString &name,
         const QString &madeDate,
         const QString &expirationDate,
         const double &weight,
         const int &count,
         const QString &quality,
         const QString &description);

void addRecordToDeliveryTable(
         const int &idDevilery,
         const int &idSuplier,
         const int &idMaterial,
         const QString &state);

void addRecordToSlotTable(
         const int &idSlot,
         const int &idStorage,
         const int &idMaterial,
         const int &materialCount);

void addRecordToUsingTable(
         const int &idUsing,
         const int &idConstructionObject,
         const int &idSlot,
         const QString &usingDate);

#endif // DATABASEFUNCTIONS_H
