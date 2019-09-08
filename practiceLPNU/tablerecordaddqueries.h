#ifndef TABLERECORDADDQUERIES_H
#define TABLERECORDADDQUERIES_H
#include <QString>

const QString addRecordToSuplierTableQuery =
        "INSERT INTO ПОСТАЧАЛЬНИК"
        "("
        "ID,"
        "НАЗВА,"
        "ДАТА_УКЛАДЕННЯ_ДОГОВОРУ,"
        "РЕЙТИНГ"
        ")"
        "VALUES (?,?,?,?);";

const QString addRecordToStorageTableQuery =
        "INSERT INTO СКЛАД"
        "("
        "ID,"
        "АДРЕСА_МІСТО,"
        "АДРЕСА_ВУЛИЦЯ,"
        "АДРЕСА_НОМЕР,"
        "ПЛОЩА"
        ")"
        "VALUES(?,?,?,?,?);";

const QString addRecordToConstructionObjectTableQuery =
        "INSERT INTO БУДІВЛЬНИЙ_ОБЄКТ"
        "("
        "ID,"
        "АДРЕСА_МІСТО,"
        "АДРЕСА_ВУЛИЦЯ,"
        "АДРЕСА_НОМЕР,"
        "ПРІОРИТЕТНІСТЬ,"
        "ДАТА_ПОЧАТКУ_БУДІВНИЦТВА"
        ")"
        "VALUES(?,?,?,?,?,?);";

const QString addRecordToMaterialTableQuery =
        "INSERT INTO МАТЕРІАЛ"
        "("
        "ID,"
        "НАЗВА,"
        "ДАТА_ВИГОТОВЛЕННЯ,"
        "ТЕРМІН_ПРИДАТНОСТІ,"
        "ВАГА,"
        "КІЛЬКІСТЬ,"
        "ЯКІСТЬ,"
        "ОПИС"
        ")"
        "VALUES(?,?,?,?,?,?,?,?);";

const QString addRecordToDeliveryTableQuery =
        "INSERT INTO ПОСТАВКА"
        "("
        "ID,"
        "ID_ПОСТАЧАЛЬНИКА,"
        "ID_МАТЕРІАЛУ,"
        "СТАН"
        ")"
        "VALUES(?,?,?,?);";

const QString addRecordToSlotTableQuery =
        "INSERT INTO СЛОТ"
        "("
        "ID,"
        "ID_СКЛАДУ,"
        "ID_МАТЕРІАЛУ,"
        "КІЛЬКІСТЬ_МАТЕРІАЛУ"
        ")"
        "VALUES(?,?,?,?);";

const QString addRecordToUsingTableQuery =
        "INSERT INTO ВИКОРИСТАННЯ"
        "("
        "ID,"
        "ID_ОБЄКТУ,"
        "ID_СЛОТА,"
        "ДАТА_ВИКОРИСТАННЯ"
        ")"
        "VALUES(?,?,?,?);";

#endif // TABLERECORDADDQUERIES_H
