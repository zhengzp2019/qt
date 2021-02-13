#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:

    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_pushButton_clicked();

private:

    Ui::Widget *ui;
    QProcess myProcess;

public slots:

    void showResult();
    void showState(QProcess::ProcessState);
    void showError();
    void showFinished(int,
                      QProcess::ExitStatus);
};
#endif // WIDGET_H
