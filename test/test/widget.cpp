#include "widget.h"
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QDesktopServices>
#include <QTextCodec>
#include <QPushButton>
#include <QProcess>
#include <QTextBlock>
#include <QTextBrowser>
#include <QRadioButton>
#include <QGroupBox>
#include <QAbstractButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("zzp");
    this->resize(800, 800);
    QPushButton *button = new QPushButton("点我！", this);

    button->resize(50, 50);
    button->move(500, 500);

    QTextBrowser *text_browser = new QTextBrowser(this);

    text_browser->resize(100, 100);
    text_browser->move(50, 50);
    QString program =
        tr("C:\\Users\\zp\\Code\\Cpp\\build\\test1.exe"); //传递文件路径
    QStringList arguments;

    arguments << "hhh1" << "zzp2" << "hello3";
    QProcess *myProcess = new QProcess(this);

    connect(button, &QPushButton::clicked, this, [ = ]() {
        myProcess->start(program, arguments);
        connect(myProcess, &QProcess::readyRead, this, [ = ]() {
            QString str = QString(myProcess->readAllStandardOutput());
            text_browser->append(str.section("\r\n", 1, 1));
            qDebug() <<
                str.section("\r\n", 1, 1) << str.section("\r\n", 2, 4);
        });
    });

    QGroupBox *groupBox = new QGroupBox(this);

    groupBox->resize(300, 300);
    groupBox->move(500, 100);
    QRadioButton *FCFS = new QRadioButton(groupBox);

    FCFS->resize(50, 100);
    FCFS->setText("111111111");
    QRadioButton *SSTF = new QRadioButton(groupBox);

    SSTF->resize(50, 100);
    SSTF->move(0, 100);
    SSTF->setText("222222222");
    connect(FCFS, &QRadioButton::clicked, this, []() {
        qDebug() << "调用了FCFS算法";
    });
    connect(SSTF, &QRadioButton::clicked, this, []() {
        qDebug() << "调用了SSTF算法";
    });


    //   QDesktopServices::openUrl(QUrl(QString("http://www.baidu.com/")));
    // 调用系统的默认浏览器打开百度主页
    //    });
}

Widget::~Widget()
{}
