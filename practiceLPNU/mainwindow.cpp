#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QSql>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<iostream>
#include <memory>
#include<QAbstractTableModel>
MainWindow::MainWindow(const QString &path, QWidget *parent) :
    QMainWindow(parent), dataBase(path),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QSqlDatabase& MainWindow::getDataBase()
{
    return dataBase;
}

void MainWindow::on_pushButton_clicked()
{
    auto model = std::make_shared<QSqlQueryModel>();
    auto model1 = new QSqlQueryModel();
    //auto query = new QSqlQuery();
    auto query = std::make_unique<QSqlQuery>();
    query->prepare("SELECT * FROM TESTBASE");
    query->exec();
    model1->setQuery(*query);

    //ui->tableView->setModel(model.get());
    ui->tableView->setModel(model1);
    ui->tableView->setVisible(true);

    qDebug()<<"row count ="<<model1->rowCount();
}


