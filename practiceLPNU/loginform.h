#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <QString>

namespace Ui
{
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();

private slots:
    void on_LoginButton_clicked();
signals:
    void loggingWasSuccess();

private:
    bool isCorrectAccessData();
    void setStartsInsteadOfPassord();
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
