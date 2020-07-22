#include "widget.h"
#include "ui_widget.h"
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);//设置密码模式
//    ui->lineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->lineEdit->setTextMargins(5,0,0,0);//设置行编辑间距
    ui->lineEdit->setText("hello");
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
    qDebug()<<ui->lineEdit->text();//获取行编辑内容
}
