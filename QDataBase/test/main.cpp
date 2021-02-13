#include "login.h"
#include "database.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (database::connect("QMYSQL", "root", "root", "test"))
    {
        Login *login = new Login();
        login->show();
    }
    else QMessageBox::about(NULL, "关于", "数据库连接错误！程序运行结束");
    return a.exec();
}
