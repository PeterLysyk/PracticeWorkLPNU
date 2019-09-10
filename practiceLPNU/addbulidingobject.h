#ifndef ADDBULIDINGOBJECT_H
#define ADDBULIDINGOBJECT_H

#include <QWidget>

namespace Ui
{
class AddBulidingObject;
}

class AddBulidingObject : public QWidget
{
    Q_OBJECT

public:
    explicit AddBulidingObject(QWidget *parent = nullptr);
    ~AddBulidingObject();

private slots:

    void on_AddBuildObjectButton_clicked();

private:
    Ui::AddBulidingObject *ui;
};

#endif // ADDBULIDINGOBJECT_H
