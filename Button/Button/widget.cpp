#include "widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    button=new QPushButton("郑展鹏",this);//在创建对象的同时指定按钮文本和父类
    button->show();
    //指定按钮的父类为窗口
    //button->setParent(this);//指定按钮的父亲是窗口
    //button->setText("郑展鹏");//指定按钮标签
    button->move(50,50);//指定按钮在窗口中位置
    button->resize(100,100);//指定按钮大小
    this->resize(400,300);//指定窗口大小
    button->parent();
    button->children();
}

Widget::~Widget()
{
}

