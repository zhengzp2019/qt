#ifndef PROCESSSECOND_H
#define PROCESSSECOND_H

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QProcess>
#include <QStringList>
namespace Ui {
class ProcessSecond;
}

class ProcessSecond : public QMainWindow {
    Q_OBJECT

public:

    explicit ProcessSecond(QWidget *parent = nullptr);
    void loadStyleSheet(const QString& sheetName);
    void setNewStyleSheet(QString styleSheet);
    ~ProcessSecond();

private slots:

    void on_initwork_editingFinished();

    void on_time_editingFinished();

    void on_fcfs_clicked();

    void on_stf_clicked();

    void on_init_clicked();

    void on_begin_clicked();

    void on_clear_clicked();

private:

    Ui::ProcessSecond *ui;
    QString inputInit, inputTime; // 存储输入数据
    QString select;               //选择算法
    QString result;               // 读取结果
    QString str;                  // 读取结果切片字符串
    QString state;                // 读取后备队列，缓冲区的状态
    QTimer *time;                 // 定时器
    QString program;              //程序路劲
    QStringList arguments;        //传递参数
    QProcess *process;            // 进程
};

#endif // PROCESSSECOND_H
