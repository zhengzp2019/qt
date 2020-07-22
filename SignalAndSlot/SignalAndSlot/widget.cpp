#include "widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(400,300);
    //创建一个按钮 点击按钮关闭窗口
    //this->close();
    QPushButton *p=new QPushButton("关闭窗口",this);
    p->resize(100,100);
    p->move(50,50);
    //设置连接 点击按钮产生信号 会调用窗口的
    connect(p,&QPushButton::clicked,this,&QWidget::close);
}

Widget::~Widget()
{
}

