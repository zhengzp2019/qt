#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QDebug>
#include <QAction>
#include <QMenuBar>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 初始化窗口
    this->setWindowTitle("操作系统课程设计");
    this->resize(800, 600);

    // 取菜单栏
    QMenuBar *menubar = this->menuBar();

    //    添加菜单
    QMenu *file_menu = menubar->addMenu("文件");

    //    QMenu   *help_menu = menubar->addMenu("帮助");
    //    QAction *begin_action = file_menu->addAction("开始");
    QAction *exit_action = file_menu->addAction("退出");

    //    QAction *help_;action = help_menu->addAction("帮助文档");

    connect(exit_action, &QAction::triggered, this, &MainWindow::close);

    //    connect(begin_action, &QAction::triggered, this, [this]() {});
    QLabel *title_label, *member_content_label;

    // 显示标题标签
    title_label = new QLabel(this);
    title_label->resize(120, 30);
    title_label->move(50, 50);
    title_label->setText("操作系统模拟程序");

    // 显示小组成员信息
    member_content_label = new QLabel(this);
    member_content_label->resize(200, 200);
    member_content_label->move(100, 100);
    member_content_label->setText(
        "班级：18软件工程一班\n组长：郑展鹏\n组员：檀宁航\n 高盈盈\n 夏迎庆\n 孙小溪\n组号：1");

    // 创建四个按钮控制四个算法入口
    QPushButton *pb1, *pb2, *pb3, *pb4;

    pb1 = new QPushButton("进程管理", this);
    pb1->move(100, 400);
    pb1->resize(120, 30);
    pb2 = new QPushButton("作业调度", this);
    pb2->move(250, 400);
    pb2->resize(120, 30);
    pb3 = new QPushButton("存储管理", this);
    pb3->move(400, 400);
    pb3->resize(120, 30);
    pb4 = new QPushButton("设备管理", this);
    pb4->move(550, 400);
    pb4->resize(120, 30);

    // 创建四个进程，并将四个按钮与四个进程的信号和槽连接
    process_1 = new ProcessOne;
    process_2 = new ProcessSecond;
    process_3 = new ProcessThird;
    process_4 = new ProcessForth;
    connect(pb1, &QPushButton::clicked, process_1, &ProcessOne::show);
    connect(pb2, &QPushButton::clicked, process_2, &ProcessSecond::show);
    connect(pb3, &QPushButton::clicked, process_3, &ProcessThird::show);
    connect(pb4, &QPushButton::clicked, process_4, &ProcessForth::show);
}

void MainWindow::myRun()
{
    //    QLabel *title_label, *member_content_label;
    //    QPushButton *pb1, *pb2, *pb3, *pb4; // 控制四个算法开始

    //    // 初始化标签
    //    title_label = new QLabel(this);
    //    title_label->resize(100, 20);
    //    title_label->move(100, 100);
    //    title_label->show();
    //    this->show();
}

void MainWindow::myHelp()
{}

MainWindow::~MainWindow()
{
    delete ui;
}
