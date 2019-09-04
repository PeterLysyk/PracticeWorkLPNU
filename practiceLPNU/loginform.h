#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <QString>

namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();
    bool isCorrectAccessData();

private slots:
    void on_LoginButton_clicked();

private:
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
