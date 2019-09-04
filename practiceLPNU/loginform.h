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
    bool isCorrectAccessData();
    void setCurrentPassword(const QString &value);

private:
    void setStartsInsteadOfPassord();
    Ui::LoginForm *ui;
    QString currentPassword;
};

#endif // LOGINFORM_H
