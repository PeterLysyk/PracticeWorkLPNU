#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include <QString>

void addValues(int id, QString firstName, QString lastName, QString birthDate, double weight);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.dB() = QSqlDatabase::addDatabase("QSQLITE");
    w.dB().setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    w.dB().open();

    if (!w.dB().isOpen())
    {
        qDebug()<<"Problem with opening DB";
    }

    auto createGoodsTable =
            "CREATE TABLE ТОВАР"
            "("
            "ID_ТОВАРУ INTEGER NOT NULL,"
            "НАЗВА VARCHAR(30) NOT NULL,"
            "ДАТА_ВИГОТОВЛЕННЯ DATETIME,"
            "ТЕРМІН_ПРИДАТНОСТІ DATE,"
            "ВАГА DOUBLE,"
            "ЯКІСТЬ VARCHAR(30),"
            "ОПИС VARCHAR(100)"
            "PRIMARY KEY (ID_ТОВАРУ)"
            ");";

    auto createStorageTable =
            "("
            "ID_СКЛАДУ INTEGER NOT NULL,"
            "АДРЕСА_МІСТО  VARCHAR(20) NOT NULL,"
            "АДРЕСА_ВУЛИЦЯ VARCHAR(20) NOT NULL,"
            "АДРЕСА_НОМЕР  VARCHAR(5)  NOT NULL,"
            "КІЛЬКІСТЬ_КОМІРОК INT,"
            "ПЛОЩА DOUBLE,"
            "PRIMARY KEY (ID_СКЛАДУ)"
            ")"
            ;

    auto createSuplierTable =
            "("
            "ID_ПОСТАЧАЛЬНИКА INTEGER NOT NULL,"
            "НАЗВА VARCHAR(30) NUT NULL,"
            "ДАТА_УКЛАДЕННЯ_ДОГОВОРУ DATE"
            "РЕЙТИНГ INTEGER,"
            "PRIMARY KEY (ID_ПОСТАЧАЛЬНИКА)"
            ")";

    auto createDeliveryTable =
            "("
            "ID_ДОСТАВКИ INTEGER NOT NULL PRIMERY KEY,"
            "ID_СКЛАДУ "

    QSqlQuery createDBQuery;
    if (!createDBQuery.exec(createSuplierTable))
    {
        qDebug()<<"error when creating table";
    }
    addValues(1,"bob", "fredricksen", "01-01-1984", 99);
    addValues(2,"fred", "bobricksen", "02-02-1985", 76);
    w.dB().close();
    w.show();

    return a.exec();
}

void addValues(int id, QString firstName, QString lastName, QString birthDate, double weight)
{
    QSqlQuery qry;

    qry.prepare("INSERT INTO TESTBASE ("
                "ID,"
                "FIRSTNAME,"
                "LASTNAME,"
                "BIRTHDATE,"
                "WEIGHT)"
                "VALUES (?,?,?,?,?);");

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
