#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QTabWidget>
#include"addrecordstabwidget.h"
#include"getrecordstabwidget.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase& getDataBase();
    void setDataBaseSettings(const QString &dbName, const QString &dbType);

private:
    Ui::MainWindow *ui;
    QSqlDatabase mDataBase;
    QTabWidget *totalTabWidget;
    AddRecordsTabWidget *addRecordsTab;
    GetRecordsTabWidget *getRecordsTab;
};

#endif // MAINWINDOW_H
