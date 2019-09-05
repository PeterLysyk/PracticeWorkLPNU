#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QString>
#include<iostream>
#include "tablescreatequeries.h"
#include "tablerecordaddqueries.h"
#include "databasefunctions.h"
#include "loginform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto loginForm = std::make_unique<LoginForm>();
    loginForm->show();
    MainWindow *w = new MainWindow(loginForm.get());
    w->getDataBase() = QSqlDatabase::addDatabase("QSQLITE");

    w->getDataBase().setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    w->getDataBase().open();

    if (!w->getDataBase().isOpen())
    {
        qDebug()<<"Problem with opening DB";
    }
    w->getDataBase().close();
   // w->show();
    return a.exec();
}

