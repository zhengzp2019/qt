#include "admin.h"
#include "dbhandle.h"
#include "display.h"
#include "ui_admin.h"
#include <QAction>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QString>
#include <QAbstractItemView>
#include <QSqlError>
#include <QMessageBox>
#include <QModelIndex>
#include <QIcon>
#include <QFile>
Admin::Admin(QWidget *parent, QString acount, QString ppassword) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    this->setWindowTitle("管理员界面");
    this->resize(800, 600);

    //    loadStyleSheet(
    //        ":/new/prefix1/MyStyle/login.qss");
    userName = acount;
    password = ppassword;
    ui->label->setText("管理员");
    ui->stackedWidget->close();
}

Admin::~Admin()
{
    delete ui;
}

// 菜单栏添加学生
void Admin::on_actionAddStudent_triggered()
{
    ui->lineEditsName->clear();
    ui->lineEditspassword->clear();
    ui->lineEditsName->clear();

    if (ui->radioButtonsman->isChecked() || ui->radioButtonswoman->isChecked())
    {
        ui->radioButtonsman->setChecked(false);
        ui->radioButtonswoman->setChecked(false);
    }
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->addStudent);
    ui->label->setText("添加学生");
}

//按钮添加学生
void Admin::on_addStudentButton_clicked()
{
    ui->lineEditsName->clear();
    ui->lineEditspassword->clear();
    ui->lineEditsName->clear();

    if (ui->radioButtonsman->isChecked() || ui->radioButtonswoman->isChecked())
    {
        ui->radioButtonsman->setChecked(false);
        ui->radioButtonswoman->setChecked(false);
    }
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->addStudent);
    ui->label->setText("添加学生");
}

// 查找学生
void Admin::on_searchStudent_clicked()
{
    ui->lineEditID->clear();
    ui->radioButtonStudent->setCheckable(true);
    ui->radioButtonStudent->setChecked(true);
    ui->radioButtonTeacher->setCheckable(false);
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->Search);
    ui->label->setText("查找学生");
}

// 查找教师
void Admin::on_searchTeacher_clicked()
{
    ui->lineEditID->clear();
    ui->radioButtonTeacher->setCheckable(true);
    ui->radioButtonTeacher->setChecked(true);
    ui->radioButtonStudent->setCheckable(false);
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->Search);
    ui->label->setText("查找教师");
}

//按钮添加教师
void Admin::on_addTeacherButton_clicked()
{
    ui->lineEdittno->clear();
    ui->lineEdittpassword->clear();
    ui->lineEdittTName->clear();

    if (ui->radioButtontman->isChecked() ||
        ui->radioButtontwoman->isChecked())
    {
        ui->radioButtontman->setChecked(false);
        ui->radioButtontwoman->setChecked(false);
    }
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->addTeacher);
    ui->label->setText("添加教师");
}

// 菜单栏添加教师
void Admin::on_actionAddTeacher_triggered()
{
    ui->lineEdittno->clear();
    ui->lineEdittpassword->clear();
    ui->lineEdittTName->clear();

    if (ui->radioButtontman->isChecked() ||
        ui->radioButtontwoman->isChecked())
    {
        ui->radioButtontman->setChecked(false);
        ui->radioButtontwoman->setChecked(false);
    }
    ui->groupBox_2->clearFocus();
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->addTeacher);
    ui->label->setText("添加教师");
}

// 查看学生
void Admin::on_actionSearchStudent_triggered()
{
    Display *display = new Display("student");

    display->setWindowTitle("学生信息");
    display->show();
}

// 查看教师
void Admin::on_actionSearchTeacher_triggered()
{
    Display *display = new Display("teacher");

    display->setWindowTitle("教师信息");
    display->show();
}

// 添加课程
void Admin::on_addCourseButton_clicked()
{
    ui->lineEditccard->clear();
    ui->lineEditcmaxnum->clear();
    ui->lineEditcnameadd->clear();
    ui->lineEditcno->clear();
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->addCourse);
    ui->label->setText("添加课程");
}

