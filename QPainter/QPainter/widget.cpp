#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include<QDebug>
#include<QPixmap>
#include<QPen>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::paintEvent(QPaintEvent *event)
{
    //绘图一定需要在这个函数中绘图
    //画家
    QPainter p(this);//定义一个画家，并且指定了绘图设备
    p.drawPixmap(0,0,this->width(),this->height(),QPixmap("://qt_image/earth.jpg"));
//    p.drawLine(50,50,300,300);
    QPen pen;
    pen.setBrush(Qt::red);//设置笔的填充颜色，也可以使用setcolor()
    pen.setWidth(3);//设置笔的宽度
    p.setPen(pen);//将笔给到画家
    p.drawEllipse(QRectF(50,50,100,100));//画一个矩形
}

Widget::~Widget()
{
    delete ui;
}

