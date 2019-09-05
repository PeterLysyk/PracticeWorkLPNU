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

private:
    Ui::GetStatisticTabWidget *ui;
};

#endif // GETSTATISTICTABWIDGET_H
