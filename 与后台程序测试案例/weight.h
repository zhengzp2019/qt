#ifndef WEIGHT_H
#define WEIGHT_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
class weight : public QWidget {
    Q_OBJECT

public:

    weight(QWidget *parent = nullptr);
    ~weight();

public slots:

    void test();

private:

    QPushButton *pb;
    QLabel *l;
    QMessageBox *mb;
};
#endif // WEIGHT_H
