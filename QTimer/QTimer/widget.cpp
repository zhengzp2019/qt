#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    t = new QTimer;
    //设置定时器的超时事件 如果超时会发出一个超时信号
    connect(t,&QTimer::timeout,this,[](){
       qDebug()<<"timeout";
    });
    //定时器必须启动
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    t->start(1000);//启动定时器 1ms超时一次
}

void Widget::on_pushButton_2_clicked()
{
    t->stop();//停止定时器
}
