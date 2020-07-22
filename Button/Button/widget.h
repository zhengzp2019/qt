#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    //为了让按钮的生成期为程序结束，在这里定义一个按钮的指针
    QPushButton *button;
};
#endif // WIDGET_H
