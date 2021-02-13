/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_2;
    QLineEdit *lineEditAcount;
    QLabel *label_3;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *radioButtonstudent;
    QRadioButton *radioButtonadmin;
    QRadioButton *radioButtonteacher;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancal;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setWindowModality(Qt::WindowModal);
        Widget->resize(441, 400);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 75 14pt \"Arial\";"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_9 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(80, 22));
        label_2->setStyleSheet(QLatin1String("QLable\n"
"{\n"
"font: 75 20pt \"Arial\";\n"
"color: rgb(255, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        lineEditAcount = new QLineEdit(widget);
        lineEditAcount->setObjectName(QStringLiteral("lineEditAcount"));

        gridLayout->addWidget(lineEditAcount, 0, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        gridLayout->addWidget(lineEditPassword, 1, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 4, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        radioButtonstudent = new QRadioButton(widget_2);
        radioButtonstudent->setObjectName(QStringLiteral("radioButtonstudent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/\345\255\246\347\224\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonstudent->setIcon(icon);

        horizontalLayout->addWidget(radioButtonstudent);

        radioButtonadmin = new QRadioButton(widget_2);
        radioButtonadmin->setObjectName(QStringLiteral("radioButtonadmin"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/\346\225\231\345\270\210.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonadmin->setIcon(icon1);

        horizontalLayout->addWidget(radioButtonadmin);

        radioButtonteacher = new QRadioButton(widget_2);
        radioButtonteacher->setObjectName(QStringLiteral("radioButtonteacher"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/\347\256\241\347\220\206\345\221\230.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonteacher->setIcon(icon2);

        horizontalLayout->addWidget(radioButtonteacher);

        horizontalSpacer_7 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        widget_4 = new QWidget(Widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        login = new QPushButton(widget_4);
        login->setObjectName(QStringLiteral("login"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/image/Forward_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setIcon(icon3);

        horizontalLayout_3->addWidget(login);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        cancal = new QPushButton(widget_4);
        cancal->setObjectName(QStringLiteral("cancal"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/image/Back_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancal->setIcon(icon4);

        horizontalLayout_3->addWidget(cancal);

        horizontalSpacer_5 = new QSpacerItem(42, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\350\264\246  \345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        radioButtonstudent->setText(QApplication::translate("Widget", "\345\255\246\347\224\237", Q_NULLPTR));
        radioButtonadmin->setText(QApplication::translate("Widget", "\346\225\231\345\270\210", Q_NULLPTR));
        radioButtonteacher->setText(QApplication::translate("Widget", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", Q_NULLPTR));
        cancal->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
