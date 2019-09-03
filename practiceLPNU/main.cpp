#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include <QString>

void addValues(int id, QString firstName, QString lastName, QString birthDate, double weight);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.getDataBase() = QSqlDatabase::addDatabase("QSQLITE");
    w.getDataBase().setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    w.getDataBase().open();

    if (!w.getDataBase().isOpen())
    {
        qDebug()<<"Problem with opening DB";
    }
/*//////////////////////////////////////////////////////////////////////////
    auto createGoodsTableQuery =
            "CREATE TABLE ТОВАР"
            "("
            "ID_ТОВАРУ INTEGER NOT NULL,"
            "НАЗВА VARCHAR(30) NOT NULL,"
            "ДАТА_ВИГОТОВЛЕННЯ DATE,"
            "ТЕРМІН_ПРИДАТНОСТІ DATE,"
            "ВАГА DOUBLE,"
            "ЯКІСТЬ VARCHAR(30),"
            "ОПИС VARCHAR(100),"
            "PRIMARY KEY (ID_ТОВАРУ)"
            ");";

    QSqlQuery goodsQuery;

    if (!goodsQuery.exec(createGoodsTableQuery))
    {
        qDebug()<<"error creating goods table";
    }
////////////////////////////////////////////////////////////////////////////
    auto createStorageTableQuery =
            "CREATE TABLE СКЛАД"
            "("
            "ID_СКЛАДУ INTEGER NOT NULL,"
            "АДРЕСА_МІСТО  VARCHAR(20),"
            "АДРЕСА_ВУЛИЦЯ VARCHAR(20),"
            "АДРЕСА_НОМЕР  VARCHAR(5),"
            "КІЛЬКІСТЬ_КОМІРОК INT,"
            "ПЛОЩА DOUBLE,"
            "PRIMARY KEY (ID_СКЛАДУ)"
            ");";

    QSqlQuery storageQuery;

    if (!storageQuery.exec(createStorageTableQuery))
    {
        qDebug()<<"error creating storage table";
    }
/////////////////////////////////////////////////////////////////////////////
    auto createSuplierTableQuery =
            "CREATE TABLE ПОСТАЧАЛЬНИК"
            "("
            "ID_ПОСТАЧАЛЬНИКА INTEGER NOT NULL,"
            "НАЗВА VARCHAR(30) NOT NULL,"
            "ДАТА_УКЛАДЕННЯ_ДОГОВОРУ DATE"
            "РЕЙТИНГ INTEGER,"
            "PRIMARY KEY (ID_ПОСТАЧАЛЬНИКА)"
            ");";

    QSqlQuery suplierQuery;

    if (!suplierQuery.exec(createSuplierTableQuery))
    {
        qDebug()<<"error creating suplier table";
    }
//////////////////////////////////////////////////////////////////////////////
    auto createCellTableQuery =
            "CREATE TABLE КОМІРКА"
            "("
            "ID_КОМІРКИ INTEGER NOT NULL,"
            "ID_СКЛАДУ INTEGER NOT NULL,"
            "ID_ТОВАРУ INTEGER NOT NULL,"
            "КІЛЬКІСТЬ_ТОВАРУ INTEGER DEFAULT 0,"
            "PRIMARY KEY (ID_КОМІРКИ),"
            "FOREIGN KEY (ID_СКЛАДУ) REFERENCES СКЛАД(ID_СКЛАДУ) ON UPDATE CASCADE,"
            "FOREIGN KEY (ID_ТОВАРУ) REFERENCES ТОВАР(ID_ТОВАРУ) ON UPDATE CASCADE"
            ");";

    QSqlQuery cellQuery;

    if (!cellQuery.exec(createCellTableQuery))
    {
        qDebug()<<"error creating cell table";
    }
///////////////////////////////////////////////////////////////////////////////
    auto createDeliveryTableQuery =
            "CREATE TABLE ПОСТАВКА"
            "("
            "ID_ПОСТАВКИ INTEGER NOT NULL,"
            "ID_ПОСТАЧАЛЬНИКА INTEGER NOT NULL,"
            "ID_КОМІРКИ INTEGER NOT NULL,"
            "КІЛЬКІСТЬ_ТОВАРУ INTEGER NOT NULL,"
            "СТАН VARCHAR(20),"
            "PRIMARY KEY (ID_ПОСТАВКИ),"
            "FOREIGN KEY (ID_ПОСТАЧАЛЬНИКА) REFERENCES ПОСТАЧАЛЬНИК(ID_ПОСТАЧАЛЬНИКА) ON UPDATE CASCADE,"
            "FOREIGN KEY (ID_КОМІРКИ) REFERENCES КОМІРКА(ID_КОМІРКИ) ON UPDATE CASCADE"
            ");";

    QSqlQuery deliveryQuery;

    if (!deliveryQuery.exec(createDeliveryTableQuery))
    {
        qDebug()<<"error creating devilery table";
    }
//////////////////////////////////////////////////////////////////////////////
    auto createConstructionObjectTableQuery =
            "CREATE TABLE БУДІВЛЬНИЙ_ОБЄКТ"
            "("
            "ID_ОБЄКТУ INTEGER NOT NULL,"
            "АДРЕСА_МІСТО  VARCHAR(20),"
            "АДРЕСА_ВУЛИЦЯ VARCHAR(20),"
            "АДРЕСА_НОМЕР  VARCHAR(5),"
            "ПРІОРИТЕТНІСТЬ INTEGER,"
            "ДАТА_ПОЧАТКУ_БУДІВНИЦТВА DATE,"
            "PRIMARY KEY (ID_ОБЄКТУ)"
            ");";

    QSqlQuery constructionObjectQuery;

    if (!constructionObjectQuery.exec(createConstructionObjectTableQuery))
    {
        qDebug()<<"error creating constionObject table";
    }
///////////////////////////////////////////////////////////////////////////////
    auto createUsingTableQuery =
            "CREATE TABLE ВИКОРИСТАННЯ"
            "("
            "ID_ТОВАР_ОБЄКТ INTEGER NOT NULL,"
            "ID_ОБЄКТУ INTEGER NOT NULL,"
            "ID_КОМІРКИ INTEGER NOT NULL,"
            "КІЛЬКІСТЬ_ТОВАРУ INTEGER NOT NULL,"
            "PRIMARY KEY (ID_ВИКОРИСТАННЯ),"
            "FOREIGN KEY (ID_ОБЄКТУ) REFERENCES БУДІВЛЬНИЙ_ОБЄКТ(ID_ОБЄКТУ) ON UPDATE CASCADE,"
            "FOREIGN KEY (ID_КОМІРКИ) REFERENCES КОМІРКА(ID_КОМІРКИ) ON UPDATE CASCADE"
            ");";

    QSqlQuery usingQuery;

    if (!usingQuery.exec(createUsingTableQuery))
    {
        qDebug()<<"error creating constionObject table";
    }
//////////////////////////////////////////////////////////////////////////////*/
    auto createSuplierTableQuery =
            "CREATE TABLE ПОСТАЧАЛЬНИК"
            "("
            "ID_ПОСТАЧАЛЬНИКА INTEGER NOT NULL,"
            "НАЗВА VARCHAR(30) NOT NULL,"
            "ДАТА_УКЛАДЕННЯ_ДОГОВОРУ DATE"
            "РЕЙТИНГ INTEGER,"
            "PRIMARY KEY (ID_ПОСТАЧАЛЬНИКА)"
            ");";

    QSqlQuery suplierQuery;

    if (!suplierQuery.exec(createSuplierTableQuery))
    {
        qDebug()<<"error creating suplier table";
    }
