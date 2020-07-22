#include "widget.h"
#include<QPixmap>
#include<QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(800,600);
    label = new QLabel(this);
    label->resize(100,100);
    label->move(50,50);
    //label->setText("我是一个标签");
    label->setText("<a href = \"http://www.baidu.com\">百度一下</a>");
    label->setOpenExternalLinks(true);//设置点击链接自动打开

    label_img = new QLabel(this);
    label_img->resize(100,100);
    label_img->move(200,200);
    //label->setText("我是一个标签");
    label_img->setPixmap(QPixmap(":/new/prefix1/image/earth.jpg"));
    label_img->setScaledContents(true);//设置自适应大小

    label_gif = new QLabel(this);
    label_gif->resize(200,200);
    label_gif->move(300,200);
    QMovie * move = new QMovie(":/new/prefix1/image/2007203.gif");//建立一个动图对象
    label_gif->setMovie(move);
    label_gif->setScaledContents(true);
    move->start();//启动动图

}

Widget::~Widget()
{
}

