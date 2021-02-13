#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QString>
#include <QSqlQuery>
namespace Ui {
class Admin;
}

class Admin : public QMainWindow {
    Q_OBJECT

public:

    explicit Admin(QWidget *parent = 0,
                   QString  acount = "",
                   QString  ppasword = "");
    void loadStyleSheet(const QString& sheetName);
    ~Admin();

private slots:

    void on_actionAddStudent_triggered();

    void on_searchStudent_clicked();

    void on_searchTeacher_clicked();

    void on_addTeacherButton_clicked();

    void on_actionAddTeacher_triggered();

    void on_addStudentButton_clicked();

    void on_actionSearchStudent_triggered();

    void on_actionSearchTeacher_triggered();

    void on_actionSearchCourse_triggered();

    void on_addCourseButton_clicked();

    void on_dropCourseButton_clicked();

    void on_displayCourseButton_clicked();

    void on_pushButtonconfirmadd_clicked();

    void on_pushButtonundoadd_clicked();

    void on_pushButtonconfirmdelete_clicked();

    void on_pushButtonundodelete_clicked();

    void on_pushButtonsearch_clicked();

    void on_pushButtonrefresh_clicked();

    void on_actionAddCourse_triggered();

    void on_actionDropCourse_triggered();

    void on_tableViewcourse_doubleClicked(const QModelIndex& index);

    void on_pushButtonSconfirm_clicked();

    void on_pushButtonSundo_clicked();

    void on_pushButtontconfirm_clicked();

    void on_pushButtontundo_clicked();

    void on_pushButtonSTsearch_clicked();

private:

    Ui::Admin *ui;
    QString userName;                      // 当前管理员的用户名
    QString password;                      // 当前管理员的密码
    QString addUser_userName,              // 用户名
            addUser_password,              // 密码
            addUser_confirmPassword;       // 确认密码
    QString modifyPassword_Password,       // 修改密码
            modifyPassword_cofirmPassword; // 确认密码
    QString sql;                           // sql语句
    QSqlQuery query;                       // 操作sql语句
};

#endif // ADMIN_H
