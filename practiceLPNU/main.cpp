#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QString>
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
    //createAllTablesInTheDataBase();

    addRecordToTableQuery(addRecordToMaterialTableQuery,
                          "МАТЕРІАЛ",
                          1, "Цемент","05-05-2015" , "05-05-2015", 20.3, 5, "Добра", "good");
    w->getDataBase().close();
    w->show();

    return a.exec();
}

