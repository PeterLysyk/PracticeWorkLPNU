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
    MainWindow *w = new MainWindow;
    w->getDataBase() = QSqlDatabase::addDatabase("QSQLITE");

    w->getDataBase().setDatabaseName("C:/Users/Petro/Desktop/db.sqlite");
    w->getDataBase().open();

    if (!w->getDataBase().isOpen())
    {
        qDebug()<<"Problem with opening DB";
    }
    w->getDataBase().close();
    auto loginForm = std::make_unique<LoginForm>();
    loginForm->show();
    if (loginForm->isCorrectAccessData())
    {
        loginForm->close();
        w->show();
    }

    return a.exec();
}

