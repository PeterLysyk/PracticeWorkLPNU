#include "buildingcompanydatabasecontroler.h"
#include "databasefunctions.h"
#include "createtablesqueries.h"
#include <QSqlDatabase>
#include<QDebug>
#include <QWidget>
#include <QSql>
#include <QMessageBox>
#include <iostream>

BuildingCompanyDataBaseControler::BuildingCompanyDataBaseControler(const QString &path):
    mDBpath(path)
{
}

void BuildingCompanyDataBaseControler::openDataBase()
{
    qDebug()<<"open fucntion";

    /*this->setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    this->open();
    this->addDatabase("QSQLITE");*/

    if (!this->isOpen())
    {
        throw std::runtime_error("Could not open data base!");
    }
}

BuildingCompanyDataBaseControler::~BuildingCompanyDataBaseControler() = default;

QString BuildingCompanyDataBaseControler::getDBpath() const
{
    return mDBpath;
}

void BuildingCompanyDataBaseControler::setDBpath(const QString &path)
{
    mDBpath = path;
}

void BuildingCompanyDataBaseControler::createAllTablesInTheDataBase(QWidget *widget)
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

