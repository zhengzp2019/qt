#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H
#include<QSpinBox>
#include<QSlider>
#include <QWidget>

class smallwidget : public QWidget
{
    Q_OBJECT
public:
    explicit smallwidget(QWidget *parent = nullptr);
    QSpinBox *spin;
    QSlider *slider;

signals:

};

#endif // SMALLWIDGET_H
