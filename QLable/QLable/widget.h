#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QLabel *label;
    QLabel *label_img;
    QLabel *label_gif;
};
#endif // WIDGET_H
