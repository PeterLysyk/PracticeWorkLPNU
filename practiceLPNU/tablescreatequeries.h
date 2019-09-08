#ifndef CREATETABLESQUERIES_H
#define CREATETABLESQUERIES_H
#include <QString>

const QString createSuplierTableQuery =
        "CREATE TABLE ПОСТАЧАЛЬНИК"
        "("
        "ID INTEGER NOT NULL,"
        "НАЗВА VARCHAR(30) NOT NULL,"
        "ДАТА_УКЛАДЕННЯ_ДОГОВОРУ DATE,"
        "РЕЙТИНГ INTEGER,"
        "PRIMARY KEY (ID)"
        ");";

const QString createStorageTableQuery =
        "CREATE TABLE СКЛАД"
        "("
        "ID INTEGER NOT NULL,"
        "АДРЕСА_МІСТО  VARCHAR(20),"
        "АДРЕСА_ВУЛИЦЯ VARCHAR(20),"
        "АДРЕСА_НОМЕР  VARCHAR(5),"
        "ПЛОЩА DOUBLE,"
        "PRIMARY KEY (ID)"
        ");";

const QString createConstructionObjectTableQuery =
        "CREATE TABLE БУДІВЛЬНИЙ_ОБЄКТ"
        "("
        "ID INTEGER NOT NULL,"
        "АДРЕСА_МІСТО  VARCHAR(20),"
        "АДРЕСА_ВУЛИЦЯ VARCHAR(20),"
        "АДРЕСА_НОМЕР  VARCHAR(5),"
        "ПРІОРИТЕТНІСТЬ INTEGER,"
        "ДАТА_ПОЧАТКУ_БУДІВНИЦТВА DATE,"
        "PRIMARY KEY (ID)"
        ");";

const QString createMaterialTableQuery =
        "CREATE TABLE МАТЕРІАЛ"
        "("
        "ID INTEGER NOT NULL,"
        "НАЗВА VARCHAR(30) NOT NULL,"
        "ДАТА_ВИГОТОВЛЕННЯ DATE,"
        "ТЕРМІН_ПРИДАТНОСТІ DATE,"
        "ВАГА DOUBLE,"
        "КІЛЬКІСТЬ INTEGER,"
        "ЯКІСТЬ VARCHAR(30),"
        "ОПИС VARCHAR(100),"
        "PRIMARY KEY (ID)"
        ");";

const QString createDeliveryTableQuery =
        "CREATE TABLE ПОСТАВКА"
        "("
        "ID INTEGER NOT NULL,"
        "ID_ПОСТАЧАЛЬНИКА INTEGER NOT NULL,"
        "ID_МАТЕРІАЛУ INTEGER NOT NULL,"
        "СТАН VARCHAR(20),"
        "PRIMARY KEY (ID),"
        "FOREIGN KEY (ID_ПОСТАЧАЛЬНИКА) REFERENCES ПОСТАЧАЛЬНИК(ID_ПОСТАЧАЛЬНИКА) ON UPDATE CASCADE,"
        "FOREIGN KEY (ID_МАТЕРІАЛУ) REFERENCES МАТЕРІАЛ(ID_МАТЕРІАЛУ) ON UPDATE CASCADE"
        ");";

const QString createsSlotTableQuery =
        "CREATE TABLE СЛОТ"
        "("
        "ID INTEGER NOT NULL,"
        "ID_СКЛАДУ INTEGER NOT NULL,"
        "ID_МАТЕРІАЛУ INTEGER NOT NULL,"
        "КІЛЬКІСТЬ_МАТЕРІАЛУ INTEGER DEFAULT 0,"
        "PRIMARY KEY (ID),"
        "FOREIGN KEY (ID_СКЛАДУ) REFERENCES СКЛАД(ID_СКЛАДУ) ON UPDATE CASCADE,"
        "FOREIGN KEY (ID_МАТЕРІАЛУ) REFERENCES МАТЕРІАЛ(ID_МАТЕРІАЛУ) ON UPDATE CASCADE"
        ");";

const QString createUsingTableQuery =
        "CREATE TABLE ВИКОРИСТАННЯ"
        "("
        "ID INTEGER NOT NULL,"
        "ID_ОБЄКТУ INTEGER NOT NULL,"
        "ID_СЛОТА INTEGER NOT NULL,"
        "ДАТА_ВИКОРИСТАННЯ DATE,"
        "PRIMARY KEY (ID),"
        "FOREIGN KEY (ID_ОБЄКТУ) REFERENCES БУДІВЛЬНИЙ_ОБЄКТ(ID_ОБЄКТУ) ON UPDATE CASCADE,"
        "FOREIGN KEY (ID_СЛОТА) REFERENCES СЛОТ(ID_СЛОТА) ON UPDATE CASCADE"
        ");";

#endif // CREATETABLESQUERIES_H
