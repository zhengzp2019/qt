#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void mousePressEvent(QMouseEvent *event);//鼠标点击事件
    void mouseMoveEvent(QMouseEvent *event);//鼠标移动事件
    void wheelEvent(QWheelEvent *event);//滚轮事件
    void keyPressEvent(QKeyEvent *event);//键盘事件

    void resizeEvent(QResizeEvent *event);//大小改变事件
    void enterEvent(QEvent *event);//进入事件
    void leaveEvent(QEvent *event);//离开事件
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
