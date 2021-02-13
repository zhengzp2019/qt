#ifndef PROCESSTHIRD_H
#define PROCESSTHIRD_H

#include <QWidget>
#include <QLabel>
#include <QTextBrowser>
#include <QLineEdit>
#include <QGroupBox>
#include <QPushButton>
#include <QRadioButton>
#include <QString>
#include <QStringList>
#include <QProcess>
#include <QTimer>
class ProcessThird : public QWidget {
    Q_OBJECT

public:

    explicit ProcessThird(QWidget *parent = nullptr);
    void loadStyleSheet(const QString& sheetName);
    void setNewStyleSheet(QString styleSheet);

private:

    QPushButton *begin, *clear, *display;
    QLabel *pageTrack, *nowPage, *Block0, *Block1, *Block2, *FIFO, *LRU, *initNum,
           *timeSlice;
    QLineEdit *inputInitNum, *inputTimeSlice;
    QGroupBox *groupBox;
    QRadioButton *FIFOButton, *LRUButton;
    QTextBrowser *displayPageTrack, *displayResult, *displayBlock0,
                 *displayBlock1, *displayBlock2, *displayNowPage;
    QString program;                              // 后台程序的地址
    QString inputInitNumInfo, inputTimeSliceInfo; // 读取输入的信息
    QString result;                               // 读取结果
    QString select;                               //选择调度算法
    QStringList arguments;
    QProcess *myProcess;                          // 执行后台程序的进程
    QTimer *time;                                 // 定时器，控制模拟调度的时间

public slots:

    void clear_screen(); // 清空屏幕
    void creatSquence(); // 产生调度序列
    void simulateDeal(); // 模拟调度序列

signals:
};

#endif // PROCESSTHIRD_H
