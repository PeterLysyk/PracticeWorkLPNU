#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QString>
#include<iostream>
#include "tablescreatequeries.h"
#include "tablerecordaddqueries.h"
#include "databasefunctions.h"
#include "loginform.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    auto loginForm = std::make_unique<LoginForm>();
    loginForm->show();

    auto mainWindow = std::make_unique<MainWindow>(loginForm.get());
    mainWindow->setDataBaseSettings("C:/Users/Petro/Desktop/db.sqlite", "QSQLITE");
    if (!mainWindow->getDataBase().isOpen())
    {
        QMessageBox::information(mainWindow.get(),
                                 "Неможливо відкрити базу даних",
                                 "Перевірте чи база даних існує!");
    }
    return application.exec();
}

