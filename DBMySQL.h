#ifndef DB_MYSQL_H
#define DB_MYSQL_H

#include <iostream>
#include "DBBase.h"
#include "C:\\Program Files\\mysql\\include\\mysql.h"

class DBMySQL : public DBBase {
public:
    DBMySQL();
    virtual ~DBMySQL();

    virtual DBStatus Connect() override;
    virtual DBStatus Disconnect() override;

    virtual DBStatus ExecuteQuery(const std::string& query) override;

private:
    MYSQL *m_pMysql;
};

#endif