#ifndef GETSTATISTICQUERIES_H
#define GETSTATISTICQUERIES_H

#include <QString>

const QString getStatisticForSuplier =
        "SELECT ПОСТАЧАЛЬНИК.НАЗВА, ПОСТАЧАЛЬНИК.РЕЙТИНГ, "
        "COUNT( ПОСТАВКА.ID_ПОСТАЧАЛЬНИКА) AS КІЛЬКІСТЬ_ПОСТАВОК, "
        "SUM( МАТЕРІАЛ.КІЛЬКІСТЬ) AS КІЛЬКІСТЬ_МАТЕРІАЛУ "
        "FROM ПОСТАЧАЛЬНИК "
        "LEFT JOIN ПОСТАВКА "
        "ON ПОСТАЧАЛЬНИК.ID = ПОСТАВКА.ID_ПОСТАЧАЛЬНИКА "
        "LEFT JOIN МАТЕРІАЛ "
        "ON МАТЕРІАЛ.ID = ПОСТАВКА.ID_МАТЕРІАЛУ "
        "GROUP BY ПОСТАЧАЛЬНИК.РЕЙТИНГ;";

const QString getStatisticForMaterial =
        "SELECT НАЗВА, "
        "SUM( КІЛЬКІСТЬ) AS ЗАГАЛЬНА_КІЛЬКІСТЬ, "
        "SUM( ВАГА) AS ЗАГАЛЬНА_ВАГА "
        "FROM МАТЕРІАЛ "
        "GROUP BY НАЗВА;";

const QString getStatisticForBuildingObjects =
        "SELECT "
        "БУДІВЛЬНИЙ_ОБЄКТ.АДРЕСА_МІСТО, "
        "БУДІВЛЬНИЙ_ОБЄКТ.АДРЕСА_ВУЛИЦЯ, "
        "БУДІВЛЬНИЙ_ОБЄКТ.АДРЕСА_НОМЕР, "
        "БУДІВЛЬНИЙ_ОБЄКТ.ПРІОРИТЕТНІСТЬ,"
        "МАТЕРІАЛ.НАЗВА AS НАЗВА_МАТЕРІАЛУ, "
        "ВИКОРИСТАННЯ.КІЛЬКІСТЬ_МАТЕРІАЛУ AS КІЛЬКІСТЬ_ВИКОРИСТАНОГО "
        "FROM ВИКОРИСТАННЯ "
        "LEFT JOIN БУДІВЛЬНИЙ_ОБЄКТ "
        "ON БУДІВЛЬНИЙ_ОБЄКТ.ID = ВИКОРИСТАННЯ.ID_ОБЄКТУ "
        "LEFT JOIN СЛОТ "
        "ON СЛОТ.ID = ВИКОРИСТАННЯ.ID_СЛОТА "
        "LEFT JOIN МАТЕРІАЛ "
        "ON МАТЕРІАЛ.ID = СЛОТ.ID_МАТЕРІАЛУ;";

#endif // GETSTATISTICQUERIES_H

