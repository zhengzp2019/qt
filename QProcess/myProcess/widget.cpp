#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QString>
#include <QTextCodec>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(&myProcess,
            &QProcess::readyRead,
            this,
            &Widget::showResult);
    connect(&myProcess,
            &QProcess::stateChanged,
            this,
            &Widget::showState);
    connect(&myProcess,
            &QProcess::errorOccurred,
            this,
            &Widget::showError);
    connect(&myProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this,
            SLOT(showFinished(int,QProcess::ExitStatus)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    // 启动一个进程
    QString program = "cmd.exe";
    QStringList arguments;

    arguments << "/c dir&pause";
    myProcess.start(program, arguments);
}

void Widget::showResult()
{
    QTextCodec *codec = QTextCodec::codecForLocale();

    qDebug() << "showResult:" << endl << codec->toUnicode(myProcess.readAll());
}

void Widget::showState(QProcess::ProcessState state)
{
    qDebug() << "showState:";

    if (state == QProcess::NotRunning)
    {
        qDebug() << "Not Runing";
    }
    else if (state == QProcess::Starting)
    {
        qDebug() << "stating";
    }
    else if (state == QProcess::Running)
    {
        qDebug() << "Runing";
    }
}

void Widget::showError()
{
    qDebug() << "showError:" << endl << myProcess.errorString();
}

void Widget::showFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    qDebug() << "showFinished:" << endl << exitCode << exitStatus;
}
