#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
#include <QPixmap>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(400, 300);

    // 取出菜单栏
    QMenuBar *menu_bar1 = this->menuBar();

    // 向菜单栏添加菜单
    QMenu *file_menu = menu_bar1->addMenu("文件");

    //    QMenu *edit_menu = menu_bar1->addMenu("编辑");

    // 向菜单中添加菜单项
    QAction *open_action = file_menu->addAction("打开");

    file_menu->addSeparator(); // 添加菜单项的分割线
    QAction *save_action = file_menu->addAction("保存");

    // 获取工具栏
    QToolBar *tool_bar = this->addToolBar("");

    // 向工具栏中添加工具（获取菜单项）
    tool_bar->addAction(open_action);
    tool_bar->addAction(save_action);

    // 取出状态栏
    QStatusBar *status = this->statusBar();

    status->addWidget(new QLabel("状态")); // 向状态栏添加控件

    //    创建一个铆接部件
    QDockWidget *dock_widget = new QDockWidget("这是一个铆接部件", this);

    //    将浮动窗口添加到mainwindow
    this->addDockWidget(Qt::TopDockWidgetArea, dock_widget);
    QTextEdit *text_edit = new QTextEdit("文本编辑器", this);

    this->setCentralWidget(text_edit);

    QPixmap pic;                               // 定义一个图片对象

    //    :/new/prefix1/image/earth.jpg
    pic.load(":/new/prefix1/image/earth.jpg"); // 给图片对象加载图片
    open_action->setIcon(QIcon(pic));
}

MainWindow::~MainWindow()
{}
