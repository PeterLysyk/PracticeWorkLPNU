#ifndef GETRECORDSTABWIDGET_H
#define GETRECORDSTABWIDGET_H

#include <QWidget>
#include <QString>

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

private slots:
    void on_selectRecordByIdButton_clicked();
    void on_DeleteRecordByIdButton_clicked();
    void on_selectAllRecords_clicked();

private:
    QString createSelectionQueryForOneRecord(const int id, const QString &tableName);
    Ui::GetRecordsTabWidget *ui;
};

#endif // GETRECORDSTABWIDGET_H
