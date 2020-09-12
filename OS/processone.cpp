#include "processone.h"
#include <QMenu>
#include <QDebug>
#include <QAction>
#include <QString>
ProcessOne::ProcessOne(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("进程管理");
    this->resize(800, 600);
    menu_bar = this->menuBar();
    QMenu *file_menu = menu_bar->addMenu("文件");

    //    QAction *do_action = file_menu->addAction("操作");
    //    QAction *show_action = file_menu->addAction("显示");
    QAction *exit_action = file_menu->addAction("退出");

    connect(exit_action, &QAction::triggered, this, &QMainWindow::close);

    // 创建9个QLineEdit对象
    inputA = new QLineEdit(this);
    labelA = new QLabel(this);
    labelA->move(50, 50);
    labelA->setText("资源A变化情况");

    inputB = new QLineEdit(this);
    labelB = new QLabel(this);
    labelB->move(230, 50);
    labelB->setText("资源B变化情况");

    inputC = new QLineEdit(this);
    labelC = new QLabel(this);
    labelC->move(410, 50);
    labelC->setText("资源C变化情况");

    inputD = new QLineEdit(this);
    labelD = new QLabel(this);
    labelD->move(650, 50);
    labelD->setText("模拟进程总数");

    inputE = new QLineEdit(this);
    labelE = new QLabel(this);
    labelE->move(650, 120);
    labelE->setText("初始化进程数");

    inputF = new QLineEdit(this);
    labelF = new QLabel(this);
    labelF->move(650, 190);
    labelF->setText("资源A总数");

    inputG = new QLineEdit(this);
    labelG = new QLabel(this);
    labelG->move(650, 260);
    labelG->setText("资源B总数");

    inputH = new QLineEdit(this);
    labelH = new QLabel(this);
    labelH->move(650, 330);
    labelH->setText("资源C总数");

    inputI = new QLineEdit(this);
    labelI = new QLabel(this);
    labelI->move(650, 400);
    labelI->setText("时间片长度");


    // 设置行和列编辑对象的位置和大小

    inputA->move(50, 25);
    inputA->resize(90, 30);

    inputB->move(230, 25);
    inputB->resize(90, 30);

    inputC->move(410, 25);
    inputC->resize(90, 30);

    inputD->move(650, 75);
    inputD->resize(90, 30);

    inputE->move(650, 145);
    inputE->resize(90, 30);

    inputF->move(650, 215);
    inputF->resize(90, 30);

    inputG->move(650, 285);
    inputG->resize(90, 30);

    inputH->move(650, 355);
    inputH->resize(90, 30);

    inputI->move(650, 425);
    inputI->resize(90, 30);


    inputA->setPlaceholderText(""); // 输入提示信息
    connect(inputA, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputA->text();
    });
    inputB->setPlaceholderText("");
    connect(inputB, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputB->text();
    });
    inputC->setPlaceholderText("");
    connect(inputC, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputC->text();
    });

    inputD->setPlaceholderText("");
    connect(inputD, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputD->text();
    });
    inputE->setPlaceholderText("");
    connect(inputE, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputE->text();
    });
    inputF->setPlaceholderText("");
    connect(inputF, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputF->text();
    });
    inputG->setPlaceholderText("");
    connect(inputG, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputG->text();
    });
    inputH->setPlaceholderText("");
    connect(inputH, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputH->text();
    });
    inputI->setPlaceholderText("");
    connect(inputI, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputI->text();
    });

    // 创建两个按钮，开始模拟程序与清空页面
    begin = new QPushButton("开始模拟", this);

    // 调整按钮位置与大小
    begin->move(660, 470);
    begin->resize(70, 30);
    connect(begin,
            &QPushButton::clicked,
            this,
            &ProcessOne::on_lineEdit_returnPressed);

    clear = new QPushButton("清空屏幕", this);

    // 调整按钮位置与大小
    clear->move(660, 530);
    clear->resize(70, 30);
    connect(clear, &QPushButton::clicked, this, &ProcessOne::clearScreen);
}

void ProcessOne::on_lineEdit_returnPressed()
{
    int n = 1;

    qDebug() << "我执行了" << n << "次";

    //        获取行编辑器的内容

    qDebug() << inputA->text() << endl;
    qDebug() << inputB->text() << endl;
    qDebug() << inputC->text() << endl;
    qDebug() << inputD->text() << endl;
    qDebug() << inputE->text() << endl;
    qDebug() << inputF->text() << endl;
    qDebug() << inputG->text() << endl;
    qDebug() << inputH->text() << endl;
    qDebug() << inputI->text() << endl;
    n++;
}

void ProcessOne::clearScreen()
{
    inputA->clear();
    inputB->clear();
    inputC->clear();
    inputD->clear();
    inputE->clear();
    inputF->clear();
    inputG->clear();
    inputH->clear();
    inputI->clear();
}
