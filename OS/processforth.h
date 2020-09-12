#ifndef PROCESSFORTH_H
#define PROCESSFORTH_H

#include <QWidget>
#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QTextBrowser>
#include <QString>
#include <QGroupBox>
#include <QRadioButton>
#include <QProcess>
class ProcessForth : public QWidget {
    Q_OBJECT

public:

    explicit ProcessForth(QWidget *parent = nullptr);

private:

    QString BText, MaxText;                                 // 显示提示信息
    QString resultInfo;                                     // 存储结果信息
    QString displayTrackListText, displayResultText;        // 显示后台输出内容
    QString num;                                            //选择的算法
    QGroupBox *groupBox;                                    // 四个选项容器
    QRadioButton *FCFS, *SSTF, *SCAN, *CSCAN;               // 算法选项
    QPushButton *produce,  *clear, *compare, *exit, *begin; //按钮
    QLineEdit *inputBTnumber, *inputMaxTnumber;             // 行编辑
    QLabel *labelBTnumber, *labelMaxTnumber;                // 显示标签
    QTextBrowser *trackList, *displayResult;                // 显示文本
    QString program;                                        // 后台程序地址
    QStringList arguments;                                  // 向后台传递的参数
    QProcess *myProcess;                                    // 执行后台的进程

public slots:

    void get_inputB_content();
    void get_inputMax_content();
    void displayTrackNumInfo();
    void displayCmpInfo();
    void beginRun();
    void emitFCFS();
    void emitSSTF();
    void emitSCAN();
    void emitCSCAN();

signals:
};

#endif // PROCESSFORTH_H
