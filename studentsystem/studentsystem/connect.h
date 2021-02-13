#ifndef CONNECT_H
#define CONNECT_H
#include <QMessageBox>
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
bool connect(const QString& dbName)
{
    QSqlDatabase db = QSqlDatabase::addDatabase(dbName);

    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("zzp");

    if (!db.open())
    {
        QMessageBox::critical(0, QObject::tr("Database Error"),
                              db.lastError().text());
        return false;
    }
    else return true;
}

#endif // CONNECT_H
