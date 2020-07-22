#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include "sonwidget.h"
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    SonWidget *sonwinsow;
    QPushButton *button;
public slots:
    void  but();//接受button信号的槽函数
    void sin(int a);//接受子窗口信号的槽函数
};
#endif // WIDGET_H
