#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //this

    b=new mybutton;
    b->setParent(this);
}

Widget::~Widget()
{
}

