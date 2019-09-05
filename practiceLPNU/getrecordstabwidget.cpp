#include "getrecordstabwidget.h"
#include "ui_getrecordstabwidget.h"

GetRecordsTabWidget::GetRecordsTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GetRecordsTabWidget)
{
    ui->setupUi(this);
}

GetRecordsTabWidget::~GetRecordsTabWidget()
{
    delete ui;
}
