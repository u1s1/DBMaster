#ifndef DB_DEF_H
#define DB_DEF_H

enum class DBType
{
    MYSQL,
    SQL_LITE
};

enum class DBStatus
{
    DB_OK,
    DB_ERROR,
    DB_NOT_FOUND,
    DB_PERMISSION_DENIED,
    DB_TIMEOUT
};

#endif