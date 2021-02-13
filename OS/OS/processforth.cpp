#include "processforth.h"
#include <QMenu>
#include <QFile>
#include <QDebug>
#include <QLabel>
#include <QAction>
ProcessForth::ProcessForth(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("磁盘调度");
    this->resize(800, 600);

    loadStyleSheet(":/new/prefix1/MyStyle/MyStyle.qss");

    // 创建两个QLineEdit和QLabel对象
    inputBTnumber = new QLineEdit(this);
    labelBTnumber = new QLabel(this);
    labelBTnumber->move(660, 65);
    labelBTnumber->setText("起始扫描磁道号");

    inputMaxTnumber = new QLineEdit(this);
    labelMaxTnumber = new QLabel(this);
    labelMaxTnumber->move(660, 155);
    labelMaxTnumber->setText("最大磁道号数");

    // 设置行编辑对象的位置和大小
    inputBTnumber->move(660, 40);
    inputBTnumber->resize(90, 30);
    inputMaxTnumber->move(660, 130);
    inputMaxTnumber->resize(90, 30);

    inputBTnumber->setPlaceholderText("请输入整数");
    inputBTnumber->setText("");
    inputMaxTnumber->setPlaceholderText("请输入整数");
    inputMaxTnumber->setText("");

    // 输入内容，并获取参数
    connect(inputBTnumber,
            &QLineEdit::editingFinished,
            this, [ = ]() {
        BText = inputBTnumber->text();
    });
    connect(inputMaxTnumber,
            &QLineEdit::editingFinished,
            this, [ = ]() {
        MaxText = inputMaxTnumber->text();
    });

    QLabel *label1 = new QLabel("要查找的磁道号序列", this);
    QLabel *label2 = new QLabel("磁盘调度的结果", this);

    label1->move(170, 40);
    label2->move(170, 330);
    label1->resize(200, 20);
    label2->resize(150, 20);

    // 创建文本显示QTextBrowser对象
    // 要查找的磁道序列
    trackList = new QTextBrowser(this);

    trackList->resize(400, 200);
    trackList->move(100, 80);

    // 磁盘调度查找磁道号结果
    displayResult = new QTextBrowser(this);
    displayResult->resize(400, 200);
    displayResult->move(100, 360);

    // 创建四个按钮，产生磁道号，调度结果，清空屏幕，算法比较
    produce = new QPushButton("产生磁道号", this);
    produce->move(660, 320);
    produce->resize(100, 40);

    clear = new QPushButton("清空屏幕", this);
    clear->move(660, 440);
    clear->resize(100, 40);

    compare = new QPushButton("算法比较", this);
    compare->move(660, 500);
    compare->resize(100, 40);

    result = new QPushButton("调度结果", this);
    result->move(660, 380);
    result->resize(100, 40);

    // 显示调度结果
    connect(result, &QPushButton::clicked, this, [ = ]() {
        displayResult->append(resultInfo.section("\r\n", 3, 5).append('\n'));
        result->setEnabled(false);
    });

    // 产生磁道号的连接函数
    connect(produce,
            &QPushButton::clicked, this,
            &ProcessForth::displayTrackNumInfo);

    // 算法比较的连接函数
    connect(compare, &QPushButton::clicked, this, [ = ]() {
        displayResult->append(resultInfo.section("\r\n", 23, 27).append('\n'));
        compare->setEnabled(false);
    });

    // 清空屏幕的连接函数
    connect(clear,
            &QPushButton::clicked,
            this,
            [ = ]() {
        inputBTnumber->clear();
        inputMaxTnumber->clear();
        trackList->clear();
        displayResult->clear();
        produce->setEnabled(true);
        result->setEnabled(true);
        compare->setEnabled(true);

        if (FCFS->isChecked()) FCFS->setCheckable(false);

        if (!FCFS->isChecked()) FCFS->setCheckable(true);

        if (SSTF->isChecked()) SSTF->setCheckable(false);

        if (!SSTF->isChecked()) SSTF->setCheckable(true);

        if (SCAN->isChecked()) SCAN->setCheckable(false);

        if (!SCAN->isChecked()) SCAN->setCheckable(true);

        if (CSCAN->isChecked()) CSCAN->setCheckable(false);

        if (!CSCAN->isChecked()) CSCAN->setCheckable(true);
        arguments.clear();
        myProcess->close();
    });

    // 创建选项容器和选项
    groupBox = new QGroupBox(this);
    FCFS = new QRadioButton(groupBox);
    SSTF = new QRadioButton(groupBox);
    SCAN = new QRadioButton(groupBox);
    CSCAN = new QRadioButton(groupBox);

    groupBox->setTitle("调度算法");
    groupBox->resize(200, 100);
    groupBox->move(570, 200);
    FCFS->setText("先来先服务FCFS算法");
    FCFS->resize(170, 20);
    FCFS->move(10, 20);
    SSTF->setText("最短寻道时间SSTF算法");
    SSTF->resize(170, 20);
    SSTF->move(10, 40);
    SCAN->setText("扫描SCAN算法");
    SCAN->resize(170, 20);
    SCAN->move(10, 60);
    CSCAN->setText("循环扫描CSCAN算法");
    CSCAN->resize(170, 20);
    CSCAN->move(10, 80);
    connect(FCFS,  &QRadioButton::clicked, this, [ = ]() {
        select = "1";
    });
    connect(SSTF,  &QRadioButton::clicked, this, [ = ]() {
        select = "2";
    });
    connect(SCAN,  &QRadioButton::clicked, this, [ = ]() {
        select = "3";
    });
    connect(CSCAN, &QRadioButton::clicked, this, [ = ]() {
        select = "4";
    });
}

// 产生磁道号槽函数
void ProcessForth::displayTrackNumInfo()
{
    program =
        "./disk_scheduling.exe";
    arguments << BText << MaxText << select;
    myProcess = new QProcess(this);
    myProcess->start(program, arguments);
    connect(myProcess, &QProcess::readyRead, this, [ = ]() {
        resultInfo = myProcess->readAllStandardOutput();
        trackList->append(resultInfo.section("\r\n", 0, 1).trimmed());
    });
    produce->setEnabled(false);
}

// 加载样式表配置文件
void ProcessForth::loadStyleSheet(const QString& sheetName)
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
void ProcessForth::setNewStyleSheet(QString styleSheet)
{
    QString oldStyleSheet = this->styleSheet();

    styleSheet += oldStyleSheet;
    this->setStyleSheet(styleSheet);
}
