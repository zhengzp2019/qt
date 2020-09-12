#include "weight.h"
#include <QProcess>
#include <iostream>
#include <QTextStream>
#include <QIODevice>
#include <QString>
#include <QStringList>
#include <QDialog>
#include <QLineEdit>

// #include <QFileDialog>
#include <QColorDialog>
#include <QDebug>
weight::weight(QWidget *parent)
    : QWidget(parent)
{
    // 初始化窗口
    this->setWindowTitle("zzp");
    this->resize(800, 600);
    this->move(100, 100);

    // 初始化标签
    //    l = new QLabel("hello world", this);
    //    l->move(300, 400);

    // 初始化按钮
    //    pb = new QPushButton("点击开始调试C程序", this);
    //    pb->resize(50, 50);
    //    pb->move(100, 100);

    // 对话框部分
    //    connect(pb, &QPushButton::clicked, this, []() {
    //              QString str = QFileDialog::getOpenFileName();
    //                qDebug() << str;
    //    });
    //    connect(pb, &QPushButton::clicked, this, []() {
    //        QDialog dialog;
    //        dialog.setWindowTitle(tr("hello,dialog!")); // 设置对话框标题
    //        dialog.exec();                              // 阻塞对话框，这里为什么要阻塞对话框
    // 初始化消息对话框
    //    mb = new QMessageBox(this);
    //    mb->setText("我做的对吗？");
    //    });


    QLineEdit *edit = new QLineEdit(this);

    /* 输入密码 */

    // enum EchoMode { Normal, NoEcho, Password, PasswordEchoOnEdit };
    edit->setEchoMode(QLineEdit::Normal);

    // 获取输入内容
    edit->setText("zzp");
    QString str = edit->text();

    connect(edit, &QLineEdit::returnPressed, this, [edit]()mutable {
        //        str = edit->text();
        qDebug() << edit->text();
    });

    // 输入提示
    edit->setPlaceholderText("Please input text:");

    // 填充词列表
    //    QCompleter completer(QStringList() << "aab" << "123" << "998");
    // 填充词匹配方式

    /*
     * enum MatchFlag {
        MatchExactly = 0,
        MatchContains = 1,
        MatchStartsWith = 2,
        MatchEndsWith = 3,
        MatchRegExp = 4,
        MatchWildcard = 5,
        MatchFixedString = 8,
        MatchCaseSensitive = 16,
        MatchWrap = 32,
        MatchRecursive = 64
       };
     */

    //    completer.setFilterMode(Qt::MatchContains);

    // 将填充词列表和编辑框绑定
    //    edit.setCompleter(&completer);

    //    connect(pb, &QPushButton::clicked, this, &weight::test);

    //    connect(pb,SIGNAL(click()),this,SLOT(test()));
}

void weight::test()
{
    QProcess   *process = new QProcess();
    QStringList strls;

    //    QString     str = "C:\Users\zp\Desktop\test";

    strls.clear();
    strls << "a" << "b";

    //    process->start("C:\Users\zp\Desktop\test", str);
    process->waitForStarted();
    process->waitForFinished();
    QByteArray  qb = process->readAll();
    QString     str22(qb);
    QTextStream cout(stdout);

    cout << str22 << endl;
}

weight::~weight()
{}
