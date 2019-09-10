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

MainWindow::MainWindow( LoginForm *loginForm, QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Житлотехсервіс ©");
    this->setWindowIcon(QIcon("C:\\Users\\Petro\\Desktop\\JitloTechico.png"));

    mLoginForm = loginForm;
    connect(mLoginForm, &LoginForm::loggingWasSuccess, this, &QWidget::show);

    mTotalTabWidget = new QTabWidget;

    mAddRecordsTab = new AddRecordsTabWidget;
    QVBoxLayout *addRecordsLayout = new QVBoxLayout;
    addRecordsLayout->addWidget(mAddRecordsTab);

    mGetRecordsTab = new GetRecordsTabWidget;
    QVBoxLayout *getRecordsLayout = new QVBoxLayout;
    getRecordsLayout->addWidget(mGetRecordsTab);

    mGetStatisticTab = new GetStatisticTabWidget;
    QVBoxLayout *getStatisticLayout = new QVBoxLayout;
    getStatisticLayout->addWidget(mGetStatisticTab);

    mTotalTabWidget->addTab(mAddRecordsTab, "Додати запис");
    mTotalTabWidget->addTab(mGetRecordsTab, "Отримати запис/Видалити запис");
    mTotalTabWidget->addTab(mGetStatisticTab, "Отримати статистику");

    setCentralWidget(mTotalTabWidget);
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
