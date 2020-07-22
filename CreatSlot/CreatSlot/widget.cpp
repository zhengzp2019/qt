#include "widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton;
    button->setParent(this);
    button->setText("输出郑展鹏");
    //注册信号与槽的连接
    //槽函数可以是普通成员函数 也可以是槽函数
    //如果信号没参数则槽函数也没参数 如果信号有参数则槽函数参数可有可无
    connect(button,&QPushButton::pressed,this,&Widget::print);
}

void  Widget::print()
{
    qDebug()<<"郑展鹏";
}

Widget::~Widget()
{
}

