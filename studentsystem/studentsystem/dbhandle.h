#ifndef DBHANDLE_H
#define DBHANDLE_H
#include <QString>

class Dbhandle {
public:

    Dbhandle();
    static bool connect(const QString& dbDriver,
                        const QString& user_name,
                        const QString& user_password,
                        const QString& dbName);
    static bool creatTable();
};

#endif // DBHANDLE_H
