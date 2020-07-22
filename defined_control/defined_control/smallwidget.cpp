#include "smallwidget.h"
#include<QHBoxLayout>

smallwidget::smallwidget(QWidget *parent) : QWidget(parent)
{
    slider = new QSlider(Qt::Horizontal,this);
    spin = new QSpinBox(this);

    QHBoxLayout *layout = new QHBoxLayout;//建立一个布局对象
    //在布局中添加控件
    layout->addWidget(spin);
    layout->addWidget(slider);
    this->setLayout(layout);//窗口设置一个layout的布局

    connect(spin,
            static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            slider,&QSlider::setValue);
    connect(slider,&QSlider::valueChanged,spin,&QSpinBox::setValue);
}
