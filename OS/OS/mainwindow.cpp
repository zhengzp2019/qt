#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
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
    this->resize(800, 600);
    loadStyleSheet(":/new/prefix1/MyStyle/MyStyle.qss");

    // 初始化窗口
    this->setWindowTitle("操作系统课程设计                        指导老师：纪霞");

    // 取菜单栏
    QMenuBar *menubar = this->menuBar();

    //    menubar->setStyleSheet("QMenuBar{background:rgb(0,1,1)}");
    //    添加菜单
    QMenu *file_menu = menubar->addMenu("文件");

    //    file_menu->setStyleSheet("QMenu{background:rgb(1,1,0)}");
    //    QMenu   *help_menu = menubar->addMenu("帮助");
    //    QAction *begin_action = file_menu->addAction("开始");
    QAction *exit_action = file_menu->addAction("退出");

    //    QAction *help_action = help_menu->addAction("帮助文档");

    connect(exit_action, &QAction::triggered, this, &MainWindow::close);

    //    connect(begin_action, &QAction::triggered, this, [this]() {});
    QLabel *title_label, *member_content_label;

    // 显示标题标签
    title_label = new QLabel(this);
    title_label->resize(300, 30);
    title_label->move(250, 80);
    title_label->setText("操作系统模拟程序");

    title_label->setStyleSheet(
        "QLabel{border-radius: 5px;color:red;font-size: 35px;}");

    // 显示小组成员信息
    member_content_label = new QLabel(this);
    member_content_label->resize(500, 200);
    member_content_label->move(230, 150);
    member_content_label->setText(
        "班级：18软件工程一班\n组长：郑展鹏\n组员：檀宁航 高盈盈 夏迎庆 孙小溪\n组号：9");

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
    QString runPath = QCoreApplication::applicationDirPath();

    runPath.append("../");

    qDebug() << runPath;
}

void MainWindow::myRun()
{}

void MainWindow::myHelp()
{}

// 加载样式表配置文件
void MainWindow::loadStyleSheet(const QString& sheetName)
{
    QFile file(sheetName);

    file.open(QFile::ReadOnly);

    if (file.isOpen())
    {
        QString styleSheet = this->styleSheet();
        styleSheet += QLatin1String(file.readAll());
        this->setStyleSheet(styleSheet);
    }
}

// 设置新的样式
void MainWindow::setNewStyleSheet(QString styleSheet)
{
    QString oldStyleSheet = this->styleSheet();

    styleSheet += oldStyleSheet;
    this->setStyleSheet(styleSheet);
}

MainWindow::~MainWindow()
{
    delete ui;
}
