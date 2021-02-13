#include "database.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDriver>
database::database()
{
}

bool database::connect(const QString& dbDriver,
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
    qDebug() <<"this DB hasFeature:Transaction:" <<db.driver()->hasFeature(QSqlDriver::Transactions);

    return true;
}
