#ifndef DATABASEFUNCTIONS_H
#define DATABASEFUNCTIONS_H

#include <QString>
#include <QWidget>
#include <QSqlQuery>
#include <QDebug>
#include <iostream>
#include <tuple>
#include <vector>
#include <utility>
#include <type_traits>
#include <stdexcept>

void showCreationTableError(const QString &tableName, QWidget *widget = nullptr);
void showCreationTableSuccess(const QString &tableName, QWidget *widget = nullptr);
void showAddingRecordError(const QString &tableName, QWidget *widget = nullptr);
void showAddingRecordSuccess(const QString &tableName, QWidget *widget = nullptr);

void createTable(const QString &createTableQuery, const QString &tableName);
void createAllTablesInTheDataBase();

void addRecordToSuplierTable(
         const int idSuplier,
         const QString name,
         const QString contractSignatureDate,
         const int rate);

void addRecordToStorageTable(
         const int idStorage,
         const QString cityAdress,
         const QString streetAdress,
         const QString buildingAdress,
         const double square);

void addRecordToConstructionObjectTable(
         const int idConstructionObject,
         const QString cityAdress,
         const QString streetAdress,
         const QString buildingAdress,
         const int priority,
         const QString buildingStartDate);

void addRecordToMaterialTable(
         const int idMaterial,
         const QString name,
         const QString madeDate,
         const QString expirationDate,
         const double weight,
         const int count,
         const QString quality,
         const QString description);

void addRecordToDeliveryTable(
         const int idDevilery,
         const int idSuplier,
         const int idMaterial,
         const QString state);

void addRecordToSlotTable(
         const int idSlot,
         const int idStorage,
         const int idMaterial,
         const int materialCount);

void addRecordToUsingTable(
         const int idUsing,
         const int idConstructionObject,
         const int idSlot,
         const QString usingDate);

template <typename... Ts>
class tuple : public std::tuple<Ts...> {
  public:
  using std::tuple<Ts...>::tuple;

  template <std::size_t N>
  decltype(auto) operator[](std::integral_constant<std::size_t, N>) {
    return std::get<N>(*this);
  }
};

template<typename ... Args>
void addRecordToTableQuery(const QString &addRecordQueryText,
                           const QString &tableName,
                           Args... args)
{
    QSqlQuery addRecordQuery;
    addRecordQuery.prepare(addRecordQueryText);

    std::tuple<Args...>argsTuple{args...};

    for (auto i = 0; i < std::tuple_size<decltype (argsTuple)>::value; ++i)
    {
        addRecordQuery.addBindValue(std::get<i>(argsTuple));
    }


    if (!addRecordQuery.exec())
    {
        showAddingRecordError(tableName);
        return;
    }
    showAddingRecordSuccess(tableName);
}

#endif // DATABASEFUNCTIONS_H
