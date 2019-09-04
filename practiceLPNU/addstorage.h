#ifndef ADDSTORAGE_H
#define ADDSTORAGE_H

#include <QWidget>

namespace Ui {
class AddStorage;
}

class AddStorage : public QWidget
{
    Q_OBJECT

public:
    explicit AddStorage(QWidget *parent = nullptr);
    ~AddStorage();

private slots:
    void on_AddStorageButton_clicked();

private:
    Ui::AddStorage *ui;
};

#endif // ADDSTORAGE_H
