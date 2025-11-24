#ifndef DB_MASTER_H
#define DB_MASTER_H

#include <iostream>
#include "DBMySQL.h"

class DBMaster
{
public:
    DBMaster(DBType dbType);
    ~DBMaster();

    void Init();

    DBStatus Connect();
    DBStatus Disconnect();

    DBStatus ExecuteQuery(const std::string &query);

private:
    DBBase *pDBInstance;
};

#endif