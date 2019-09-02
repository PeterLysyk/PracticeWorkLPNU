#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QSql>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<iostream>
#include <memory>
#include<QAbstractTableModel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mDB.open();
    auto model = std::make_shared<QSqlQueryModel>();
    //auto model = new QSqlQueryModel();
    //auto query = new QSqlQuery();
    auto query = std::make_unique<QSqlQuery>();
    query->prepare("SELECT * FROM TESTBASE");
    query->exec();
    model->setQuery(*query);

    ui->tableView->setModel(model.get());
    ui->tableView->setVisible(true);
    while(1)
    {
        qDebug()<<"1";
    }

    qDebug()<<"row count ="<<model->rowCount();
    mDB.close();
}

QSqlDatabase& MainWindow::dB()
{
    return mDB;
}

void MainWindow::setDB(const QSqlDatabase &dB)
{
    mDB = dB;
}
