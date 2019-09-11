#include "getstatistictabwidget.h"
#include "ui_getstatistictabwidget.h"
#include "getstatisticqueries.h"
#include <QSqlQuery>
#include <QDebug>

GetStatisticTabWidget::GetStatisticTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetStatisticTabWidget)
{
    ui->setupUi(this);
    mModel = new QSqlQueryModel();
}

GetStatisticTabWidget::~GetStatisticTabWidget()
{
    delete ui;
}

void GetStatisticTabWidget::on_getStatisticForObjects_clicked()
{
     addStatisticForView(getStatisticForBuildingObjects);
}

void GetStatisticTabWidget::on_getStatisticForMaterial_clicked()
{
    addStatisticForView(getStatisticForMaterial);
}

void GetStatisticTabWidget::on_getStatisticForSuplier_clicked()
{
    addStatisticForView(getStatisticForSuplier);
}

void GetStatisticTabWidget::addStatisticForView(const QString &statisticQuery)
{
    ui->StatisticTableView->reset();

    QSqlQuery getStatisticQuery;
    getStatisticQuery.exec(statisticQuery);

    mModel->setQuery(statisticQuery);
    qDebug()<<"model = "<<mModel;
    ui->StatisticTableView->setModel(mModel);
    ui->StatisticTableView->resizeRowsToContents();
    ui->StatisticTableView->resizeColumnsToContents();
}
