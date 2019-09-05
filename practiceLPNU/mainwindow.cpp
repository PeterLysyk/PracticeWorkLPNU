#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QSql>
#include<QSqlQueryModel>
#include<QVBoxLayout>
#include<QSqlQuery>
#include<iostream>
#include <memory>
#include<QAbstractTableModel>
#include"addrecordstabwidget.h"
#include<QTabWidget>
#include"loginform.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(parent, SIGNAL(loggingWasSuccess()), this, SLOT(show()));
    this->setWindowTitle("Житлотехсервіс (c)");

    totalTabWidget = new QTabWidget;

    addRecordsTab = new AddRecordsTabWidget;
    QVBoxLayout *addRecordsLayout = new QVBoxLayout;
    addRecordsLayout->addWidget(addRecordsTab);

    getRecordsTab = new GetRecordsTabWidget;
    QVBoxLayout *getRecordsLayout = new QVBoxLayout;
    getRecordsLayout->addWidget(getRecordsTab);

    getStatisticTab = new GetStatisticTabWidget;
    QVBoxLayout *getStatisticLayout = new QVBoxLayout;
    getStatisticLayout->addWidget(getStatisticTab);

    totalTabWidget->addTab(addRecordsTab, "Додати запис");
    totalTabWidget->addTab(getRecordsTab, "Отримати запис");
    totalTabWidget->addTab(getStatisticTab, "Отримати статистику");

    setCentralWidget(totalTabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
    mDataBase.close();
}

QSqlDatabase& MainWindow::getDataBase()
{
    return mDataBase;
}

void MainWindow::setDataBaseSettings(const QString &dbName, const QString &dbType)
{
    mDataBase = QSqlDatabase::addDatabase(dbType);
    mDataBase.setDatabaseName(dbName);
    mDataBase.open();
}
