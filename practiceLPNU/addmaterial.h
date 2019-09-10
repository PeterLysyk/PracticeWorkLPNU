#ifndef ADDMATERIAL_H
#define ADDMATERIAL_H

#include <QWidget>

namespace Ui
{
class AddMaterial;
}

class AddMaterial : public QWidget
{
    Q_OBJECT

public:
    explicit AddMaterial(QWidget *parent = nullptr);
    ~AddMaterial();

private slots:
    void on_AddMaterialButton_clicked();

private:
    Ui::AddMaterial *ui;
};

#endif // ADDMATERIAL_H
