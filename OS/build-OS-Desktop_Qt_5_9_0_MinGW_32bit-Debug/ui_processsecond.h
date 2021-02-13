/********************************************************************************
** Form generated from reading UI file 'processsecond.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSSECOND_H
#define UI_PROCESSSECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessSecond
{
public:
    QWidget *centralwidget;
    QPushButton *init;
    QPushButton *begin;
    QPushButton *clear;
    QLineEdit *initwork;
    QLabel *Initwork;
    QLabel *Time;
    QLineEdit *time;
    QGroupBox *dispatch;
    QRadioButton *fcfs;
    QRadioButton *stf;
    QTextBrowser *finishwork;
    QLabel *label_3;
    QTextBrowser *readyqueue;
    QTextBrowser *bufferqueue;
    QLabel *Bufferqueue;
    QLabel *work1;
    QLabel *arrivetime1;
    QLabel *needtime;
    QLabel *finishtime;
    QLabel *Ti;
    QLabel *work2;
    QLabel *label_10;
    QLabel *servetime2;
    QLabel *label_18;
    QLabel *Wi;
    QLabel *work3;
    QLabel *label_13;
    QLabel *arrivetime2;
    QLabel *arrivetime3;
    QLabel *servetime1;
    QProgressBar *RATEofProgress;
    QLabel *SPEED;
    QTextBrowser *readyqueue_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProcessSecond)
    {
        if (ProcessSecond->objectName().isEmpty())
            ProcessSecond->setObjectName(QStringLiteral("ProcessSecond"));
        ProcessSecond->resize(800, 600);
        centralwidget = new QWidget(ProcessSecond);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        init = new QPushButton(centralwidget);
        init->setObjectName(QStringLiteral("init"));
        init->setGeometry(QRect(610, 360, 93, 28));
        begin = new QPushButton(centralwidget);
        begin->setObjectName(QStringLiteral("begin"));
        begin->setGeometry(QRect(610, 410, 93, 28));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(610, 460, 93, 28));
        initwork = new QLineEdit(centralwidget);
        initwork->setObjectName(QStringLiteral("initwork"));
        initwork->setGeometry(QRect(660, 100, 50, 20));
        Initwork = new QLabel(centralwidget);
        Initwork->setObjectName(QStringLiteral("Initwork"));
        Initwork->setGeometry(QRect(500, 100, 139, 20));
        Time = new QLabel(centralwidget);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(500, 140, 95, 20));
        time = new QLineEdit(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(660, 140, 50, 20));
        dispatch = new QGroupBox(centralwidget);
        dispatch->setObjectName(QStringLiteral("dispatch"));
        dispatch->setGeometry(QRect(540, 200, 161, 71));
        fcfs = new QRadioButton(dispatch);
        fcfs->setObjectName(QStringLiteral("fcfs"));
        fcfs->setGeometry(QRect(10, 20, 131, 19));
        stf = new QRadioButton(dispatch);
        stf->setObjectName(QStringLiteral("stf"));
        stf->setGeometry(QRect(10, 50, 131, 19));
        finishwork = new QTextBrowser(centralwidget);
        finishwork->setObjectName(QStringLiteral("finishwork"));
        finishwork->setGeometry(QRect(20, 50, 451, 141));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 10, 121, 20));
        readyqueue = new QTextBrowser(centralwidget);
        readyqueue->setObjectName(QStringLiteral("readyqueue"));
        readyqueue->setGeometry(QRect(20, 320, 431, 71));
        bufferqueue = new QTextBrowser(centralwidget);
        bufferqueue->setObjectName(QStringLiteral("bufferqueue"));
        bufferqueue->setGeometry(QRect(20, 450, 431, 91));
        Bufferqueue = new QLabel(centralwidget);
        Bufferqueue->setObjectName(QStringLiteral("Bufferqueue"));
        Bufferqueue->setGeometry(QRect(210, 400, 161, 16));
        work1 = new QLabel(centralwidget);
        work1->setObjectName(QStringLiteral("work1"));
        work1->setGeometry(QRect(20, 30, 55, 16));
        arrivetime1 = new QLabel(centralwidget);
        arrivetime1->setObjectName(QStringLiteral("arrivetime1"));
        arrivetime1->setGeometry(QRect(110, 30, 61, 16));
        needtime = new QLabel(centralwidget);
        needtime->setObjectName(QStringLiteral("needtime"));
        needtime->setGeometry(QRect(180, 30, 61, 16));
        finishtime = new QLabel(centralwidget);
        finishtime->setObjectName(QStringLiteral("finishtime"));
        finishtime->setGeometry(QRect(250, 30, 72, 15));
        Ti = new QLabel(centralwidget);
        Ti->setObjectName(QStringLiteral("Ti"));
        Ti->setGeometry(QRect(330, 30, 61, 16));
        work2 = new QLabel(centralwidget);
        work2->setObjectName(QStringLiteral("work2"));
        work2->setGeometry(QRect(20, 260, 55, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(330, 260, 81, 16));
        servetime2 = new QLabel(centralwidget);
        servetime2->setObjectName(QStringLiteral("servetime2"));
        servetime2->setGeometry(QRect(200, 430, 101, 16));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(200, 230, 121, 16));
        Wi = new QLabel(centralwidget);
        Wi->setObjectName(QStringLiteral("Wi"));
        Wi->setGeometry(QRect(400, 30, 91, 16));
        work3 = new QLabel(centralwidget);
        work3->setObjectName(QStringLiteral("work3"));
        work3->setGeometry(QRect(20, 430, 55, 16));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(330, 430, 81, 16));
        arrivetime2 = new QLabel(centralwidget);
        arrivetime2->setObjectName(QStringLiteral("arrivetime2"));
        arrivetime2->setGeometry(QRect(110, 260, 61, 16));
        arrivetime3 = new QLabel(centralwidget);
        arrivetime3->setObjectName(QStringLiteral("arrivetime3"));
        arrivetime3->setGeometry(QRect(110, 430, 61, 16));
        servetime1 = new QLabel(centralwidget);
        servetime1->setObjectName(QStringLiteral("servetime1"));
        servetime1->setGeometry(QRect(200, 260, 101, 16));
        RATEofProgress = new QProgressBar(centralwidget);
        RATEofProgress->setObjectName(QStringLiteral("RATEofProgress"));
        RATEofProgress->setGeometry(QRect(200, 200, 291, 20));
        RATEofProgress->setValue(24);
        SPEED = new QLabel(centralwidget);
        SPEED->setObjectName(QStringLiteral("SPEED"));
        SPEED->setGeometry(QRect(50, 200, 121, 20));
        readyqueue_2 = new QTextBrowser(centralwidget);
        readyqueue_2->setObjectName(QStringLiteral("readyqueue_2"));
        readyqueue_2->setGeometry(QRect(20, 280, 431, 31));
        ProcessSecond->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProcessSecond);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        ProcessSecond->setMenuBar(menubar);
        statusbar = new QStatusBar(ProcessSecond);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ProcessSecond->setStatusBar(statusbar);

        retranslateUi(ProcessSecond);

        QMetaObject::connectSlotsByName(ProcessSecond);
    } // setupUi

    void retranslateUi(QMainWindow *ProcessSecond)
    {
        ProcessSecond->setWindowTitle(QApplication::translate("ProcessSecond", "MainWindow", Q_NULLPTR));
        init->setText(QApplication::translate("ProcessSecond", "\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
        begin->setText(QApplication::translate("ProcessSecond", "\345\274\200\345\247\213\346\250\241\346\213\237", Q_NULLPTR));
        clear->setText(QApplication::translate("ProcessSecond", "\346\270\205\351\231\244\345\261\217\345\271\225", Q_NULLPTR));
        Initwork->setText(QApplication::translate("ProcessSecond", "\345\210\235\345\247\213\345\214\226\347\232\204\344\275\234\344\270\232\346\225\260", Q_NULLPTR));
        Time->setText(QApplication::translate("ProcessSecond", "\346\227\266\351\227\264\347\211\207\351\225\277\345\272\246", Q_NULLPTR));
        dispatch->setTitle(QApplication::translate("ProcessSecond", "\350\260\203\345\272\246\347\256\227\346\263\225", Q_NULLPTR));
        fcfs->setText(QApplication::translate("ProcessSecond", "\345\205\210\346\235\245\345\205\210\346\234\215\345\212\241\347\256\227\346\263\225", Q_NULLPTR));
        stf->setText(QApplication::translate("ProcessSecond", "\347\237\255\344\275\234\344\270\232\344\274\230\345\205\210\347\256\227\346\263\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("ProcessSecond", "\344\275\234\344\270\232\345\256\214\346\210\220\346\203\205\345\206\265\346\230\276\347\244\272", Q_NULLPTR));
        Bufferqueue->setText(QApplication::translate("ProcessSecond", "\344\275\234\344\270\232\347\274\223\345\206\262\351\230\237\345\210\227\346\230\276\347\244\272", Q_NULLPTR));
        work1->setText(QApplication::translate("ProcessSecond", "\344\275\234\344\270\232ID", Q_NULLPTR));
        arrivetime1->setText(QApplication::translate("ProcessSecond", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        needtime->setText(QApplication::translate("ProcessSecond", "\346\211\200\351\234\200\346\227\266\351\227\264", Q_NULLPTR));
        finishtime->setText(QApplication::translate("ProcessSecond", "\345\256\214\346\210\220\346\227\266\351\227\264", Q_NULLPTR));
        Ti->setText(QApplication::translate("ProcessSecond", "\345\221\250\350\275\254\346\227\266\351\227\264", Q_NULLPTR));
        work2->setText(QApplication::translate("ProcessSecond", "\344\275\234\344\270\232ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("ProcessSecond", "\345\267\262\350\277\220\350\241\214\346\227\266\351\227\264", Q_NULLPTR));
        servetime2->setText(QApplication::translate("ProcessSecond", "\346\211\200\351\234\200\346\234\215\345\212\241\346\227\266\351\227\264", Q_NULLPTR));
        label_18->setText(QApplication::translate("ProcessSecond", "\344\275\234\344\270\232\345\220\216\345\244\207\351\230\237\345\210\227\346\230\276\347\244\272", Q_NULLPTR));
        Wi->setText(QApplication::translate("ProcessSecond", "\345\270\246\346\235\203\345\221\250\350\275\254\346\227\266\351\227\264", Q_NULLPTR));
        work3->setText(QApplication::translate("ProcessSecond", "\344\275\234\344\270\232ID", Q_NULLPTR));
        label_13->setText(QApplication::translate("ProcessSecond", "\345\267\262\350\277\220\350\241\214\346\227\266\351\227\264", Q_NULLPTR));
        arrivetime2->setText(QApplication::translate("ProcessSecond", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        arrivetime3->setText(QApplication::translate("ProcessSecond", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        servetime1->setText(QApplication::translate("ProcessSecond", "\346\211\200\351\234\200\346\234\215\345\212\241\346\227\266\351\227\264", Q_NULLPTR));
        SPEED->setText(QApplication::translate("ProcessSecond", "\345\275\223\345\211\215\344\275\234\344\270\232\350\277\220\350\241\214\351\200\237\345\272\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessSecond: public Ui_ProcessSecond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSSECOND_H
