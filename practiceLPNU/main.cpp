#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QString>
#include<iostream>
#include "tablescreatequeries.h"
#include "tablerecordaddqueries.h"
#include "databasefunctions.h"

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
    createAllTablesInTheDataBase();
    addRecordToSuplierTable(1,"Roman","22-09-1999",2);
    addRecordToMaterialTable(1,"1", "21-09-2015","22-09-2022",50.7667, 5, "1", "2");
    addRecordToStorageTable(2,"city","street","2",100.0);
    addRecordToDeliveryTable(1,1,1,"in proccess");
    addRecordToSlotTable(1,2,1,10);
    addRecordToConstructionObjectTable(1,"1","2","2",3,"22-09-1999");
    addRecordToUsingTable(1,1,1,"22-09-1998");

    w->getDataBase().close();
    w->show();

    return a.exec();
}

