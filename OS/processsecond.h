#ifndef PROCESSSECOND_H
#define PROCESSSECOND_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QPushButton>
#include <QLineEdit>
#include <QAction>
#include <QLabel>
class ProcessSecond : public QMainWindow {
    Q_OBJECT

public:

    explicit ProcessSecond(QWidget *parent = nullptr);

private:

    QMenuBar *menu_bar;
    QPushButton *initialize,*begin,*clear;
    QMenu *file_menu;
    QAction *exit;

    QLineEdit *inputWork, *inputTLength;
    QLabel *labelWork, *labelTLength;
public slots:

    void on_lineEdit_returnPressed();
    void clearScreen();

signals:
};

#endif // PROCESSSECOND_H
