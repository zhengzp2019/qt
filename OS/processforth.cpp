#include "processforth.h"
#include <QMenu>
#include <QDebug>
#include <QAction>
ProcessForth::ProcessForth(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("磁盘调度");
    this->resize(800, 800);

    // 创建两个QLineEdit和QLabel对象
    inputBTnumber = new QLineEdit(this);
    labelBTnumber = new QLabel(this);
    labelBTnumber->move(660, 85);
    labelBTnumber->setText("起始扫描磁道号");

    inputMaxTnumber = new QLineEdit(this);
    labelMaxTnumber = new QLabel(this);
    labelMaxTnumber->move(660, 185);
    labelMaxTnumber->setText("最大磁道号数");

    // 设置行编辑对象的位置和大小
    inputBTnumber->move(660, 50);
    inputBTnumber->resize(90, 30);
    inputMaxTnumber->move(660, 150);
    inputMaxTnumber->resize(90, 30);

    inputBTnumber->setPlaceholderText("请输入整数，以enter结束输入");
    inputBTnumber->setText("");
    inputMaxTnumber->setPlaceholderText("请输入整数，以enter结束输入");
    inputMaxTnumber->setText("");

    // 输入内容，并获取参数
    connect(inputBTnumber,
            &QLineEdit::returnPressed,
            this, &ProcessForth::get_inputB_content);
    connect(inputMaxTnumber,
            &QLineEdit::returnPressed,
            this, &ProcessForth::get_inputMax_content);

    // 创建文本显示QTextBrowser对象
    // 要查找的磁道序列
    trackList = new QTextBrowser(this);
    trackList->resize(400, 200);
    trackList->move(100, 100);

    // 磁盘调度查找磁道号结果
    displayResult = new QTextBrowser(this);
    displayResult->resize(400, 200);
    displayResult->move(100, 500);

    // 创建四个按钮，产生磁道号，调度结果，清空屏幕，算法比较
    produce = new QPushButton("产生磁道号", this);
    produce->move(660, 340);
    produce->resize(100, 40);

    clear = new QPushButton("清空屏幕", this);
    clear->move(660, 400);
    clear->resize(100, 40);

    compare = new QPushButton("算法比较", this);
    compare->move(660, 460);
    compare->resize(100, 40);

    exit = new QPushButton("退出", this);
    exit->move(660, 520);
    exit->resize(100, 40);

    begin = new QPushButton("执行程序", this);
    begin->move(660, 580);
    begin->resize(100, 40);

    // 开始执行程序
    connect(begin, &QPushButton::clicked, this, &ProcessForth::beginRun);

    // 退出该进程
    connect(exit,  &QPushButton::clicked, this, &ProcessForth::close);

    // 产生磁道号的连接函数
    connect(produce,
            &QPushButton::clicked, this,
            &ProcessForth::displayTrackNumInfo);

    // 清空屏幕的连接函数
    connect(clear,
            &QPushButton::clicked,
            this,
            [ = ]() {
        inputBTnumber->clear();
        inputMaxTnumber->clear();
        trackList->clear();
        displayResult->clear();
        FCFS->clearFocus();
        SSTF->clearFocus();
        SCAN->clearFocus();
        CSCAN->clearFocus();
    });

    // 算法比较的连接函数
    connect(compare, &QPushButton::clicked, this, &ProcessForth::displayCmpInfo);

    // 创建选项容器和选项
    groupBox = new QGroupBox(this);
    FCFS = new QRadioButton(groupBox);
    SSTF = new QRadioButton(groupBox);
    SCAN = new QRadioButton(groupBox);
    CSCAN = new QRadioButton(groupBox);

    groupBox->setTitle("调度算法");
    groupBox->resize(200, 100);
    groupBox->move(600, 200);
    FCFS->setText("显示FCFS执行结果");
    FCFS->resize(100, 20);
    FCFS->move(10, 20);
    SSTF->setText("显示SSTF执行结果");
    SSTF->resize(100, 20);
    SSTF->move(10, 40);
    SCAN->setText("显示SCAN执行结果");
    SCAN->resize(100, 20);
    SCAN->move(10, 60);
    CSCAN->setText("显示CSCAN执行结果");
    CSCAN->resize(100, 20);
    CSCAN->move(10, 80);
    connect(FCFS,  &QRadioButton::clicked, this, &ProcessForth::emitFCFS);
    connect(SSTF,  &QRadioButton::clicked, this, &ProcessForth::emitSSTF);
    connect(SCAN,  &QRadioButton::clicked, this, &ProcessForth::emitSCAN);
    connect(CSCAN, &QRadioButton::clicked, this, &ProcessForth::emitCSCAN);
}

// 输入结束后将输入的内容存到字符串中
void ProcessForth::get_inputB_content()
{
    BText = inputBTnumber->text();
}

// 输入结束后调用后端程序执行，并将返回的数据存储在resultInfo中
void ProcessForth::get_inputMax_content()
{
    MaxText = inputMaxTnumber->text();
}

// 产生磁道号槽函数
void ProcessForth::displayTrackNumInfo()
{
    trackList->append(resultInfo.section("\r\n", 0, 1).trimmed());
}

// 算法比较的槽函数
void ProcessForth::displayCmpInfo()
{
    //    qDebug() << resultInfo.section("\r\n", 19, 23).trimmed();
    displayResult->append(resultInfo.section("\r\n", 19, 24));
}

// 开始执行程序
void ProcessForth::beginRun()
{
    program =
        "C:\\Users\\zp\\Code\\Cpp\\build\\main.exe";
    arguments << BText << MaxText;
    myProcess = new QProcess(this);

    myProcess->start(program, arguments);
    connect(myProcess, &QProcess::readyRead, this, [ = ]() {
        resultInfo = myProcess->readAllStandardOutput();
    });
}

//选择调度算法
void ProcessForth::emitFCFS()
{
    qDebug() << resultInfo.section("\r\n", 3, 6);
    displayResult->append(resultInfo.section("\r\n", 3, 6));
}

void ProcessForth::emitSSTF()
{
    //    qDebug() << resultInfo.section("\r\n", 7, 9).trimmed();
    displayResult->append(resultInfo.section("\r\n", 7, 10));
}

void ProcessForth::emitSCAN()
{
    //    qDebug() << resultInfo.section("\r\n", 11, 13).trimmed();
    displayResult->append(resultInfo.section("\r\n", 11, 14));
}

void ProcessForth::emitCSCAN()
{
    //    qDebug() << resultInfo.section("\r\n", 15, 17).trimmed();
    displayResult->append(resultInfo.section("\r\n", 15, 18));
}
