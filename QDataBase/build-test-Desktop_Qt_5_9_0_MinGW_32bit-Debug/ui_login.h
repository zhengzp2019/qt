/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QTableView *tableView;
    QPushButton *display;
    QLabel *labelname;
    QLineEdit *lineEditname;
    QPushButton *pushButtonconfirm;
    QPushButton *pushButtonundo;
    QPushButton *pushButtondelete;
    QPushButton *pushButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(800, 600);
        tableView = new QTableView(Login);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 30, 461, 341));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        display = new QPushButton(Login);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(190, 420, 98, 26));
        labelname = new QLabel(Login);
        labelname->setObjectName(QStringLiteral("labelname"));
        labelname->setGeometry(QRect(120, 510, 54, 12));
        lineEditname = new QLineEdit(Login);
        lineEditname->setObjectName(QStringLiteral("lineEditname"));
        lineEditname->setGeometry(QRect(230, 510, 113, 20));
        pushButtonconfirm = new QPushButton(Login);
        pushButtonconfirm->setObjectName(QStringLiteral("pushButtonconfirm"));
        pushButtonconfirm->setGeometry(QRect(230, 560, 80, 20));
        pushButtonundo = new QPushButton(Login);
        pushButtonundo->setObjectName(QStringLiteral("pushButtonundo"));
        pushButtonundo->setGeometry(QRect(330, 560, 80, 20));
        pushButtondelete = new QPushButton(Login);
        pushButtondelete->setObjectName(QStringLiteral("pushButtondelete"));
        pushButtondelete->setGeometry(QRect(130, 560, 80, 20));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 430, 98, 26));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        display->setText(QApplication::translate("Login", "\346\230\276\347\244\272\346\225\260\346\215\256", Q_NULLPTR));
        labelname->setText(QApplication::translate("Login", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        pushButtonconfirm->setText(QApplication::translate("Login", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButtonundo->setText(QApplication::translate("Login", "\346\222\244\351\224\200", Q_NULLPTR));
        pushButtondelete->setText(QApplication::translate("Login", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login", "\346\265\213\350\257\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
