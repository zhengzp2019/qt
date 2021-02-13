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
    void loadStyleSheet(const QString& sheetName);
    void setNewStyleSheet(QString styleSheet);
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
};
#endif // MAINWINDOW_H
