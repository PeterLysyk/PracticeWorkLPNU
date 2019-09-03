#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include<iostream>
#include <QString>
#include<QMessageBox>
#include"buildingcompanydatabasecontroler.h"

void addValues(int id, QString firstName, QString lastName, QString birthDate, double weight);

int main(int argc, char *argv[])
{
    //QApplication application(argc, argv);
    QApplication a(argc, argv);
    MainWindow w;
    w.getDataBase() = QSqlDatabase::addDatabase("QSQLITE");
    w.getDataBase().setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    w.getDataBase().open();

    if (!w.getDataBase().isOpen())
    {
        qDebug()<<"Problem with opening DB";
    }
//    auto mainWindow = std::make_unique<MainWindow>();

//    auto db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
//    bool isOpened = db.isOpen();

//    qDebug()<<"is opened = "<<isOpened;
   /* auto dbControler =
            std::make_unique<BuildingCompanyDataBaseControler>("C:/Users/Petro/Desktop/db.sqlite");

    try
    {
        dbControler->openDataBase();
    }
    catch (std::runtime_error)
    {
        QMessageBox::information(mainWindow.get(),
                                 "Помилка відкриття",
                                 "База даних уже вікрита або її не існує!");
    }
    dbControler->createAllTablesInTheDataBase(mainWindow.get());*/
    mainWindow->show();
    return application.exec();
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
