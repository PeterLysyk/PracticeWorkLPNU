#include "addrecordstabwidget.h"
#include "ui_addrecordstabwidget.h"

AddRecordsTabWidget::AddRecordsTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addRecordsTabWidget)
{
    ui->setupUi(this);
}

AddRecordsTabWidget::~AddRecordsTabWidget()
{
    delete ui;
}
