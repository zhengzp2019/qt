#include "sonwidget.h"

SonWidget::SonWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("子窗口");
    this->resize(400,300);
    button = new QPushButton("显示父窗口 隐藏子窗口",this);
    button->move(100,100);
    connect(button,&QPushButton::clicked,this,&SonWidget::emitMysignal);
}

void SonWidget::emitMysignal()
{
    //点击按钮的槽函数 发送信号
    emit showHideSignal(10);//发送信号
}
