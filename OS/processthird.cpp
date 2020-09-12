#include "processthird.h"

ProcessThird::ProcessThird(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("存储管理");
    this->resize(800, 800);
    begin = new QPushButton("开始模拟", this);
    clear = new QPushButton("清空屏幕", this);
    display = new QPushButton("显示序列", this);
    begin->move(100, 100);
    clear->move(200, 200);
    display->move(300, 300);
}

void ProcessThird::clear_screen()
{}
