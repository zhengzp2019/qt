#include "widget.h"
#include "ui_widget.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("255.255.255.240");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("zzp");

    if (db.open())
    {
        QMessageBox::warning(this, "error", db.lastError().text());
        qDebug() << "打开失败";
    }
}

Widget::~Widget()
{
    delete ui;
}
