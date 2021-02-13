#include "widget.h"
#include "dbhandle.h"
#include <QDebug>
#include <QMessageBox>
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMessageBox::about(NULL, "欢迎", "欢迎使用学生管理系统");

    // (驱动，用户名，密码，数据库名称)
    if (!Dbhandle::connect("QMYSQL", "root", "root", "studentmanager"))
    {
        QMessageBox::about(NULL, "出错", "数据库连接错误，程序停止运行");
    }
    else
    { // 进入登录界面
        Widget *login = new Widget;
        login->show();
    }
    return a.exec();
}
