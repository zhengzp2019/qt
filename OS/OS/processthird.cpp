#include "processthird.h"
#include <QDebug>
#include <QFile>
static int i = 3;
ProcessThird::ProcessThird(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("存储管理");
    this->resize(800, 600);
    loadStyleSheet(":/new/prefix1/MyStyle/MyStyle.qss");

    //按钮
    display = new QPushButton("产生序列", this);
    begin = new QPushButton("开始模拟", this);
    clear = new QPushButton("清空屏幕", this);
    display->move(600, 400);
    display->resize(100, 40);
    begin->move(600, 450);
    begin->resize(100, 40);
    clear->move(600, 500);
    clear->resize(100, 40);

    // 产生序列
    connect(display, &QPushButton::clicked, this, &ProcessThird::creatSquence);

    // 清空屏幕
    connect(clear,   &QPushButton::clicked, this, &ProcessThird::clear_screen);

    // 启动定时器，并模拟序列调度
    connect(begin,   &QPushButton::clicked, this, &ProcessThird::simulateDeal);

    time = new QTimer;

    // 设置一个超时事件
    connect(time, &QTimer::timeout, this, [ = ]() {
        displayNowPage->clear();
        displayBlock0->clear();
        displayBlock1->clear();
        displayBlock2->clear();
        QString disNowPage = result.section("\r\n", i, i).trimmed();
        QString disBlock0 = result.section("\r\n", i + 2, i + 2).trimmed();
        QString disBlock1 = result.section("\r\n", i + 3, i + 3).trimmed();
        QString disBlock2 = result.section("\r\n", i + 4, i + 4).trimmed();
        QString disResult = result.section("\r\n", i + 1, i + 1).append('\n');
        displayNowPage->append(disNowPage);
        displayResult->append(disResult);
        displayBlock0->append(disBlock0);
        displayBlock1->append(disBlock1);
        displayBlock2->append(disBlock2);

        if (disResult.mid(0,
                          3) == "页块0")
        {
            if ((disResult.mid(4, 5) == "命中\n") || (disResult.mid(4,
                                                                  5) == "装载\n"))
            {
                displayBlock0->setStyleSheet("QTextBrowser{background:yellow}");
                displayBlock1->setStyleSheet("QTextBrowser{background:pink}");
                displayBlock2->setStyleSheet("QTextBrowser{background:pink}");
            }

            if (disResult.mid(4,
                              5) == "替换\n")
            {
                displayBlock0->setStyleSheet("QTextBrowser{background:red}");
                displayBlock1->setStyleSheet("QTextBrowser{background:pink}");
                displayBlock2->setStyleSheet("QTextBrowser{background:pink}");
            }
        }

        if (disResult.mid(0, 3) == "页块1")
        {
            if ((disResult.mid(4, 5) == "命中\n") || (disResult.mid(4,
                                                                  5) == "装载\n"))
            {
                displayBlock1->setStyleSheet("QTextBrowser{background:yellow}");
                displayBlock0->setStyleSheet("QTextBrowser{background:pink}");
                displayBlock2->setStyleSheet("QTextBrowser{background:pink}");
            }

            else if (disResult.mid(4, 5) == "替换\n")
            {
                displayBlock1->setStyleSheet("QTextBrowser{background:red}");
                displayBlock0->setStyleSheet("QTextBrowser{background:pink}");
                displayBlock2->setStyleSheet("QTextBrowser{background:pink}");
            }
        }

        if (disResult.mid(0, 3) == "页块2")
        {
            if ((disResult.mid(4, 5) == "命中\n") || (disResult.mid(4,
                                                                  5) == "装载\n"))
            {
                displayBlock2->setStyleSheet("QTextBrowser{background:yellow}");
                displayBlock0->setStyleSheet("QTextBrowser{background:pink}");
                displayBlock1->setStyleSheet("QTextBrowser{background:pink}");
            }

            if (disResult.mid(4, 5) == "替换\n")
            {
                displayBlock2->setStyleSheet("QTextBrowser{background:red}");
                displayBlock0->setStyleSheet("QTextBrowser{background:pink}");
                displayBlock1->setStyleSheet("QTextBrowser{background:pink}");
            }
        }
        i = i + 6;

        if ((i - 3) / 6 == inputInitNumInfo.toInt())
        {
            time->stop();
            displayResult->append(tr("模拟调度序列完成\n"));
            myProcess->close();
            arguments.clear();
        }
    });

    // 标签
    pageTrack = new QLabel("要进行页面替换的顺序", this);
    nowPage = new QLabel("当前要进入的页面号：", this);
    Block0 = new QLabel("页面块数0#：", this);
    Block1 = new QLabel("页面块数1#：", this);
    Block2 = new QLabel("页面块数2#：", this);
    initNum = new QLabel("初始化个数", this);
    timeSlice = new QLabel("时间片长度", this);
    pageTrack->resize(200, 20);
    pageTrack->move(20, 10);
    nowPage->resize(190, 20);
    nowPage->move(30, 200);
    Block0->resize(110, 20);
    Block0->move(110, 250);
    Block1->resize(110, 20);
    Block1->move(110, 290);
    Block2->resize(110, 20);
    Block2->move(110, 330);
    initNum->resize(100, 20);
    initNum->move(490, 70);
    timeSlice->resize(100, 20);
    timeSlice->move(490, 100);

    //选择按钮
    groupBox = new QGroupBox(this);
    groupBox->setTitle("调度算法");
    groupBox->resize(200, 100);
    groupBox->move(535, 200);
    FIFOButton = new QRadioButton(groupBox);
    LRUButton = new QRadioButton(groupBox);

    FIFOButton->setText("先入先出算法");
    FIFOButton->resize(200, 20);
    FIFOButton->move(10, 20);

    LRUButton->setText("最近最久未使用算法");
    LRUButton->resize(200, 20);
    LRUButton->move(10, 60);

    connect(FIFOButton, &QRadioButton::clicked, this, [ = ]() {
        select = "1";
    });
    connect(LRUButton,  &QRadioButton::clicked, this, [ = ]() {
        select = "2";
    });

    // 显示窗口
    displayPageTrack = new QTextBrowser(this);
    displayPageTrack->resize(420, 120);
    displayPageTrack->move(10, 30);
    displayNowPage = new QTextBrowser(this);
    displayNowPage->resize(80, 30);
    displayNowPage->move(230, 200);
    displayResult = new QTextBrowser(this);
    displayResult->resize(420, 230);
    displayResult->move(10, 360);
    displayBlock0 = new QTextBrowser(this);
    displayBlock0->resize(80, 30);
    displayBlock0->move(230, 250);
    displayBlock1 = new QTextBrowser(this);
    displayBlock1->resize(80, 30);
    displayBlock1->move(230, 290);
    displayBlock2 = new QTextBrowser(this);
    displayBlock2->resize(80, 30);
    displayBlock2->move(230, 330);

    // 输入框
    inputInitNum = new QLineEdit(this);
    inputTimeSlice = new QLineEdit(this);
    inputInitNum->move(600, 70);
    inputTimeSlice->move(600, 100);
    inputInitNum->setText("");
    inputTimeSlice->setText("");
    connect(inputInitNum,   &QLineEdit::editingFinished, this, [ = ]() {
        inputInitNumInfo = inputInitNum->text();
    });
    connect(inputTimeSlice, &QLineEdit::editingFinished, this, [ = ]() {
        inputTimeSliceInfo = inputTimeSlice->text();
    });
}

