#ifndef ADDRECORDSWIDGET_H
#define ADDRECORDSWIDGET_H

#include <QWidget>

namespace Ui
{
class AddRecordsWidget;
}

class AddRecordsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddRecordsWidget(QWidget *parent = nullptr);
    ~AddRecordsWidget();

private:
    Ui::AddRecordsWidget *ui;
};

#endif // ADDRECORDSWIDGET_H
