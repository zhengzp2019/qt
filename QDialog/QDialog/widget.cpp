#include "widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(400, 300);
    button = new QPushButton("关于", this);
    button->resize(100, 100);
    button->move(50, 50);
    connect(button, &QPushButton::clicked, this, [this]() {
        // 显示关于对话框
        QMessageBox::about(this, "标题", "这是一个关于对话框！");
    });

    QPushButton *button1 = new QPushButton("询问", this);

    button1->resize(100, 100);
    button1->move(200, 50);
    connect(button1, &QPushButton::clicked, this, [this]() {
        // 显示关于对话框
        int ret =
            QMessageBox::question(this, "标题", "你需要吗？",
                                  QMessageBox::Open | QMessageBox::Save,
                                  QMessageBox::Open);

        if (ret == QMessageBox::Open)
        {
            qDebug() << "open";
        }
        else
        {
            qDebug() << "save";
        }
    });

    QPushButton *button2=new QPushButton("警告",this);
    connect(button2,QPushButton::clicked,this,[=](){
        QMessageBox::critical(this,"警告","这是一个警告对话框");
    });
}

Widget::~Widget()
{
}
