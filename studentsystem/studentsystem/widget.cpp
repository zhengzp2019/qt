#include "widget.h"
#include "ui_widget.h"
#include "dbhandle.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("登录界面");
    this->resize(400, 400);

    //    loadStyleSheet(
    //        ":/new/prefix1/MyStyle/login.qss");
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}

//// 加载样式表配置文件
void Widget::loadStyleSheet(const QString& sheetName)
{
    QFile file(sheetName);

    file.open(QFile::ReadOnly);

    if (file.isOpen()) {
        QString styleSheet = this->styleSheet();
        styleSheet += QLatin1String(file.readAll());
        this->setStyleSheet(styleSheet);
    }
}

// 退出系统
void Widget::on_cancal_clicked()
{
    this->close();
}

// 登录
void Widget::on_login_clicked()
{
    // 读取账号和密码
    acount = ui->lineEditAcount->text();
    password = ui->lineEditPassword->text();

    QSqlQuery query;                // 执行sql语句的类
    QString   sql;                  // 定义sql语句

    if ((role < 1) || (role > 3)) { // 输入不正确
        QMessageBox::about(this, "警告", "角色选择错误或未选择，请重新选择");
    }
    else if (role == 3) {           // 管理员界面
        Admin *admin = new Admin(this, acount, password);
        admin->show();
    }
    else if (role == 1) {        // 学生
        sql = QString("select * from student where sno='%1'").arg(acount);
        query.exec(sql);
        int size = query.size(); // 标记结果数据集的条数

        // 若用户名不存在
        if (size == 0) {         // 用户名不存在
            QMessageBox::about(this, "警告",
                               QString("用户名'%1'不存在，请检查并重新输入").arg(acount));
        }
        else {
            bool corrent = false; // 标记密码的正确性

            while (query.next()) {
                if (query.value("SPassword").toString() == password) {
                    corrent = true;
                    break;
                }
            }

            if (corrent) { // 密码正确
                for (int i = 0; i < query.record().count();
                     i++) qDebug() << query.value(i).toString() << '\t';
                QMessageBox::about(this, "关于", "这是学生模块");
            }
            else { // 密码错误，要求用户重新输入
                QMessageBox::about(this, "警告",
                                   "密码错误，请检查并重新输入");
            }
        }
    }
    else if (role == 2) {        // 教师
        sql = QString("select * from teacher where tno='%1'").arg(acount);
        query.exec(sql);
        int size = query.size(); // 标记结果数据集的条数

        // 若用户名不存在
        if (size == 0) {         // 用户名不存在
            QMessageBox::about(this, "警告",
                               QString("用户名'%1'不存在，请检查并重新输入").arg(acount));
        }
        else {
            bool corrent = false; // 标记密码的正确性

            while (query.next()) {
                if (query.value("Tpassword").toString() == password) {
                    corrent = true;
                    break;
                }
            }

            if (corrent) { // 密码正确
                for (int i = 0; i < query.record().count();
                     i++) qDebug() << query.value(i).toString() << '\t';
                QMessageBox::about(this, "关于", "这是教师模块");
            }
            else { // 密码错误，要求用户重新输入
                QMessageBox::about(this, "警告",
                                   "密码错误，请检查并重新输入");
            }
        }
    }
}

// 读取账号
// void Widget::on_lineEditAcount_editingFinished()
// {
//    acount = ui->lineEditAcount->text();
// }

// 读取密码
// void Widget::on_lineEditPassword_editingFinished()
// {
//    password = ui->lineEditPassword->text();
// }

//选择学生
void Widget::on_radioButtonstudent_clicked()
{
    role = 1;
}

//选择教师
void Widget::on_radioButtonadmin_clicked()
{
    role = 2;
}

//选择管理员
void Widget::on_radioButtonteacher_clicked()
{
    role = 3;
}
