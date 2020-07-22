#ifndef WIDGET_H
#define WIDGET_H
#include<QPushButton>
#include <QWidget>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *button;
public slots:
    void  print();//槽函数
};
#endif // WIDGET_H
