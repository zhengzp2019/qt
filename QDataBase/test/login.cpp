#include "login.h"
#include "ui_login.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QTableView>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlDriver>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlError>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("登录");
    this->resize(800, 600);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    /**
     * @brief query
     * seek(int n) ：query指向结果集的第n条记录。

       first() ：query指向结果集的第一条记录。

       last() ：query指向结果集的最后一条记录。

       next() ：query指向下一条记录，每执行一次该函数，便指向相邻的下一条记录。

       previous() ：query指向上一条记录，每执行一次该函数，便指向相邻的上一条记录。

       record() ：获得现在指向的记录。

       value(int n) ：获得属性的值。其中n表示你查询的第n个属性，比方上面我们使用“select * from
     * person”就相当于“select id, firstname，lastname from person”，那么value(0)返回id属性的值，value(1)返回firstname属性的值，value(2)返回lastname属性的值。该函数返回QVariant类型的数据，关于该类型与其他类型的对应关系，可以在帮助中查看QVariant。

       at() ：获得现在query指向的记录在结果集中的编号。
     */
    QSqlQuery query;

    query.exec("select * from Teacher");

    // while (query.next())
    // {
    //     qDebug() << query.value(0).toInt() << query.value(1).toString() <<
    // query.value(2).toString();
    // }
    qDebug() << "exec next()";

    // 开始就先执行一次next()函数，那么query指向结果集的第一条记录
    if (query.next())
    {
        // 获取query所指向的记录在结果集中的编号
        int rowNum = query.at();

        // 获取每条记录中属性（即列）的个数
        int columnNum = query.record().count();

        // 获取Tno属性所在列的编号，列从左向右编号，最左边的编号为0
        int fieldNo1 = query.record().indexOf("Tno");

        // 获取Tname属性所在列的编号，列从左向右编号，最左边的编号为0
        int fieldNo2 = query.record().indexOf("Tname");

        // 获取密码的值，并转换为string型
        QString password = query.value("Tpassword").toString();

        // 获取Tno属性的值
        QString Tno = query.value(fieldNo1).toString();

        // 获取Tname属性的值
        QString Tname = query.value(fieldNo2).toString();

        // 将结果输出
        qDebug() << "rowNum is:" << rowNum << '\n'
                 << "columnNum is :" << columnNum << '\n'
                 << "fieldNo1 is:" << fieldNo1 << '\n'
                 << "fieldNo2 is:" << fieldNo2 << '\n'
                 << "password is: " << password << '\n'
                 << "Tno is :" << Tno << '\n'
                 << "Tname is :" << Tname;
    }
    qDebug() << "exec seek(2) :";

    if (query.seek(2))
    { // 定位到结果集中编号为2的记录，即第三条记录，因为第一条记录的编号为0
        qDebug() << "rowNum is:" << query.at() << '\n'
                 << "Tno is: " << query.value(0).toString() << '\n'
                 << "Tname is :" << query.value(1).toString() << '\n'
                 << "password is :" << query.value(2).toString();
    }
    qDebug() << "exec last() :";

    if (query.last())
    { // 定位到结果集中最后一条记录
        qDebug() << "rowNum is:" << query.at() << '\n'
                 << "Tno is: " << query.value(0).toInt() << '\n'
                 << "Tname is :" << query.value(1).toString() << '\n'
                 << "password is :" << query.value(5).toString();
    }
}

// 显示数据
void Login::on_display_clicked()
{
    model = new QSqlTableModel;

    model->setTable("student");

    //    model->setSort(0, Qt::AscendingOrder);//按照第一行排序

    //    model->setHeaderData(0,Qt::Horizontal,"学号");
    //    model->setHeaderData(1,Qt::Horizontal,"姓名");
    //    model->setHeaderData(2,Qt::Horizontal,"性别");
    //    model->setHeaderData(3,Qt::Horizontal,"年龄");
    //    model->setHeaderData(4,Qt::Horizontal,"专业");
    //    model->setHeaderData(5,Qt::Horizontal,"入学年份");
    //    model->setHeaderData(6,Qt::Horizontal,"密码");
    if (model->select())
    {
        ui->tableView->setModel(model);
        ui->tableView->show();
    }
}

//删除姓名为name的学生，可撤销
void Login::on_pushButtondelete_clicked()
{
    // 获取行编辑内容
    QString name = ui->lineEditname->text();

    // 开启一个事务
    //    QSqlDatabase::database().transaction();
    //删除名为name的学生
    QString   sql = QString("delete from student where sname='%1'").arg(name);
    QSqlQuery query;

    query.exec("start transaction");
    query.exec(sql);

    //    if(query.exec(sql))
    //        query.finish();
}

// 确认删除
void Login::on_pushButtonconfirm_clicked()
{
    //	QSqlDatabase::database().commit();
    QSqlQuery query;

    query.exec("commit");
}

// 撤销删除
void Login::on_pushButtonundo_clicked()
{
    //	QSqlDatabase::database().rollback();
    QSqlQuery query;

    query.exec("rollback");
    qDebug() << "撤销结束";
}

//删除该条记录
void Login::on_tableView_doubleClicked(const QModelIndex& index)
{
    QMessageBox::about(this, "关于", "您是否确认删除该条记录");
    int row = ui->tableView->currentIndex().row();

    index.row();
    QSqlQuery query;
    QString   sql = "select * from student";

    query.exec(sql);
    query.seek(row);
    model->removeRow(row, index);

    if (!model->submitAll())
    {
        // this DB hasFeature:Transaction: false
        qDebug() << model->lastError().text();
    }
    else qDebug() << row
                  << query.value(1);
}
