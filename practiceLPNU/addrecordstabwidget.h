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

private slots:
    void on_BuildingObjectAddRecordButton_clicked();

    void on_UsingAddRecordButton_clicked();

    void on_MaterialAddRecordButton_clicked();

    void on_DevileryAddRecordButton_clicked();

    void on_SuplierAddRecordButton_clicked();

    void on_StorageAddRecordButton_clicked();

    void on_SlotAddRecordButton_clicked();

private:
    Ui::addRecordsTabWidget *ui;
};

void clearWidgets(QWidget *widget);
#endif // ADDRECORDSTABWIDGET_H