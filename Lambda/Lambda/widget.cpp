#include "widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton("点我",this);
    int a=10;
    //槽函数可以一个lambda表达式
    //Lambda表达式中[]写的是=，表示将上面的局部变量以值传递的方式传入Lambda表达式
    //Lambda表达式中[]写的是&，表示将上面的局部变量以引用传递的方式传入Lambda表达式
    //Lambda表达式中[]写的是a，表示将上面的局部变量a以值传递的方式传入Lambda表达式
    //Lambda表达式中[]写的是a和b,表示将上面的局部变量a和b以值传递的方式传入Lambda表达式
    //Lambda表达式中[]写的是&a，表示将上面的局部变量a以引用传递的方式传入Lambda表达式
    //mutable修饰，表示可以在lambda表达式中修改传入变量的值
    //->int表示lambda表达式返回值是一个int类型
    connect(button,&QPushButton::clicked,this,[&a]()mutable->int{
        a=100;
        qDebug()<<a;
        qDebug()<<"点我啊！";
        return a;
    });
}

Widget::~Widget()
{
}