// 清空屏幕
void ProcessThird::clear_screen()
{
    i = 3;
    myProcess->close();
    time->stop();
    inputInitNum->clear();
    inputTimeSlice->clear();
    displayBlock0->clear();
    displayBlock1->clear();
    displayBlock2->clear();
    displayResult->clear();
    displayNowPage->clear();
    displayPageTrack->clear();

    if (FIFOButton->isChecked()) FIFOButton->setCheckable(false);

    if (!FIFOButton->isChecked()) FIFOButton->setCheckable(true);

    if (LRUButton->isChecked()) LRUButton->setCheckable(false);

    if (!LRUButton->isChecked()) LRUButton->setCheckable(true);
    displayBlock0->setStyleSheet("QTextBrowser{background:pink}");
    displayBlock1->setStyleSheet("QTextBrowser{background:pink}");
    displayBlock2->setStyleSheet("QTextBrowser{background:pink}");
}

// 调用后台程序，产生调度序列
void ProcessThird::creatSquence()
{
    program = "./memory_scheduling.exe";
    arguments << inputInitNumInfo << select;
    myProcess = new QProcess(this);
    myProcess->start(program, arguments);
    connect(myProcess, &QProcess::readyRead, this, [ = ]() {
        result = myProcess->readAllStandardOutput();
        displayPageTrack->append(result.section("\r\n", 1, 1).trimmed());
    });
}

// 开始模拟调度
void ProcessThird::simulateDeal()
{
    time->start(inputTimeSliceInfo.toInt());
}

// 加载样式表配置文件
void ProcessThird::loadStyleSheet(const QString& sheetName)
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
void ProcessThird::setNewStyleSheet(QString styleSheet)
{
    QString oldStyleSheet = this->styleSheet();

    styleSheet += oldStyleSheet;
    this->setStyleSheet(styleSheet);
}
