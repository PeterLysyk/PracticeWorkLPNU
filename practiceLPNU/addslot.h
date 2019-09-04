#ifndef ADDSLOT_H
#define ADDSLOT_H

#include <QWidget>

namespace Ui {
class AddSlot;
}

class AddSlot : public QWidget
{
    Q_OBJECT

public:
    explicit AddSlot(QWidget *parent = nullptr);
    ~AddSlot();

private slots:
    void on_AddDeliveryButton_clicked();

private:
    Ui::AddSlot *ui;
};

#endif // ADDSLOT_H
