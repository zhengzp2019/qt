#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPixmap>
#include<QDebug>
#include<QMouseEvent>
#include<QTime>
#include<QtGlobal>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    i=0;j=0;
}

void Widget::paintEvent(QPaintEvent *event)
{
    qsrand(time(NULL));
    i=rand()%this->width();
    while(i<0||i>this->width()-100)
    {
        i=rand()%this->width();
    }
    j=rand()%this->height();
    while(j<0||j>this->height()-100)
    {
        j=rand()%this->height();
    }
    QPainter p(this);
    p.drawPixmap(i,j,100,100,QPixmap("://qt_image/earth.jpg"));
    this->update();
}

//void Widget::mousePressEvent(QMouseEvent *event)
//{
//    i=event->x();//返回鼠标事件的横坐标
//    j=event->y();//返回鼠标事件的纵坐标
//    //刷新绘图
//    this->update();
//}

Widget::~Widget()
{
    delete ui;
}

