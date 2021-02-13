#ifndef DATABASE_H
#define DATABASE_H
#include <QString>

class database {
public:

    database();
    static bool connect(const QString& dbDriver,
                        const QString& user_name,
                        const QString& user_password,
                        const QString& dbName);
};

#endif // DATABASE_H
