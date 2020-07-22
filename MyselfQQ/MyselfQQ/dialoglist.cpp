#include "dialoglist.h"
#include "ui_dialoglist.h"
#include<QPixmap>
#include<QToolButton>
#include<QSize>

DialogList::DialogList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogList)
{
    ui->setupUi(this);
    //设置标题
    this->setWindowTitle("MyselfQQ 2020");
    //设置图标
    this->setWindowIcon(QPixmap("://image/2020072016.jpg"));

    //准备图标
    QList<QString> icon_name_list;
    icon_name_list<<"2007204"<<"2007205"<<"2007206"<<"2007207"<<"2007208"
            <<"2007209"<<"20072010"<<"20072011"<<"20072012"
           <<"20072013"<<"20072014"<<"20072015";

    QVector<QToolButton *> v_tool_btn;
    for(int i=1;i<=9;i++)
    {
    //设置头像
    QToolButton *btn = new QToolButton;
    //设置文字
    QString name = icon_name_list[i];
    btn->setText(name);
    //设置头像
    QString str = QString("://image/%1.jpg").arg(icon_name_list.at(i));
    btn->setIcon(QPixmap(str));
    //设置头像大小
    btn->setIconSize(QSize(60,60));
    //设置按钮风格 透明
    btn->setAutoRaise(true);
    //设置文字和图片一起显示
    btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //加到 垂直布局中
    ui->verticalLayout->addWidget(btn);
    //容器保存著九个按钮，方便以后再次操作
    v_tool_btn.push_back(btn);
    }
}

DialogList::~DialogList()
{
    delete ui;
}
