#include "processsecond.h"
#include "ui_processsecond.h"
#include <QFile>
#include <QDebug>
#include <QDialog>
static int i = 0;
ProcessSecond::ProcessSecond(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProcessSecond)
{
    ui->setupUi(this);
    this->setWindowTitle("作业调度");
    loadStyleSheet(":/new/prefix1/MyStyle/MyStyle.qss");
    time = new QTimer(this);
    connect(time, &QTimer::timeout, this, [ = ]() {
        str = result.section("\r\n", i, i);
        ++i;

        if (str == "后备队列") // 准备输出后备队列的内容
        {
            state = result.section("\r\n", i, i);
            ++i;

            if (state == '1')
            {
                ui->readyqueue->append("======后备队列已空=========");
                ++i;
            }
            else
            {
                while (1)
                {
                    if (result.section("\r\n", i, i) == "==========")
                    {
                        ++i;
                        break;
                    }
                    else
                    {
                        ui->readyqueue->append(result.section("\r\n", i, i));
                        ++i;
                    }
                }
            }
        }
        else if (str == "缓冲区") // 准备输出缓冲区内容
        {
            state = result.section("\r\n", i, i);
            ++i;

            if (state == "1")
            {
                ++i;
                ui->bufferqueue->append("======缓冲区已空=========");
            }
            else
            {
                ui->bufferqueue->append("~~~~~~~~~~~~~~~~~~");

                while (1)
                {
                    if (result.section("\r\n", i, i) == "==========")
                    {
                        ++i;
                        break;
                    }
                    else
                    {
                        ui->bufferqueue->append(result.section("\r\n", i, i));
                        ++i;
                    }
                }
                ui->bufferqueue->append("~~~~~~~~~~~~~~~~~~");
            }
        }
        else if (str == "当前调度作业") // 输出当前调度内容
        {
            ui->readyqueue_2->clear();
            ui->readyqueue_2->append(result.section("\r\n", i, i));
            ++i;
        }
        else if (str == "完成") // 输出最终结果
        {
            while (1)
            {
                if (result.section("\r\n", i, i) == "==========")
                {
                    ui->finishwork->append("=====作业调度模拟结束=======");
                    time->stop();
                    ++i;
                    break;
                }
                else
                {
                    ui->finishwork->append(result.section("\r\n", i, i));
                    ++i;
                }
            }
        }
    });
}

// 获取输入数据
void ProcessSecond::on_initwork_editingFinished()
{
    inputInit = ui->initwork->text();
}

void ProcessSecond::on_time_editingFinished()
{
    inputTime = ui->time->text();
}

//选择算法
void ProcessSecond::on_fcfs_clicked()
{
    select = "1";
}

void ProcessSecond::on_stf_clicked()
{
    select = "2";
}

// 加载样式表配置文件
void ProcessSecond::loadStyleSheet(const QString& sheetName)
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
void ProcessSecond::setNewStyleSheet(QString styleSheet)
{
    QString oldStyleSheet = this->styleSheet();

    styleSheet += oldStyleSheet;
    this->setStyleSheet(styleSheet);
}

// 初始化
void ProcessSecond::on_init_clicked()
{
    program = "./Job_scheduling.exe";
    arguments << inputInit << select;
    process = new QProcess(this);
    process->start(program, arguments);
    connect(process, &QProcess::readyRead, this, [ = ]() {
        result = process->readAllStandardOutput();
    });
}

ProcessSecond::~ProcessSecond()
{
    delete ui;
}

void ProcessSecond::on_begin_clicked()
{
    time->start(inputTime.toInt());
}

void ProcessSecond::on_clear_clicked()
{
    time->stop();
    process->close();
    arguments.clear();
    ui->time->clear();
    ui->initwork->clear();

    if (ui->fcfs->isChecked()) ui->fcfs->setCheckable(false);

    if (!ui->fcfs->isChecked()) ui->fcfs->setCheckable(true);

    if (ui->stf->isChecked()) ui->stf->setCheckable(false);

    if (!ui->stf->isChecked()) ui->stf->setCheckable(true);
    ui->finishwork->clear();
    ui->readyqueue->clear();
    ui->readyqueue_2->clear();
    ui->bufferqueue->clear();
}