//删除课程
void Admin::on_dropCourseButton_clicked()
{
    ui->lineEditcnamedelete->clear();
    ui->stackedWidget->show();
    ui->widgetdelete->show();
    ui->stackedWidget->setCurrentWidget(ui->display);
    ui->pushButtonconfirmdelete->close();
    ui->pushButtonundodelete->close();
    ui->pushButtonrefresh->close();
    ui->tableViewcourse->close();
    ui->label->setText("删除课程");
}

// 显示课程
void Admin::on_displayCourseButton_clicked()
{
    ui->stackedWidget->show();
    ui->widgetdelete->close();
    ui->pushButtonconfirmdelete->close();
    ui->pushButtonundodelete->close();
    ui->pushButtonrefresh->close();
    ui->stackedWidget->setCurrentWidget(ui->display);
    ui->label->setText("以开设课程");
    QSqlTableModel *model = new QSqlTableModel;

    model->setTable("course");
    model->select();
    model->setHeaderData(0, Qt::Horizontal, "课程号");
    model->setHeaderData(1, Qt::Horizontal, "课程名");
    model->setHeaderData(2, Qt::Horizontal, "学分");
    model->setHeaderData(3, Qt::Horizontal, "课程总量");
    ui->tableViewcourse->setModel(model);
    ui->tableViewcourse->show();
    ui->tableViewcourse->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewcourse->setSelectionBehavior(QAbstractItemView::SelectRows);
}

// 确定添加课程
void Admin::on_pushButtonconfirmadd_clicked()
{
    query.exec("start transaction");
    QString cno = ui->lineEditcno->text();
    QString cname = ui->lineEditcnameadd->text();
    QString cmaxnum = ui->lineEditcmaxnum->text();
    QString ccard = ui->lineEditccard->text();

    sql =
        QString(
            "insert into course values('%1','%2','%3','%4')"
            ).arg(cno,
                  cname,
                  ccard,
                  cmaxnum);

    if (query.exec(sql))
    {
        ui->statusbar->showMessage("课程添加成功");
    }
    else
    {
        ui->statusbar->setToolTip(query.lastError().text());
    }
}

// 撤销添加课程
void Admin::on_pushButtonundoadd_clicked()
{
    if (query.exec("rollback"))
    {
        ui->statusbar->showMessage("撤销成功");
    }
    else
    {
        ui->statusbar->showMessage(query.lastError().text());
    }
    ui->lineEditcno->clear();
    ui->lineEditcnameadd->clear();
    ui->lineEditccard->clear();
    ui->lineEditcmaxnum->clear();
}

// 确定删除课程
void Admin::on_pushButtonconfirmdelete_clicked()
{
    // 提交事务，彻底删除
    int select = QMessageBox::question(this, "询问", "该操作会彻底删除课程，请问您是否要继续",
                                       QMessageBox::No | QMessageBox::Yes,
                                       QMessageBox::No);

    if (select == QMessageBox::Yes)
    {
        query.exec("commit");
        ui->statusbar->showMessage("课程以彻底删除");
    }
}

// 撤销删除课程
void Admin::on_pushButtonundodelete_clicked()
{
    // 回滚，撤销
    if (query.exec("rollback"))
    {
        ui->statusbar->showMessage("撤销成功");
    }
    else
    {
        ui->statusbar->showMessage(query.lastError().text());
    }
}

// 查找要删除的课程
void Admin::on_pushButtonsearch_clicked()
{
    static bool first = true;

    if (first)
    {
        QMessageBox::about(this, "关于", "请选择所要删除的课程名程\n若选择其他信息则无法成功删除");
        first = !first;
    }
    ui->pushButtonconfirmdelete->show();
    ui->pushButtonrefresh->show();
    ui->pushButtonundodelete->show();
    QString cname = ui->lineEditcnamedelete->text();
    QSqlTableModel *model = new QSqlTableModel;

    model->setTable("course");
    model->setFilter(QString("cname LIKE '%%1%'").arg(cname));

    if (model->select())
    {
        ui->statusbar->showMessage("查询成功");
        model->setHeaderData(0, Qt::Horizontal, "课程号");
        model->setHeaderData(1, Qt::Horizontal, "课程名");
        model->setHeaderData(2, Qt::Horizontal, "学分");
        model->setHeaderData(3, Qt::Horizontal, "课程总量");
        ui->tableViewcourse->setModel(model);
        ui->tableViewcourse->show();
    }
    else
    {
        QMessageBox::critical(this, tr("警告"), model->lastError().text());
    }
}

