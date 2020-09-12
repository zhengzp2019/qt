#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QString>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //    ui->lineEdit->setEchoMode(QLineEdit::Password); // 设置密码模式
    //    ui->lineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->lineEdit->setTextMargins(5, 0, 0, 0); // 设置行编辑间距
    QString str = "郑展鹏";

    qDebug() << str;
    ui->lineEdit->setText("");
    str = ui->lineEdit->text();
    qDebug() << str;

    //    connect(ui->lineEdit,&QLineEdit::returnPressed,this,[=](){
    //        qDebug()<<ui->lineEdit->text();
    //    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_lineEdit_returnPressed()
{
    static int n = 1;

    qDebug() << ui->lineEdit->text(); // 获取行编辑内容
    qDebug() << n << "次输入enter\n";    // 获取行编辑内容
    n++;
}
