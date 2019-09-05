#ifndef ADDRECORDSTABWIDGET_H
#define ADDRECORDSTABWIDGET_H

#include <QWidget>

namespace Ui {
class addRecordsTabWidget;
}

class AddRecordsTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddRecordsTabWidget(QWidget *parent = nullptr);
    ~AddRecordsTabWidget();

private:
    Ui::addRecordsTabWidget *ui;
};

#endif // ADDRECORDSTABWIDGET_H
