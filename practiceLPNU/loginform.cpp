#include "loginform.h"
#include "ui_loginform.h"
#include "QLineEdit"
#include <QDebug>

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    connect(ui->Password, &QLineEdit::textEdited, this, [=]()
        {
            qDebug()<<"inside lambda!";
            this->setCurrentPassword(ui->Password->text());
            ui->Password->setText(QString(ui->Password->text().length(), '*'));
        });


}

LoginForm::~LoginForm()
{
    delete ui;
}

bool LoginForm::isCorrectAccessData()
{
    return (ui->Login->text() == "admin") && (ui->Password->text() == "admin");
}

void LoginForm::setCurrentPassword(const QString &value)
{
    currentPassword = value;
}

void LoginForm::setStartsInsteadOfPassord()
{
    ui->Password->setText(QString(ui->Password->text().length(), '*'));
}

