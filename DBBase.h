#ifndef DBBASE_H
#define DBBASE_H

#include <string>
#include "DBDef.h"

class DBBase {
public:
    DBBase(){};
    virtual ~DBBase(){};

    virtual DBStatus Connect() = 0;
    virtual DBStatus Disconnect() = 0;

    virtual DBStatus ExecuteQuery(const std::string& query) = 0;
};

#endif