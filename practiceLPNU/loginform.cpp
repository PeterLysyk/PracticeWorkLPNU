#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

bool LoginForm::isCorrectAccessData()
{
    return (ui->Login->text() == "admin") && (ui->Password->text() == "admin");
}

