#include "DBMySQL.h"

DBMySQL::DBMySQL()
{
    m_pMysql = mysql_init(0);
}

DBMySQL::~DBMySQL()
{
}

DBStatus DBMySQL::Connect()
{
    if (!mysql_real_connect(m_pMysql, "localhost", "root", "root", "test", 0, 0, 0)) {
        printf("Link Database Error:%s", mysql_error(m_pMysql));
        return DBStatus::DB_ERROR;
    }
    std::cout << "DB connect success" << std::endl;
    return DBStatus::DB_OK;
}

DBStatus DBMySQL::Disconnect()
{
    return DBStatus();
}

DBStatus DBMySQL::ExecuteQuery(const std::string &query)
{
    if (mysql_query(m_pMysql, query.c_str())) {
        printf("Info : %s", mysql_error(m_pMysql));
        return DBStatus::DB_ERROR;
    }
    return DBStatus::DB_OK;
}
