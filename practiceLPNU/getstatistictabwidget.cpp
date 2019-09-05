#include "getstatistictabwidget.h"
#include "ui_getstatistictabwidget.h"

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
