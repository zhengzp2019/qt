#include "widget.h"
#include "ui_widget.h"
#include<QMouseEvent>
#include<QDebug>
#include<QKeyEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标点击"<<event->x()<<event->y();
    if(event->button()==Qt::LeftButton)
    {
        qDebug()<<"点击了左键";
    }
    else if(event->button()==Qt::RightButton)
    {
        qDebug()<<"点击了右键";
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
     qDebug()<<"鼠标移动"<<event->x()<<event->y();
}

void Widget::wheelEvent(QWheelEvent *event)
{
    if(event->orientation()==Qt::Vertical)
    {
        qDebug()<<"滚轮事件"<<event->x()<<event->y();
    }
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<event->key();
    if(event->modifiers() == Qt::ShiftModifier)
    {
        qDebug()<<"shift";
    }
    if(event->modifiers() == Qt::ControlModifier)
    {
        qDebug()<<"ctrl";
    }
}

void Widget::resizeEvent(QResizeEvent *event)
{
    qDebug()<<event->oldSize();
    qDebug()<<event->size();
}

void Widget::enterEvent(QEvent *event)
{
    qDebug()<<"进入";
}

void Widget::leaveEvent(QEvent *event)
{
    qDebug()<<"离开";
}

Widget::~Widget()
{
    delete ui;
}

