#include "display.h"
#include "ui_display.h"
#include <QSqlTableModel>
#include <QString>
Display::Display(QString uuser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Display)
{
    ui->setupUi(this);
    this->resize(800, 600);
    user = uuser;
    QSqlTableModel *model = new QSqlTableModel;

    if (user == "student")
    {
        model->setTable("student");
        model->select();
        model->setHeaderData(0, Qt::Horizontal, "学号");
        model->setHeaderData(1, Qt::Horizontal, "姓名");
        model->setHeaderData(2, Qt::Horizontal, "性别");
        model->setHeaderData(3, Qt::Horizontal, "年龄");
        model->setHeaderData(4, Qt::Horizontal, "专业");
        model->setHeaderData(5, Qt::Horizontal, "入学年份");
        model->setHeaderData(6, Qt::Horizontal, "密码");
    }
    else if (user == "teacher")
    {
        model->setTable("teacher");
        model->select();
        model->setHeaderData(0, Qt::Horizontal, "职工号");
        model->setHeaderData(1, Qt::Horizontal, "姓名");
        model->setHeaderData(2, Qt::Horizontal, "年龄");
        model->setHeaderData(3, Qt::Horizontal, "性别");
        model->setHeaderData(4, Qt::Horizontal, "职称");
        model->setHeaderData(5, Qt::Horizontal, "密码");
    }
    ui->tableView->setModel(model);
    ui->tableView->show();
}

Display::~Display()
{
    delete ui;
}
