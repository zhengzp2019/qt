#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "processone.h"
#include "processsecond.h"
#include "processthird.h"
#include "processforth.h"
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    Ui::MainWindow *ui;
    ProcessOne *process_1;
    ProcessSecond *process_2;
    ProcessThird *process_3;
    ProcessForth *process_4;

public slots:

    void myRun();
    void myHelp();

    //    void my_process_1();
    //    void my_process_2();
    //    void my_process_3();
    //    void my_process_4();
};
#endif // MAINWINDOW_H
