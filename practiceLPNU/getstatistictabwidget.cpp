#include "getstatistictabwidget.h"
#include "ui_getstatistictabwidget.h"
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlQuery>

GetStatisticTabWidget::GetStatisticTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetStatisticTabWidget)
{
    ui->setupUi(this);
}

GetStatisticTabWidget::~GetStatisticTabWidget()
{
    delete ui;
}

void GetStatisticTabWidget::on_getStatisticForObjects_clicked()
{

}

void GetStatisticTabWidget::on_getStatisticForMaterial_clicked()
{

}

void GetStatisticTabWidget::on_getStatisticForSuplier_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery getStatisticForSuplier;

/*SELECT COUNT(DISTINCT ПОСТАЧАЛЬНИК.ID) AS [КІЛЬКІСТЬ], ПОСТАВКА.СТАН "
                "FROM ПОСТАЧАЛЬНИК, ПОСТАВКА "
                "WHERE ПОСТАЧАЛЬНИК.ID = ПОСТАВКА.ID_ПОСТАЧАЛЬНИКА;*/
    getStatisticForSuplier.exec(
                "SELECT ПОСТАЧАЛЬНИК.НАЗВА, ПОСТАЧАЛЬНИК.РЕЙТИНГ, "
                "COUNT( ПОСТАВКА.ID_ПОСТАЧАЛЬНИКА) AS [КІЛЬКІСТЬ ПОСТАВОК] "
                "FROM ПОСТАЧАЛЬНИК INNER JOIN ПОСТАВКА "
                "ON ПОСТАЧАЛЬНИК.ID = ПОСТАВКА.ID_ПОСТАЧАЛЬНИКА "
                "ORDER BY ПОСТАЧАЛЬНИК.РЕЙТИНГ;");
    model->setQuery(getStatisticForSuplier);
    ui->StatisticTableView->setModel(model);
    ui->StatisticTableView->resizeRowsToContents();
    ui->StatisticTableView->resizeColumnsToContents();
}
