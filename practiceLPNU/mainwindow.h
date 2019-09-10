#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QTabWidget>
#include"addrecordstabwidget.h"
#include"getrecordstabwidget.h"
#include"getstatistictabwidget.h"
#include "loginform.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(LoginForm *mLoginForm, QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase& getDataBase();
    void setDataBaseSettings(const QString &dbName, const QString &dbType);

private:
    Ui::MainWindow *ui;
    QSqlDatabase mDataBase;
    QTabWidget *mTotalTabWidget;
    LoginForm *mLoginForm;
    AddRecordsTabWidget *mAddRecordsTab;
    GetRecordsTabWidget *mGetRecordsTab;
    GetStatisticTabWidget *mGetStatisticTab;
};

#endif // MAINWINDOW_H
