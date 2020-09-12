#include "processsecond.h"
#include <QMenu>
#include <QDebug>
#include <QAction>
#include <QString>

ProcessSecond::ProcessSecond(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("作业调度");
    this->resize(800, 800);
    menu_bar = this->menuBar();
    file_menu = menu_bar->addMenu("文件");
    exit = file_menu->addAction("退出");
    connect(exit, &QAction::triggered, this, &ProcessSecond::close);


// 创建两个QLineEdit对象
inputWork = new QLineEdit(this);
labelWork = new QLabel(this);
labelWork->move(660,75);
labelWork->setText("初始化作业数");

inputTLength = new QLineEdit(this);
labelTLength = new QLabel(this);
labelTLength->move(660,175);
labelTLength->setText("时间片长度");

// 设置列编辑对象的位置和大小
inputWork->move(660, 50);
inputWork->resize(90, 30);

inputTLength->move(660, 150);
inputTLength->resize(90, 30);

// 输入提示
inputWork->setPlaceholderText("");
connect(inputWork, &QLineEdit::returnPressed, this, [ = ]() {
    qDebug() << inputWork->text();
});
inputTLength->setPlaceholderText("");
connect(inputTLength, &QLineEdit::returnPressed, this, [ = ]() {
    qDebug() << inputTLength->text();
});

// 创建三个按钮，初始化，开始模拟程序与清空页面
initialize = new QPushButton("初始化", this);
//调整按钮位置与大小
initialize->move(660, 470);
initialize->resize(70, 30);
//connect(initialize,&QPushButton::clicked, this, &ProcessSecond::)

begin = new QPushButton("开始模拟", this);
//调整按钮位置与大小
begin->move(660, 470);
begin->resize(70, 30);
connect(begin, &QPushButton::clicked, this, &ProcessSecond::on_lineEdit_returnPressed);

clear = new QPushButton("清空屏幕", this);
// 调整按钮位置与大小
clear->move(660, 530);
clear->resize(70, 30);
connect(clear, &QPushButton::clicked, this, &ProcessSecond::clearScreen);
}

void ProcessSecond::on_lineEdit_returnPressed()
{
int n = 1;

qDebug() << "我执行了" << n << "次";

//        获取行编辑器的内容

qDebug() << inputWork->text() << endl;
qDebug() << inputTLength->text() << endl;
n++;
}

void ProcessSecond::clearScreen()
{
    inputWork->clear();
    inputTLength->clear();
}
