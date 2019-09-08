#ifndef GETRECORDSTABWIDGET_H
#define GETRECORDSTABWIDGET_H

#include <QWidget>

namespace Ui
{
class GetRecordsTabWidget;
}

class GetRecordsTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GetRecordsTabWidget(QWidget *parent = nullptr);
    ~GetRecordsTabWidget();

private:
    Ui::GetRecordsTabWidget *ui;
};

#endif // GETRECORDSTABWIDGET_H
