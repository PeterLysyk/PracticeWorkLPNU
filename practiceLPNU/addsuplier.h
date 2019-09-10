#ifndef ADDSUPLIER_H
#define ADDSUPLIER_H

#include <QWidget>

namespace Ui
{
class AddSuplier;
}

class AddSuplier : public QWidget
{
    Q_OBJECT

public:
    explicit AddSuplier(QWidget *parent = nullptr);
    ~AddSuplier();

private slots:
    void on_AddSuplierButton_clicked();

private:
    Ui::AddSuplier *ui;
};

#endif // ADDSUPLIER_H
