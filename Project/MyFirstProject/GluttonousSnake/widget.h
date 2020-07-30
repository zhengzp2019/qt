#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:

    Widget(QWidget *parent = nullptr);
    ~Widget();

private:

    Ui::Widget *ui;
    enum Direct { Left, Right, Up, Down }; // 方向

    QList<QRectF>snake;                    // 贪吃蛇本体

    int snakeNodeWidth = 20;
    int snakeNodeHeight = 20;
    QTimer *timer;

    int time = 150;
    int moveFlage = Up;
    bool gameStart = false;

    QRectF rewardNode;

protected:

    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *);

    void addTop();
    void addDown();
    void addLeft();
    void addRight();

    void deleteLast();
    bool checkContact();
    void addNewReward();

protected slots:

    void timeOut();
};
#endif // WIDGET_H
