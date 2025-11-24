#include <iostream>
#include "DBMaster.h"

int main() {
    DBMaster dbMaster(DBType::MYSQL);
    dbMaster.Connect();
    dbMaster.ExecuteQuery("insert into users values ('98','test', 'test@runoob.com', '1990-01-01', true)");
    return 0;
}