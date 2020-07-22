#include "widget.h"
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("父窗口");
    this->resize(400,300);
    sonwinsow = new SonWidget;
    sonwinsow->show();
    button = new QPushButton("隐藏父窗口 显示子窗口",this);
    button->move(100,100);
    connect(button,&QPushButton::clicked,this,&Widget::but);
    //接收者接收到信号后，信号的参数会被槽函数接受
    connect(sonwinsow,&SonWidget::showHideSignal,this,&Widget::sin);
}

void Widget::sin(int a)
{
    //显示接收信号的参数
    qDebug()<<a;
    this->show();
    this->sonwinsow->hide();
}

void Widget::but()
{
    this->hide();
    this->sonwinsow->show();
}

Widget::~Widget()
{
}

