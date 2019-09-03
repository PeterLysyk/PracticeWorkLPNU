#ifndef BUILDINGCOMPANYDATABASECONTROLER_H
#define BUILDINGCOMPANYDATABASECONTROLER_H
#include <QSqlDatabase>
#include <QSql>
#include <QString>
#include <QWidget>

const QString dbType = "QSQLITE";

class BuildingCompanyDataBaseControler: public QSqlDatabase
{
public:
    explicit BuildingCompanyDataBaseControler(const QString &path);
    ~BuildingCompanyDataBaseControler();
    void openDataBase();
    QString getDBpath() const;
    void setDBpath(const QString &path);
    void createAllTablesInTheDataBase(QWidget *widget);

private:
    QString mDBpath;
};

void showCreationTableError(const QString &tableName, QWidget *widget);
void createTableWithCheck(const QString &createTableQuery, const QString &tableName, QWidget *widget);

#endif // BUILDINGCOMPANYDATABASECONTROLER_H
