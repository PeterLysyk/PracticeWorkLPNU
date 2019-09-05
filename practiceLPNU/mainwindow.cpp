#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QSql>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<iostream>
#include <memory>
#include<QAbstractTableModel>
#include"loginform.h"
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(parent, SIGNAL(loggingWasSuccess()), this, SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QSqlDatabase& MainWindow::getDataBase()
{
    return mDataBase;
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


