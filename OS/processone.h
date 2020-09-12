#ifndef PROCESSONE_H
#define PROCESSONE_H

#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
class ProcessOne : public QMainWindow {
    Q_OBJECT

public:

    explicit ProcessOne(QWidget *parent = nullptr);

private:

    QMenuBar *menu_bar;
    QPushButton *begin, *clear;

    QLineEdit *inputA, *inputB, *inputC,*inputD, *inputE, *inputF,*inputG, *inputH, *inputI;
    QLabel *labelA,*labelB,*labelC,*labelD,*labelE,*labelF,*labelG,*labelH,*labelI;
public slots:

    void on_lineEdit_returnPressed();
    void clearScreen();

signals:
};

#endif // PROCESSONE_H
