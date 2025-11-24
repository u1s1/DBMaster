#include "DBMaster.h"

DBMaster::DBMaster(DBType dbType)
{
    switch (dbType)
    {
    case DBType::MYSQL:
        pDBInstance = new DBMySQL();
        break;
    
    default:
        break;
    }
}

DBMaster::~DBMaster()
{
}

void DBMaster::Init()
{
}

DBStatus DBMaster::Connect()
{
    return pDBInstance->Connect();
}

DBStatus DBMaster::Disconnect()
{
    return pDBInstance->Disconnect();
}

DBStatus DBMaster::ExecuteQuery(const std::string &query)
{
    return pDBInstance->ExecuteQuery(query);
}
