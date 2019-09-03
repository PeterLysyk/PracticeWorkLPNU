#ifndef DATABASEFUNCTIONS_H
#define DATABASEFUNCTIONS_H

#include <QString>
#include <QWidget>

void createTable(const QString &createTableQuery);
void showCreationTableError(const QString &tableName, QWidget *widget);
void createTableWithCheck(const QString &createTableQuery, const QString &tableName, QWidget *widget);


#endif // DATABASEFUNCTIONS_H
