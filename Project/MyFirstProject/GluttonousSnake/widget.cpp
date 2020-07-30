#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QKeyEvent>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->resize(600, 368);
    QPainter p(this);

    p.drawPixmap(0, 0, this->width(), this->height(),
                 QPixmap(":/new/prefix1/Image/207224.jpg"));
    snake.append(QRectF(300, 180, snakeNodeWidth, snakeNodeHeight));
    addTop();
    addTop();

    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(timeOut()));

    addNewReward();
}

//按键时间处理
void Widget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:

        if (moveFlage != Down) {
            moveFlage = Up;
        }
        break;

    case Qt::Key_Down:

        if (moveFlage != Up) {
            moveFlage = Down;
        }
        break;

    case Qt::Key_Right:

        if (moveFlage != Left) {
            moveFlage = Right;
        }
        break;

    case Qt::Key_Left:

        if (moveFlage != Right) {
            moveFlage = Left;
        }
        break;

    case Qt::Key_Space:

        if (!gameStart) {
            timer->start(time);
            gameStart = true;
        }
        else {
            timer->stop();
            gameStart = false;
        }
        break;

    case Qt::Key_Escape:
        this->close();
        break;

    default:
        break;
    }
}

// 超时事件
void Widget::timeOut()
{
    int count = 1;

    if (snake.at(0).intersects(rewardNode)) {
        addNewReward();
        count++;
    }

    while (count--) {
        switch (moveFlage) {
        case Up:
            addTop();
            break;

        case Down:
            addDown();
            break;

        case Right:
            addRight();
            break;

        case Left:
            addLeft();
            break;

        default:
            break;
        }
    }

    deleteLast();
    update();
}

// 添加新的方块
void Widget::addNewReward() {
    rewardNode = QRectF(
        qrand() % (this->width() / 20) * 20,
        qrand() % (this->height() / 20) * 20,
        snakeNodeWidth,
        snakeNodeWidth);
}

// 各个方向的运动实现

// 向上移动
void Widget::addTop()
{
    QPointF leftTop;
    QPointF rightBotom;

    if (snake.at(0).y() - snakeNodeHeight < 0) {
        leftTop = QPointF(
            snake.at(0).x(),                   // 左上角x坐标
            this->height() - snakeNodeHeight); // 左上角y坐标
        rightBotom = QPointF(
            snake.at(0).x() + snakeNodeWidth,
            this->height());
    } else {
        leftTop = QPointF(snake.at(0).x(),
                          snake.at(0).y() - snakeNodeHeight);
        rightBotom = snake.at(0).topRight();
    }

    snake.insert(0, QRectF(leftTop, rightBotom));
}

// 向下移动
void Widget::addDown()
{
    QPointF leftTop;
    QPointF rightBotom;

    if (snake.at(0).y() + snakeNodeHeight * 2 > this->height()) {
        leftTop = QPointF(snake.at(0).x(), 0);
        rightBotom = QPointF(snake.at(0).x() + snakeNodeWidth, snakeNodeHeight);
    } else {
        leftTop = snake.at(0).bottomLeft();
        rightBotom = snake.at(0).bottomRight() + QPointF(0, snakeNodeHeight);
    }

    snake.insert(0, QRectF(leftTop, rightBotom));
}

// 向左移动
void Widget::addLeft()
{
    QPointF leftTop;
    QPointF rightBotom;

    if (snake.at(0).x() - snakeNodeWidth < 0) {
        leftTop = QPointF(this->width() - snakeNodeWidth, snake[0].y());
    } else {
        leftTop = snake[0].topLeft() - QPointF(snakeNodeWidth, 0);
    }

    rightBotom = leftTop + QPointF(snakeNodeWidth, snakeNodeHeight);
    snake.insert(0, QRectF(leftTop, rightBotom));
}

// 向右移动
void Widget::addRight()
{
    QPointF leftTop;
    QPointF rightBotom;

    if (snake.at(0).x() + snakeNodeWidth * 2 > this->width()) {
        leftTop = QPointF(0, snake[0].y());
    } else {
        leftTop = snake[0].topRight();
    }

    rightBotom = leftTop + QPointF(snakeNodeWidth, snakeNodeHeight);
    snake.insert(0, QRectF(leftTop, rightBotom));
}

//删除结尾数据
void Widget::deleteLast()
{
    snake.removeLast();
}

// 绘制贪食蛇
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen     pen;   // 画笔，用于绘制轮廓
    QBrush   brush; // 画刷，用于填充

    QPixmap pix;

    pix.load("D:/tmp/snake.jpg");
    painter.drawPixmap(0, 0, 600, 368, pix);

    // 反锯齿
    painter.setRenderHint(QPainter::Antialiasing);

    pen.setColor(Qt::black);
    brush.setColor(Qt::darkMagenta);
    brush.setStyle(Qt::SolidPattern);
    painter.setPen(pen);
    painter.setBrush(brush);

    for (int i = 0; i < snake.length(); i++) {
        painter.drawRect(snake.at(i));
    }

    brush.setColor(Qt::red);
    painter.setBrush(brush);
    painter.drawEllipse(rewardNode);

    pen.setColor(Qt::black);
    painter.setPen(pen);
    QFont font("微软雅黑", 12, QFont::ExtraLight, false);

    painter.setFont(font);
    painter.drawText(560, 32, QString("%1").arg(snake.length()));

    if (checkContact()) {
        QFont font("方正舒体", 30, QFont::ExtraLight, false);
        painter.setFont(font);
        painter.drawText((this->width() - 300) / 2,
                         (this->height() - 30) / 2,
                         QString("GAME OVER!"));
        timer->stop();
    }

    QWidget::paintEvent(event);
}

// 失败检测
// 判断蛇头是否和蛇身相撞, 以及蛇身和蛇身相撞
bool Widget::checkContact()
{
    for (int i = 0; i < snake.length(); i++) {
        for (int j = i + 1; j < snake.length(); j++) {
            if (snake.at(i) == snake.at(j)) {
                return true;
            }
        }
    }

    return false;
}

Widget::~Widget()
{
    delete ui;
}
