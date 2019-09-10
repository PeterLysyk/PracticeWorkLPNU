#ifndef GETSTATISTICTABWIDGET_H
#define GETSTATISTICTABWIDGET_H

#include <QWidget>

namespace Ui {
class GetStatisticTabWidget;
}

class GetStatisticTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GetStatisticTabWidget(QWidget *parent = nullptr);
    ~GetStatisticTabWidget();

private slots:
    //void on_getStatisticForSuplier_clicked();

    void on_getStatisticForObjects_clicked();

    void on_getStatisticForMaterial_clicked();

    void on_getStatisticForSuplier_clicked();

private:
    Ui::GetStatisticTabWidget *ui;
};

#endif // GETSTATISTICTABWIDGET_H
