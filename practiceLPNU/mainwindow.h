#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include "buildingcompanydatabasecontroler.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const QString &path, QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase& getDataBase();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    BuildingCompanyDataBaseControler dataBase;
};

#endif // MAINWINDOW_H
