#include "processone.h"
#include <QMenu>
#include <QFile>
#include <QDebug>
#include <QAction>
#include <QString>
ProcessOne::ProcessOne(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("进程管理");
    this->resize(800, 600);
    loadStyleSheet(":/new/prefix1/MyStyle/MyStyle.qss");
    menu_bar = this->menuBar();
    QMenu *file_menu = menu_bar->addMenu("文件");

    //    QAction *do_action = file_menu->addAction("操作");
    //    QAction *show_action = file_menu->addAction("显示");
    QAction *exit_action = file_menu->addAction("退出");

    connect(exit_action, &QAction::triggered, this, &QMainWindow::close);

    // 创建显示窗口
    displayA = new QTextBrowser(this);
    displayB = new QTextBrowser(this);
    displayC = new QTextBrowser(this);
    displayAll = new QTextBrowser(this);
    displayA->move(50, 75);
    displayA->resize(90, 40);
    displayB->move(230, 75);
    displayB->resize(90, 40);
    displayC->move(410, 75);
    displayC->resize(90, 40);
    displayAll->move(50, 130);
    displayAll->resize(450, 450);

    // 创建9个QLineEdit对象
    labelA = new QLabel(this);
    labelA->move(50, 50);
    labelA->resize(130, 20);
    labelA->setText("资源A变化情况");

    labelB = new QLabel(this);
    labelB->move(230, 50);
    labelB->resize(130, 20);
    labelB->setText("资源B变化情况");

    labelC = new QLabel(this);
    labelC->move(410, 50);
    labelC->resize(130, 20);
    labelC->setText("资源C变化情况");

    inputD = new QLineEdit(this);
    labelD = new QLabel(this);
    labelD->move(650, 50);
    labelD->resize(120, 20);
    labelD->setText("模拟进程总数");

    inputE = new QLineEdit(this);
    labelE = new QLabel(this);
    labelE->move(650, 120);
    labelE->resize(120, 20);
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

    inputD->setPlaceholderText("");
    connect(inputD, &QLineEdit::editingFinished, this, [ = ]() {
        qDebug() << inputD->text();
    });
    inputE->setPlaceholderText("");
    connect(inputE, &QLineEdit::editingFinished, this, [ = ]() {
        qDebug() << inputE->text();
    });
    inputF->setPlaceholderText("");
    connect(inputF, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputF->text();
    });
    inputG->setPlaceholderText("");
    connect(inputG, &QLineEdit::editingFinished, this, [ = ]() {
        qDebug() << inputG->text();
    });
    inputH->setPlaceholderText("");
    connect(inputH, &QLineEdit::returnPressed, this, [ = ]() {
        qDebug() << inputH->text();
    });
    inputI->setPlaceholderText("");
    connect(inputI, &QLineEdit::editingFinished, this, [ = ]() {
        qDebug() << inputI->text();
    });

    // 创建两个按钮，开始模拟程序与清空页面
    begin = new QPushButton("开始模拟", this);
    begin->move(660, 470);
    begin->resize(80, 30);
    clear = new QPushButton("清空屏幕", this);
    clear->move(660, 530);
    clear->resize(80, 30);

    connect(begin,
            &QPushButton::clicked,
            this,
            &ProcessOne::on_lineEdit_returnPressed);
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

// 加载样式表配置文件
void ProcessOne::loadStyleSheet(const QString& sheetName)
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
void ProcessOne::setNewStyleSheet(QString styleSheet)
{
    QString oldStyleSheet = this->styleSheet();

    styleSheet += oldStyleSheet;
    this->setStyleSheet(styleSheet);
}
