#include "loginform.h"
#include "ui_loginform.h"
#include "QLineEdit"
#include <QMessageBox>

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

void LoginForm::on_LoginButton_clicked()
{
    if (isCorrectAccessData())
    {
        this->close();
        emit loggingWasSuccess();
    }
    else
    {
        QMessageBox::information(this, "Невірний логін або пароль","Перевірте правильність вводу!");
    }
}
