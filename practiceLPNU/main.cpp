#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include <QString>
#include "createtablesqueries.h"
#include"databasefunctions.h"

void addValues(int id, QString firstName, QString lastName, QString birthDate, double weight);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow;
    w->getDataBase() = QSqlDatabase::addDatabase("QSQLITE");

    w->getDataBase().setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    w->getDataBase().open();

    if (!w->getDataBase().isOpen())
    {
        qDebug()<<"Problem with opening DB";
    }

//    QString createTestBaseQuery = "CREATE TABLE TESTBASE ("
//                    "ID INTEGER,"
//                    "FIRSTNAME VARCHAR(20),"
//                    "LASTNAME VARCHAR(20),"
//                    "BIRTHDATE DATETIME,"
//                    "WEIGHT DOUBLE);";

//    QSqlQuery createDBQuery;

    createAllTablesInTheDataBase(w);

//    if (!createDBQuery.exec(createTestBaseQuery))
//    {
//        qDebug()<<"error when creating table";
//    }
    w->getDataBase().close();
    w->show();

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
