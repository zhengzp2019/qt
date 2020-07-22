#ifndef SONWIDGET_H
#define SONWIDGET_H
#include<QWidget>
#include<QPushButton>

class SonWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SonWidget(QWidget *parent = nullptr);
    QPushButton *button;
signals://定义信号
    //信号没有返回值，可以有参数 信号函数不需要定义，只需要声明
    void showHideSignal(int a);
public slots://发送信号
    void emitMysignal();
};

#endif // SONWIDGET_H