///////////////////////////////////////////////////////////////////////////////
    auto createStorageTableQuery =
            "CREATE TABLE СКЛАД"
            "("
            "ID_СКЛАДУ INTEGER NOT NULL,"
            "АДРЕСА_МІСТО  VARCHAR(20),"
            "АДРЕСА_ВУЛИЦЯ VARCHAR(20),"
            "АДРЕСА_НОМЕР  VARCHAR(5),"
            "ПЛОЩА DOUBLE,"
            "PRIMARY KEY (ID_СКЛАДУ)"
            ");";

    QSqlQuery storageQuery;

    if (!storageQuery.exec(createStorageTableQuery))
    {
        qDebug()<<"error creating storage table";
    }
////////////////////////////////////////////////////////////////////////////////
    auto createConstructionObjectTableQuery =
            "CREATE TABLE БУДІВЛЬНИЙ_ОБЄКТ"
            "("
            "ID_ОБЄКТУ INTEGER NOT NULL,"
            "АДРЕСА_МІСТО  VARCHAR(20),"
            "АДРЕСА_ВУЛИЦЯ VARCHAR(20),"
            "АДРЕСА_НОМЕР  VARCHAR(5),"
            "ПРІОРИТЕТНІСТЬ INTEGER,"
            "ДАТА_ПОЧАТКУ_БУДІВНИЦТВА DATE,"
            "PRIMARY KEY (ID_ОБЄКТУ)"
            ");";

    QSqlQuery constructionObjectQuery;

    if (!constructionObjectQuery.exec(createConstructionObjectTableQuery))
    {
        qDebug()<<"error creating constionObject table";
    }
