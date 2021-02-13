#include "dbhandle.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
Dbhandle::Dbhandle()
{
}

bool Dbhandle::connect(const QString& dbDriver,
                       const QString& user_name,
                       const QString& user_password,
                       const QString& dbName)
{
    QSqlDatabase db = QSqlDatabase::addDatabase(dbDriver);

    db.setHostName("localhost");
    db.setUserName(user_name);
    db.setPassword(user_password);
    db.setDatabaseName(dbName);

    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("Database Error"),
                              db.lastError().text());
        return false;
    }
    return true;
}

// 建立数据库所需要的表
bool Dbhandle::creatTable()
{
}
