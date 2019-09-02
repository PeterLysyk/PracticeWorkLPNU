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

    auto createSuplierTable =
            "CREATE TABLE ТОВАР"
            "("
            "ID INTEGER NOT NULL PRIMERY KEY,"
            "НАЗВА VARCHAR(30) NOT NULL,"
            "ДАТА_ВИГОТОВЛЕННЯ DATETIME,"
            "ТЕРМІН_ПРИДАТНОСТІ DATETIME,"
            "ВАГА DOUBLE,"
            "ЯКІСТЬ VARCHAR(30),"
            "ОПИС VARCHAR(100);";

    auto

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