//删除课程后，刷新课程显示
void Admin::on_pushButtonrefresh_clicked()
{
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentWidget(ui->display);
    ui->label->setText("删除课程");
    QSqlTableModel *model = new QSqlTableModel;

    model->setTable("course");
    model->select();
    model->setHeaderData(0, Qt::Horizontal, "课程号");
    model->setHeaderData(1, Qt::Horizontal, "课程名");
    model->setHeaderData(2, Qt::Horizontal, "学分");
    model->setHeaderData(3, Qt::Horizontal, "课程总量");
    ui->tableViewcourse->setModel(model);
    ui->tableViewcourse->show();
}

// 菜单栏添加课程
void Admin::on_actionAddCourse_triggered()
{
    ui->stackedWidget->show();
    ui->lineEditccard->clear();
    ui->lineEditcmaxnum->clear();
    ui->lineEditcnameadd->clear();
    ui->lineEditcno->clear();
    ui->stackedWidget->setCurrentWidget(ui->addCourse);
    ui->label->setText("添加课程");
}

// 菜单栏删除课程
void Admin::on_actionDropCourse_triggered()
{
    ui->lineEditcnamedelete->clear();
    ui->stackedWidget->show();
    ui->widgetdelete->show();
    ui->stackedWidget->setCurrentWidget(ui->display);
    ui->pushButtonconfirmdelete->close();
    ui->pushButtonundodelete->close();
    ui->pushButtonrefresh->close();
    ui->tableViewcourse->close();
    ui->label->setText("删除课程");
}

// 菜单栏显示课程信息
void Admin::on_actionSearchCourse_triggered()
{
    ui->stackedWidget->show();
    ui->widgetdelete->close();
    ui->pushButtonconfirmdelete->close();
    ui->pushButtonundodelete->close();
    ui->pushButtonrefresh->close();
    ui->stackedWidget->setCurrentWidget(ui->display);
    ui->label->setText("显示课程");
    QSqlTableModel *model = new QSqlTableModel;

    model->setTable("course");
    model->select();
    model->setHeaderData(0, Qt::Horizontal, "课程号");
    model->setHeaderData(1, Qt::Horizontal, "课程名");
    model->setHeaderData(2, Qt::Horizontal, "学分");
    model->setHeaderData(3, Qt::Horizontal, "课程总量");
    ui->tableViewcourse->show();
    ui->tableViewcourse->setSelectionMode(QAbstractItemView::NoSelection);
}

//选中要删除的课程,并删除
void Admin::on_tableViewcourse_doubleClicked(const QModelIndex& index)
{
    // 开启一个事务
    query.exec("start transaction");
    sql =
        QString("delete from course where cname='%1'").arg(index.data().toString());

    if (query.exec(sql))
    {
        ui->statusbar->showMessage("课程已删除");
    }
}

// 确认添加学生
void Admin::on_pushButtonSconfirm_clicked()
{
    query.exec("start transaction");
    QString name = ui->lineEditsName->text();
    QString sno = ui->lineEditsno->text();
    QString age = ui->spinBoxsage->text();
    QString sex = "";

    if (ui->radioButtonsman->isChecked()) sex = "男";

    else if (ui->radioButtonswoman->isChecked()) sex = "女";
    QString year = ui->comboBoxsyear->currentText();
    QString password = ui->lineEditspassword->text();
    QString major = ui->comboBoxsmajor->currentText();

    if (name.isEmpty() || sno.isEmpty() || age.isEmpty() || sex.isEmpty() ||
        year.isEmpty() || password.isEmpty() || major.isEmpty())
    {
        // 输入错误，需重新输入
        QMessageBox::critical(this, "警告", "学生信息输入错误，添加失败");
    }
    else
    {
        sql =
            QString(
                "insert into student values('%1','%2','%3','%4','%5','%6','%7')").
            arg(
                sno,
                name,
                sex,
                age,
                major,
                year,
                password);

        if (query.exec(sql)) ui->statusbar->showMessage("学生添加成功");
        else ui->statusbar->showMessage(query.lastError().text());
    }
}

