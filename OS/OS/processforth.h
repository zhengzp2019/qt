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
    void loadStyleSheet(const QString& sheetName);
    void setNewStyleSheet(QString styleSheet);

private:

    QString BText, MaxText;                                  // 显示提示信息
    QString select;                                          // 选择算法
    QString resultInfo;                                      // 存储结果信息
    QString displayTrackListText, displayResultText;         // 显示后台输出内容
    QString num;                                             //选择的算法
    QGroupBox *groupBox;                                     // 四个选项容器
    QRadioButton *FCFS, *SSTF, *SCAN, *CSCAN;                // 算法选项
    QPushButton *produce,  *clear, *compare, *exit, *result; //按钮
    QLineEdit *inputBTnumber, *inputMaxTnumber;              // 行编辑
    QLabel *labelBTnumber, *labelMaxTnumber;                 // 显示标签
    QTextBrowser *trackList, *displayResult;                 // 显示文本
    QString program;                                         // 后台程序地址
    QStringList arguments;                                   // 向后台传递的参数
    QProcess *myProcess;                                     // 执行后台的进程

public slots:

    void displayTrackNumInfo();

signals:
};

#endif // PROCESSFORTH_H