////////////////////////////////////////////////////////////////////////////////
    auto createGoodsTableQuery =
            "CREATE TABLE ТОВАР"
            "("
            "ID_ТОВАРУ INTEGER NOT NULL,"
            "НАЗВА VARCHAR(30) NOT NULL,"
            "ДАТА_ВИГОТОВЛЕННЯ DATE,"
            "ТЕРМІН_ПРИДАТНОСТІ DATE,"
            "ВАГА DOUBLE,"
            "ЯКІСТЬ VARCHAR(30),"
            "ОПИС VARCHAR(100),"
            "PRIMARY KEY (ID_ТОВАРУ)"
            ");";

    QSqlQuery goodsQuery;

    if (!goodsQuery.exec(createGoodsTableQuery))
    {
        qDebug()<<"error creating goods table";
    }
/////////////////////////////////////////////////////////////////////////////////
    auto createUsingTableQuery =
            "CREATE TABLE ВИКОРИСТАННЯ"
            "("
            "ID_ТОВАР_ОБЄКТ INTEGER NOT NULL,"
            "ID_ОБЄКТУ INTEGER NOT NULL,"
            "ID_КОМІРКИ INTEGER NOT NULL,"
            "КІЛЬКІСТЬ_ТОВАРУ INTEGER NOT NULL,"
            "PRIMARY KEY (ID_ВИКОРИСТАННЯ),"
            "FOREIGN KEY (ID_ОБЄКТУ) REFERENCES БУДІВЛЬНИЙ_ОБЄКТ(ID_ОБЄКТУ) ON UPDATE CASCADE,"
            "FOREIGN KEY (ID_КОМІРКИ) REFERENCES КОМІРКА(ID_КОМІРКИ) ON UPDATE CASCADE"
            ");";

    QSqlQuery usingQuery;

    if (!usingQuery.exec(createUsingTableQuery))
    {
        qDebug()<<"error creating constionObject table";
    }
/////////////////////////////////////////////////////////////////////////////////
    auto createDeliveryTableQuery =
            "CREATE TABLE ПОСТАВКА"
            "("
            "ID_ПОСТАВКИ INTEGER NOT NULL,"
            "ID_ПОСТАЧАЛЬНИКА INTEGER NOT NULL,"
            "ID_КОМІРКИ INTEGER NOT NULL,"
            "КІЛЬКІСТЬ_ТОВАРУ INTEGER NOT NULL,"
            "СТАН VARCHAR(20),"
            "PRIMARY KEY (ID_ПОСТАВКИ),"
            "FOREIGN KEY (ID_ПОСТАЧАЛЬНИКА) REFERENCES ПОСТАЧАЛЬНИК(ID_ПОСТАЧАЛЬНИКА) ON UPDATE CASCADE,"
            "FOREIGN KEY (ID_КОМІРКИ) REFERENCES КОМІРКА(ID_КОМІРКИ) ON UPDATE CASCADE"
            ");";

    QSqlQuery deliveryQuery;

    if (!deliveryQuery.exec(createDeliveryTableQuery))
    {
        qDebug()<<"error creating devilery table";
    }
/////////////////////////////////////////////////////////////////////////////////
    auto createCellTableQuery =
            "CREATE TABLE КОМІРКА"
            "("
            "ID_КОМІРКИ INTEGER NOT NULL,"
            "ID_СКЛАДУ INTEGER NOT NULL,"
            "ID_ТОВАРУ INTEGER NOT NULL,"
            "КІЛЬКІСТЬ_ТОВАРУ INTEGER DEFAULT 0,"
            "PRIMARY KEY (ID_КОМІРКИ),"
            "FOREIGN KEY (ID_СКЛАДУ) REFERENCES СКЛАД(ID_СКЛАДУ) ON UPDATE CASCADE,"
            "FOREIGN KEY (ID_ТОВАРУ) REFERENCES ТОВАР(ID_ТОВАРУ) ON UPDATE CASCADE"
            ");";

    QSqlQuery cellQuery;

    if (!cellQuery.exec(createCellTableQuery))
    {
        qDebug()<<"error creating cell table";
    }
//////////////////////////////////////////////////////////////////////////////////


    w.getDataBase().close();
    w.show();

    return a.exec();
}

void addValues(int id, QString firstName, QString lastName, QString birthDate, double weight)
{
    QSqlQuery qry;

    qry.prepare("INSERT INTO TESTBASE "
                "("
                "ID,"
                "FIRSTNAME,"
                "LASTNAME,"
                "BIRTHDATE,"
                "WEIGHT)"
                "VALUES (?,?,?,?,?"
                ");");

    qry.addBindValue(id);
    qry.addBindValue(firstName);
    qry.addBindValue(lastName);
    qry.addBindValue(QDateTime::fromString(birthDate, "mm-dd-yyyy"));
    qry.addBindValue(weight);

    if (!qry.exec())
    {
        qDebug()<<"error creating values to db";
    }
}
