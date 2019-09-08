/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QPushButton *LoginButton;
    QLabel *LoginLabel;
    QLineEdit *Login;
    QLabel *PasswordLabel;
    QLineEdit *Password;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(285, 105);
        LoginButton = new QPushButton(LoginForm);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(220, 80, 61, 21));
        LoginLabel = new QLabel(LoginForm);
        LoginLabel->setObjectName(QString::fromUtf8("LoginLabel"));
        LoginLabel->setGeometry(QRect(10, 20, 71, 21));
        Login = new QLineEdit(LoginForm);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(60, 20, 221, 21));
        PasswordLabel = new QLabel(LoginForm);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(10, 50, 71, 21));
        Password = new QLineEdit(LoginForm);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(60, 50, 221, 21));
        Password->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "\320\243\320\262\321\226\320\271\321\202\320\270", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginForm", "\320\243\320\262\321\226\320\271\321\202\320\270", nullptr));
        LoginLabel->setText(QCoreApplication::translate("LoginForm", "\320\233\320\276\320\263\321\226\320\275", nullptr));
        Login->setText(QCoreApplication::translate("LoginForm", "admin", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("LoginForm", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Password->setText(QCoreApplication::translate("LoginForm", "admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
