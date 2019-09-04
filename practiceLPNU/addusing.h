#ifndef ADDUSING_H
#define ADDUSING_H

#include <QWidget>

namespace Ui {
class AddUsing;
}

class AddUsing : public QWidget
{
    Q_OBJECT

public:
    explicit AddUsing(QWidget *parent = nullptr);
    ~AddUsing();

private slots:

    void on_AddUsingButton_clicked();

private:
    Ui::AddUsing *ui;
};

#endif // ADDUSING_H