// 撤销添加学生
void Admin::on_pushButtonSundo_clicked()
{
    if (query.exec("rollback")) ui->statusbar->showMessage("撤销成功");
    else ui->statusbar->showMessage(query.lastError().text());
}

// 添加教师
void Admin::on_pushButtontconfirm_clicked()
{
    // 开启一个事务
    if (query.exec("start transaction")) ui->statusbar->showMessage("事务以开启");
    else ui->statusbar->showMessage("事务开启失败");
    QString name = ui->lineEdittTName->text();
    QString tno = ui->lineEdittno->text();
    QString password = ui->lineEdittpassword->text();
    QString sex = "";

    if (ui->radioButtontman->isChecked()) sex = "男";
    else if (ui->radioButtontwoman->isChecked()) sex = "女";
    QString post = ui->comboBoxpost->currentText();
    QString age = ui->spinBoxtage->text();

    sql =
        QString("insert into teacher values('%1','%2','%3','%4','%5','%6')").arg(
            tno,
            name,
            age,
            sex,
            post,
            password);

    if (tno.isEmpty() || name.isEmpty() || age.isEmpty() || sex.isEmpty() ||
        post.isEmpty() || password.isEmpty())
    { // 教师信息输入错误
        QMessageBox::about(this, "警告", "教师信息输入错误，添加失败");
    }

    if (query.exec(sql)) ui->statusbar->showMessage("教师添加成功");
    else ui->statusbar->showMessage(query.lastError().text());
}

// 撤销添加教师
void Admin::on_pushButtontundo_clicked()
{
    if (query.exec("rollback")) ui->statusbar->showMessage("撤销成功");
    else ui->statusbar->showMessage(query.lastError().text());
}

// 查找教师或学生
void Admin::on_pushButtonSTsearch_clicked()
{
    QString name = ui->lineEditID->text();
    QSqlTableModel *model = new QSqlTableModel;

    // 查找学生
    if (ui->radioButtonStudent->isChecked())
    {
        model->setTable("student");
        model->setHeaderData(0, Qt::Horizontal, "学号");
        model->setHeaderData(1, Qt::Horizontal, "姓名");
        model->setHeaderData(2, Qt::Horizontal, "性别");
        model->setHeaderData(3, Qt::Horizontal, "年龄");
        model->setHeaderData(4, Qt::Horizontal, "学院");
        model->setHeaderData(5, Qt::Horizontal, "入学年份");
        model->setHeaderData(6, Qt::Horizontal, "密码");
        model->setFilter(QString("sname like '%%1%'").arg(name));
    }
    else if (ui->radioButtonTeacher->isChecked())
    { // 查找教师
        model->setTable("teacher");
        model->setHeaderData(0, Qt::Horizontal, "职工号");
        model->setHeaderData(1, Qt::Horizontal, "姓名");
        model->setHeaderData(2, Qt::Horizontal, "年龄");
        model->setHeaderData(3, Qt::Horizontal, "性别");
        model->setHeaderData(4, Qt::Horizontal, "职称");
        model->setHeaderData(5, Qt::Horizontal, "密码");
        model->setFilter(QString("tname like '%%1%'").arg(name));
    }
    else
    {
        QMessageBox::about(this, "警告", "请选择查看用户的身份");
    }

    if (model->select())
    {
        ui->tableView->setModel(model);
        ui->tableView->show();
        ui->statusbar->showMessage("查询成功");
    }
    else ui->statusbar->showMessage("查询失败");
}

// 加载样式表配置文件
void Admin::loadStyleSheet(const QString& sheetName)
{
    QFile file(sheetName);

    file.open(QFile::ReadOnly);

    if (file.isOpen()) {
        QString styleSheet = this->styleSheet();
        styleSheet += QLatin1String(file.readAll());
        this->setStyleSheet(styleSheet);
    }
}
