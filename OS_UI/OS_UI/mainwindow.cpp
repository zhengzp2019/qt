#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 初始化窗口
    this->setWindowTitle("操作系统课程设计");
    this->resize(800, 600);

    // 取菜单栏
    menu_bar = this->menuBar();

    //    添加菜单
    QMenu   *file_menu = menu_bar->addMenu("文件");
    QMenu   *help_menu = menu_bar->addMenu("帮助");
    QAction *begin_action = file_menu->addAction("开始");
    QAction *exit_action = file_menu->addAction("退出");
    QAction *help_action = help_menu->addAction("帮助文档");

    connect(exit_action, &QAction::triggered, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}
