/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QAction *actionSearchStudent;
    QAction *actionAddStudent;
    QAction *actionSearchTeacher;
    QAction *actionAddTeacher;
    QAction *actionAddCourse;
    QAction *actionDropCourse;
    QAction *actionSearchCourse;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *addTeacher;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_22;
    QRadioButton *radioButtontman;
    QRadioButton *radioButtontwoman;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_24;
    QComboBox *comboBoxpost;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdittTName;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEdittno;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_23;
    QSpinBox *spinBoxtage;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *lineEdittpassword;
    QPushButton *pushButtontconfirm;
    QPushButton *pushButtontundo;
    QWidget *display;
    QTableView *tableViewcourse;
    QWidget *widgetdelete;
    QHBoxLayout *horizontalLayout;
    QLabel *labelcname;
    QLineEdit *lineEditcnamedelete;
    QPushButton *pushButtonsearch;
    QPushButton *pushButtonrefresh;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButtonconfirmdelete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonundodelete;
    QWidget *addCourse;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEditcmaxnum;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QLineEdit *lineEditccard;
    QLineEdit *lineEditcno;
    QLineEdit *lineEditcnameadd;
    QLabel *label_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonconfirmadd;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonundoadd;
    QWidget *addStudent;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEditsno;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_21;
    QRadioButton *radioButtonsman;
    QRadioButton *radioButtonswoman;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEditsName;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_20;
    QSpinBox *spinBoxsage;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *lineEditspassword;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_19;
    QComboBox *comboBoxsmajor;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QComboBox *comboBoxsyear;
    QPushButton *pushButtonSconfirm;
    QPushButton *pushButtonSundo;
    QWidget *Search;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonStudent;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *radioButtonTeacher;
    QTableView *tableView;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditID;
    QPushButton *pushButtonSTsearch;
    QGroupBox *function;
    QGridLayout *gridLayout_2;
    QPushButton *addStudentButton;
    QPushButton *searchTeacher;
    QPushButton *searchStudent;
    QPushButton *addCourseButton;
    QPushButton *addTeacherButton;
    QPushButton *displayCourseButton;
    QPushButton *dropCourseButton;
    QLabel *label;
    QLabel *labelbackground;
    QMenuBar *menubar;
    QMenu *manageStudent;
    QMenu *manageTeacher;
    QMenu *manageCourse;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/\350\223\235\350\211\262\345\260\217\351\270\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        Admin->setWindowIcon(icon);
        actionSearchStudent = new QAction(Admin);
        actionSearchStudent->setObjectName(QStringLiteral("actionSearchStudent"));
        actionSearchStudent->setCheckable(false);
        actionSearchStudent->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/image/\346\220\234\347\264\242--1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearchStudent->setIcon(icon1);
        actionSearchStudent->setShortcutContext(Qt::WindowShortcut);
        actionAddStudent = new QAction(Admin);
        actionAddStudent->setObjectName(QStringLiteral("actionAddStudent"));
        actionAddStudent->setCheckable(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/image/\346\267\273\345\212\240.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddStudent->setIcon(icon2);
        actionSearchTeacher = new QAction(Admin);
        actionSearchTeacher->setObjectName(QStringLiteral("actionSearchTeacher"));
        actionSearchTeacher->setIcon(icon1);
        actionAddTeacher = new QAction(Admin);
        actionAddTeacher->setObjectName(QStringLiteral("actionAddTeacher"));
        actionAddTeacher->setIcon(icon2);
        actionAddCourse = new QAction(Admin);
        actionAddCourse->setObjectName(QStringLiteral("actionAddCourse"));
        actionAddCourse->setIcon(icon2);
        actionDropCourse = new QAction(Admin);
        actionDropCourse->setObjectName(QStringLiteral("actionDropCourse"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/image/Garbage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDropCourse->setIcon(icon3);
        actionSearchCourse = new QAction(Admin);
        actionSearchCourse->setObjectName(QStringLiteral("actionSearchCourse"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/image/\346\230\276\347\244\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearchCourse->setIcon(icon4);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 120, 475, 430));
        addTeacher = new QWidget();
        addTeacher->setObjectName(QStringLiteral("addTeacher"));
        groupBox_2 = new QGroupBox(addTeacher);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 40, 300, 280));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        groupBox_2->setFont(font);
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_22->setFont(font1);

        horizontalLayout_17->addWidget(label_22);

        radioButtontman = new QRadioButton(groupBox_2);
        radioButtontman->setObjectName(QStringLiteral("radioButtontman"));
        QFont font2;
        font2.setPointSize(10);
        radioButtontman->setFont(font2);

        horizontalLayout_17->addWidget(radioButtontman);

        radioButtontwoman = new QRadioButton(groupBox_2);
        radioButtontwoman->setObjectName(QStringLiteral("radioButtontwoman"));
        radioButtontwoman->setFont(font2);

        horizontalLayout_17->addWidget(radioButtontwoman);


        gridLayout_3->addLayout(horizontalLayout_17, 0, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);

        horizontalLayout_19->addWidget(label_24);

        comboBoxpost = new QComboBox(groupBox_2);
        comboBoxpost->setObjectName(QStringLiteral("comboBoxpost"));
        comboBoxpost->setFont(font2);
        comboBoxpost->setEditable(true);

        horizontalLayout_19->addWidget(comboBoxpost);


        gridLayout_3->addLayout(horizontalLayout_19, 2, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout_11->addWidget(label_12);

        lineEdittTName = new QLineEdit(groupBox_2);
        lineEdittTName->setObjectName(QStringLiteral("lineEdittTName"));
        lineEdittTName->setFont(font2);

        horizontalLayout_11->addWidget(lineEdittTName);


        gridLayout_3->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_10->addWidget(label_11);

        lineEdittno = new QLineEdit(groupBox_2);
        lineEdittno->setObjectName(QStringLiteral("lineEdittno"));
        lineEdittno->setFont(font2);

        horizontalLayout_10->addWidget(lineEdittno);


        gridLayout_3->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font1);

        horizontalLayout_18->addWidget(label_23);

        spinBoxtage = new QSpinBox(groupBox_2);
        spinBoxtage->setObjectName(QStringLiteral("spinBoxtage"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(10);
        spinBoxtage->setFont(font3);
        spinBoxtage->setMinimum(20);
        spinBoxtage->setMaximum(80);

        horizontalLayout_18->addWidget(spinBoxtage);


        gridLayout_3->addLayout(horizontalLayout_18, 1, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        horizontalLayout_12->addWidget(label_13);

        lineEdittpassword = new QLineEdit(groupBox_2);
        lineEdittpassword->setObjectName(QStringLiteral("lineEdittpassword"));
        lineEdittpassword->setFont(font2);
        lineEdittpassword->setReadOnly(false);

        horizontalLayout_12->addWidget(lineEdittpassword);


        gridLayout_3->addLayout(horizontalLayout_12, 2, 0, 1, 1);

        pushButtontconfirm = new QPushButton(addTeacher);
        pushButtontconfirm->setObjectName(QStringLiteral("pushButtontconfirm"));
        pushButtontconfirm->setGeometry(QRect(80, 360, 98, 26));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/image/Icon - \345\255\246\345\210\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtontconfirm->setIcon(icon5);
        pushButtontundo = new QPushButton(addTeacher);
        pushButtontundo->setObjectName(QStringLiteral("pushButtontundo"));
        pushButtontundo->setGeometry(QRect(240, 360, 98, 26));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/image/Back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtontundo->setIcon(icon6);
        stackedWidget->addWidget(addTeacher);
        display = new QWidget();
        display->setObjectName(QStringLiteral("display"));
        tableViewcourse = new QTableView(display);
        tableViewcourse->setObjectName(QStringLiteral("tableViewcourse"));
        tableViewcourse->setGeometry(QRect(5, 70, 450, 261));
        tableViewcourse->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableViewcourse->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewcourse->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewcourse->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewcourse->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        widgetdelete = new QWidget(display);
        widgetdelete->setObjectName(QStringLiteral("widgetdelete"));
        widgetdelete->setGeometry(QRect(50, 10, 301, 51));
        horizontalLayout = new QHBoxLayout(widgetdelete);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelcname = new QLabel(widgetdelete);
        labelcname->setObjectName(QStringLiteral("labelcname"));
        QFont font4;
        font4.setFamily(QStringLiteral("Adobe Devanagari"));
        font4.setPointSize(10);
        labelcname->setFont(font4);
        labelcname->setFrameShape(QFrame::NoFrame);
        labelcname->setScaledContents(false);

        horizontalLayout->addWidget(labelcname);

        lineEditcnamedelete = new QLineEdit(widgetdelete);
        lineEditcnamedelete->setObjectName(QStringLiteral("lineEditcnamedelete"));

        horizontalLayout->addWidget(lineEditcnamedelete);

        pushButtonsearch = new QPushButton(widgetdelete);
        pushButtonsearch->setObjectName(QStringLiteral("pushButtonsearch"));
        pushButtonsearch->setFont(font4);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/image/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonsearch->setIcon(icon7);
        pushButtonsearch->setCheckable(false);
        pushButtonsearch->setFlat(true);

        horizontalLayout->addWidget(pushButtonsearch);

        pushButtonrefresh = new QPushButton(display);
        pushButtonrefresh->setObjectName(QStringLiteral("pushButtonrefresh"));
        pushButtonrefresh->setGeometry(QRect(410, 40, 60, 30));
        pushButtonrefresh->setFont(font4);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/image/Update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonrefresh->setIcon(icon8);
        pushButtonrefresh->setAutoDefault(false);
        pushButtonrefresh->setFlat(true);
        widget_6 = new QWidget(display);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(100, 350, 261, 51));
        horizontalLayout_13 = new QHBoxLayout(widget_6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pushButtonconfirmdelete = new QPushButton(widget_6);
        pushButtonconfirmdelete->setObjectName(QStringLiteral("pushButtonconfirmdelete"));
        pushButtonconfirmdelete->setFont(font4);
        pushButtonconfirmdelete->setIcon(icon5);

        horizontalLayout_13->addWidget(pushButtonconfirmdelete);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        pushButtonundodelete = new QPushButton(widget_6);
        pushButtonundodelete->setObjectName(QStringLiteral("pushButtonundodelete"));
        pushButtonundodelete->setFont(font4);
        pushButtonundodelete->setIcon(icon6);
        pushButtonundodelete->setIconSize(QSize(18, 18));
        pushButtonundodelete->setAutoRepeat(false);

        horizontalLayout_13->addWidget(pushButtonundodelete);

        stackedWidget->addWidget(display);
        addCourse = new QWidget();
        addCourse->setObjectName(QStringLiteral("addCourse"));
        widget_5 = new QWidget(addCourse);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(110, 50, 281, 211));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lineEditcmaxnum = new QLineEdit(widget_5);
        lineEditcmaxnum->setObjectName(QStringLiteral("lineEditcmaxnum"));

        gridLayout_4->addWidget(lineEditcmaxnum, 2, 1, 1, 1);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        lineEditccard = new QLineEdit(widget_5);
        lineEditccard->setObjectName(QStringLiteral("lineEditccard"));

        gridLayout_4->addWidget(lineEditccard, 3, 1, 1, 1);

        lineEditcno = new QLineEdit(widget_5);
        lineEditcno->setObjectName(QStringLiteral("lineEditcno"));

        gridLayout_4->addWidget(lineEditcno, 0, 1, 1, 1);

        lineEditcnameadd = new QLineEdit(widget_5);
        lineEditcnameadd->setObjectName(QStringLiteral("lineEditcnameadd"));

        gridLayout_4->addWidget(lineEditcnameadd, 1, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setTextFormat(Qt::AutoText);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        widget_4 = new QWidget(addCourse);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(130, 290, 233, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonconfirmadd = new QPushButton(widget_4);
        pushButtonconfirmadd->setObjectName(QStringLiteral("pushButtonconfirmadd"));
        pushButtonconfirmadd->setFont(font4);
        pushButtonconfirmadd->setIcon(icon5);

        horizontalLayout_2->addWidget(pushButtonconfirmadd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonundoadd = new QPushButton(widget_4);
        pushButtonundoadd->setObjectName(QStringLiteral("pushButtonundoadd"));
        pushButtonundoadd->setFont(font4);
        pushButtonundoadd->setIcon(icon6);

        horizontalLayout_2->addWidget(pushButtonundoadd);

        stackedWidget->addWidget(addCourse);
        addStudent = new QWidget();
        addStudent->setObjectName(QStringLiteral("addStudent"));
        groupBox = new QGroupBox(addStudent);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 300, 280));
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        groupBox->setChecked(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_6->addWidget(label_8);

        lineEditsno = new QLineEdit(groupBox);
        lineEditsno->setObjectName(QStringLiteral("lineEditsno"));
        lineEditsno->setFont(font2);

        horizontalLayout_6->addWidget(lineEditsno);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font1);

        horizontalLayout_15->addWidget(label_21);

        radioButtonsman = new QRadioButton(groupBox);
        radioButtonsman->setObjectName(QStringLiteral("radioButtonsman"));
        radioButtonsman->setFont(font2);

        horizontalLayout_15->addWidget(radioButtonsman);

        radioButtonswoman = new QRadioButton(groupBox);
        radioButtonswoman->setObjectName(QStringLiteral("radioButtonswoman"));
        radioButtonswoman->setFont(font2);

        horizontalLayout_15->addWidget(radioButtonswoman);


        gridLayout->addLayout(horizontalLayout_15, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        horizontalLayout_8->addWidget(label_9);

        lineEditsName = new QLineEdit(groupBox);
        lineEditsName->setObjectName(QStringLiteral("lineEditsName"));
        lineEditsName->setFont(font2);

        horizontalLayout_8->addWidget(lineEditsName);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font1);

        horizontalLayout_14->addWidget(label_20);

        spinBoxsage = new QSpinBox(groupBox);
        spinBoxsage->setObjectName(QStringLiteral("spinBoxsage"));
        spinBoxsage->setFont(font3);
        spinBoxsage->setMinimum(15);
        spinBoxsage->setMaximum(25);
        spinBoxsage->setValue(18);

        horizontalLayout_14->addWidget(spinBoxsage);


        gridLayout->addLayout(horizontalLayout_14, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_5->addWidget(label_10);

        lineEditspassword = new QLineEdit(groupBox);
        lineEditspassword->setObjectName(QStringLiteral("lineEditspassword"));
        lineEditspassword->setFont(font2);
        lineEditspassword->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEditspassword);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font1);

        horizontalLayout_16->addWidget(label_19);

        comboBoxsmajor = new QComboBox(groupBox);
        comboBoxsmajor->setObjectName(QStringLiteral("comboBoxsmajor"));
        comboBoxsmajor->setFont(font2);
        comboBoxsmajor->setEditable(true);

        horizontalLayout_16->addWidget(comboBoxsmajor);


        gridLayout->addLayout(horizontalLayout_16, 2, 1, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font1);

        horizontalLayout_20->addWidget(label_25);

        comboBoxsyear = new QComboBox(groupBox);
        comboBoxsyear->setObjectName(QStringLiteral("comboBoxsyear"));
        comboBoxsyear->setFont(font2);
        comboBoxsyear->setEditable(true);

        horizontalLayout_20->addWidget(comboBoxsyear);


        gridLayout->addLayout(horizontalLayout_20, 3, 0, 1, 2);

        pushButtonSconfirm = new QPushButton(addStudent);
        pushButtonSconfirm->setObjectName(QStringLiteral("pushButtonSconfirm"));
        pushButtonSconfirm->setGeometry(QRect(80, 340, 98, 26));
        pushButtonSconfirm->setIcon(icon5);
        pushButtonSundo = new QPushButton(addStudent);
        pushButtonSundo->setObjectName(QStringLiteral("pushButtonSundo"));
        pushButtonSundo->setGeometry(QRect(220, 340, 98, 26));
        pushButtonSundo->setIcon(icon6);
        stackedWidget->addWidget(addStudent);
        Search = new QWidget();
        Search->setObjectName(QStringLiteral("Search"));
        widget_3 = new QWidget(Search);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(90, 70, 241, 42));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButtonStudent = new QRadioButton(widget_3);
        radioButtonStudent->setObjectName(QStringLiteral("radioButtonStudent"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/image/\345\255\246\347\224\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonStudent->setIcon(icon9);

        horizontalLayout_4->addWidget(radioButtonStudent);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        radioButtonTeacher = new QRadioButton(widget_3);
        radioButtonTeacher->setObjectName(QStringLiteral("radioButtonTeacher"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/image/\346\225\231\345\270\210.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonTeacher->setIcon(icon10);

        horizontalLayout_4->addWidget(radioButtonTeacher);

        tableView = new QTableView(Search);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 140, 470, 220));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        widget_2 = new QWidget(Search);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(30, 10, 368, 45));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEditID = new QLineEdit(widget_2);
        lineEditID->setObjectName(QStringLiteral("lineEditID"));

        horizontalLayout_3->addWidget(lineEditID);

        pushButtonSTsearch = new QPushButton(widget_2);
        pushButtonSTsearch->setObjectName(QStringLiteral("pushButtonSTsearch"));
        pushButtonSTsearch->setIcon(icon7);
        pushButtonSTsearch->setFlat(true);

        horizontalLayout_3->addWidget(pushButtonSTsearch);

        stackedWidget->addWidget(Search);
        function = new QGroupBox(centralwidget);
        function->setObjectName(QStringLiteral("function"));
        function->setGeometry(QRect(550, 180, 190, 331));
        QFont font5;
        font5.setFamily(QStringLiteral("Adobe Devanagari"));
        font5.setPointSize(11);
        function->setFont(font5);
        function->setAlignment(Qt::AlignCenter);
        function->setFlat(true);
        gridLayout_2 = new QGridLayout(function);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        addStudentButton = new QPushButton(function);
        addStudentButton->setObjectName(QStringLiteral("addStudentButton"));
        addStudentButton->setFont(font4);

        gridLayout_2->addWidget(addStudentButton, 0, 1, 1, 1);

        searchTeacher = new QPushButton(function);
        searchTeacher->setObjectName(QStringLiteral("searchTeacher"));
        searchTeacher->setFont(font4);

        gridLayout_2->addWidget(searchTeacher, 1, 0, 1, 1);

        searchStudent = new QPushButton(function);
        searchStudent->setObjectName(QStringLiteral("searchStudent"));
        searchStudent->setFont(font4);

        gridLayout_2->addWidget(searchStudent, 0, 0, 1, 1);

        addCourseButton = new QPushButton(function);
        addCourseButton->setObjectName(QStringLiteral("addCourseButton"));
        addCourseButton->setFont(font4);

        gridLayout_2->addWidget(addCourseButton, 2, 0, 1, 1);

        addTeacherButton = new QPushButton(function);
        addTeacherButton->setObjectName(QStringLiteral("addTeacherButton"));
        addTeacherButton->setFont(font4);

        gridLayout_2->addWidget(addTeacherButton, 1, 1, 1, 1);

        displayCourseButton = new QPushButton(function);
        displayCourseButton->setObjectName(QStringLiteral("displayCourseButton"));
        displayCourseButton->setFont(font4);

        gridLayout_2->addWidget(displayCourseButton, 3, 0, 1, 2);

        dropCourseButton = new QPushButton(function);
        dropCourseButton->setObjectName(QStringLiteral("dropCourseButton"));
        dropCourseButton->setFont(font4);

        gridLayout_2->addWidget(dropCourseButton, 2, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 50, 211, 51));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font6.setPointSize(26);
        label->setFont(font6);
        label->setMouseTracking(false);
        label->setInputMethodHints(Qt::ImhNone);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        labelbackground = new QLabel(centralwidget);
        labelbackground->setObjectName(QStringLiteral("labelbackground"));
        labelbackground->setGeometry(QRect(0, 0, 800, 600));
        labelbackground->setAutoFillBackground(false);
        labelbackground->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/background.jpg")));
        labelbackground->setScaledContents(true);
        labelbackground->setOpenExternalLinks(false);
        Admin->setCentralWidget(centralwidget);
        labelbackground->raise();
        stackedWidget->raise();
        function->raise();
        label->raise();
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        manageStudent = new QMenu(menubar);
        manageStudent->setObjectName(QStringLiteral("manageStudent"));
        manageStudent->setAutoFillBackground(false);
        manageStudent->setTearOffEnabled(false);
        manageStudent->setSeparatorsCollapsible(true);
        manageStudent->setToolTipsVisible(true);
        manageTeacher = new QMenu(menubar);
        manageTeacher->setObjectName(QStringLiteral("manageTeacher"));
        manageTeacher->setToolTipsVisible(true);
        manageCourse = new QMenu(menubar);
        manageCourse->setObjectName(QStringLiteral("manageCourse"));
        manageCourse->setToolTipsVisible(true);
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        menubar->addAction(manageStudent->menuAction());
        menubar->addAction(manageTeacher->menuAction());
        menubar->addAction(manageCourse->menuAction());
        manageStudent->addAction(actionSearchStudent);
        manageStudent->addAction(actionAddStudent);
        manageTeacher->addAction(actionSearchTeacher);
        manageTeacher->addAction(actionAddTeacher);
        manageCourse->addAction(actionAddCourse);
        manageCourse->addAction(actionDropCourse);
        manageCourse->addAction(actionSearchCourse);

        retranslateUi(Admin);

        stackedWidget->setCurrentIndex(1);
        comboBoxpost->setCurrentIndex(0);
        pushButtonrefresh->setDefault(false);
        comboBoxsmajor->setCurrentIndex(0);
        comboBoxsyear->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", Q_NULLPTR));
        actionSearchStudent->setText(QApplication::translate("Admin", "\346\237\245\347\234\213\345\255\246\347\224\237", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSearchStudent->setShortcut(QApplication::translate("Admin", "Ctrl+S, S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddStudent->setText(QApplication::translate("Admin", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAddStudent->setShortcut(QApplication::translate("Admin", "Ctrl+S, A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSearchTeacher->setText(QApplication::translate("Admin", "\346\237\245\347\234\213\346\225\231\345\270\210", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSearchTeacher->setShortcut(QApplication::translate("Admin", "Ctrl+T, S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddTeacher->setText(QApplication::translate("Admin", "\346\267\273\345\212\240\346\225\231\345\270\210", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAddTeacher->setShortcut(QApplication::translate("Admin", "Ctrl+T, A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddCourse->setText(QApplication::translate("Admin", "\346\267\273\345\212\240\350\257\276\347\250\213", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAddCourse->setShortcut(QApplication::translate("Admin", "Ctrl+C, A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDropCourse->setText(QApplication::translate("Admin", "\345\210\240\351\231\244\350\257\276\347\250\213", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionDropCourse->setShortcut(QApplication::translate("Admin", "Ctrl+C, D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSearchCourse->setText(QApplication::translate("Admin", "\346\230\276\347\244\272\350\257\276\347\250\213", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSearchCourse->setShortcut(QApplication::translate("Admin", "Ctrl+C, S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        groupBox_2->setTitle(QApplication::translate("Admin", "\344\270\252\344\272\272\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        label_22->setText(QApplication::translate("Admin", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        radioButtontman->setText(QApplication::translate("Admin", "\347\224\267", Q_NULLPTR));
        radioButtontwoman->setText(QApplication::translate("Admin", "\345\245\263", Q_NULLPTR));
        label_24->setText(QApplication::translate("Admin", "\350\201\214\347\247\260\357\274\232", Q_NULLPTR));
        comboBoxpost->clear();
        comboBoxpost->insertItems(0, QStringList()
         << QApplication::translate("Admin", "\346\225\231\346\216\210", Q_NULLPTR)
         << QApplication::translate("Admin", "\345\211\257\346\225\231\346\216\210", Q_NULLPTR)
         << QApplication::translate("Admin", "\350\256\262\345\270\210", Q_NULLPTR)
        );
        comboBoxpost->setCurrentText(QApplication::translate("Admin", "\346\225\231\346\216\210", Q_NULLPTR));
        label_12->setText(QApplication::translate("Admin", "\345\247\223\345\220\215\357\274\232 ", Q_NULLPTR));
        label_11->setText(QApplication::translate("Admin", "\350\201\214\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("Admin", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("Admin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButtontconfirm->setText(QApplication::translate("Admin", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButtontundo->setText(QApplication::translate("Admin", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButtontundo->setShortcut(QApplication::translate("Admin", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        labelcname->setText(QApplication::translate("Admin", "\350\257\276\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButtonsearch->setToolTip(QApplication::translate("Admin", "<html><head/><body><p>\346\237\245\346\211\276</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonsearch->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButtonsearch->setShortcut(QApplication::translate("Admin", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pushButtonrefresh->setToolTip(QApplication::translate("Admin", "<html><head/><body><p>\345\210\267\346\226\260</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonrefresh->setWhatsThis(QApplication::translate("Admin", "<html><head/><body><p>\345\210\267\346\226\260</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButtonrefresh->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButtonrefresh->setShortcut(QApplication::translate("Admin", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButtonconfirmdelete->setText(QApplication::translate("Admin", "\347\241\256\350\256\244", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButtonconfirmdelete->setShortcut(QApplication::translate("Admin", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButtonundodelete->setText(QApplication::translate("Admin", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButtonundodelete->setShortcut(QApplication::translate("Admin", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("Admin", "\350\257\276\347\250\213\346\200\273\351\207\217\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("Admin", "\350\257\276\347\250\213\345\255\246\345\210\206\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Admin", "\350\257\276\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Admin", "\350\257\276\347\250\213\345\217\267\357\274\232", Q_NULLPTR));
        pushButtonconfirmadd->setText(QApplication::translate("Admin", "\347\241\256\350\256\244", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButtonconfirmadd->setShortcut(QApplication::translate("Admin", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButtonundoadd->setText(QApplication::translate("Admin", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButtonundoadd->setShortcut(QApplication::translate("Admin", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("Admin", "\344\270\252\344\272\272\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        label_8->setText(QApplication::translate("Admin", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("Admin", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        radioButtonsman->setText(QApplication::translate("Admin", "\347\224\267", Q_NULLPTR));
        radioButtonswoman->setText(QApplication::translate("Admin", "\345\245\263", Q_NULLPTR));
        label_9->setText(QApplication::translate("Admin", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("Admin", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("Admin", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("Admin", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        comboBoxsmajor->clear();
        comboBoxsmajor->insertItems(0, QStringList()
         << QApplication::translate("Admin", "\350\256\241\347\247\221\351\231\242", Q_NULLPTR)
         << QApplication::translate("Admin", "\345\225\206\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("Admin", "\344\272\222\350\201\224\347\275\221\345\255\246\351\231\242", Q_NULLPTR)
        );
        comboBoxsmajor->setCurrentText(QApplication::translate("Admin", "\350\256\241\347\247\221\351\231\242", Q_NULLPTR));
        label_25->setText(QApplication::translate("Admin", "\345\205\245\345\255\246\345\271\264\344\273\275\357\274\232", Q_NULLPTR));
        comboBoxsyear->clear();
        comboBoxsyear->insertItems(0, QStringList()
         << QApplication::translate("Admin", "2017", Q_NULLPTR)
         << QApplication::translate("Admin", "2018", Q_NULLPTR)
         << QApplication::translate("Admin", "2019", Q_NULLPTR)
         << QApplication::translate("Admin", "2020", Q_NULLPTR)
        );
        comboBoxsyear->setCurrentText(QApplication::translate("Admin", "2017", Q_NULLPTR));
        pushButtonSconfirm->setText(QApplication::translate("Admin", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButtonSundo->setText(QApplication::translate("Admin", "\346\222\244\351\224\200", Q_NULLPTR));
        radioButtonStudent->setText(QApplication::translate("Admin", "\345\255\246\347\224\237", Q_NULLPTR));
        radioButtonTeacher->setText(QApplication::translate("Admin", "\346\225\231\345\270\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("Admin", "\345\255\246\347\224\237\345\220\215/\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        pushButtonSTsearch->setText(QString());
#ifndef QT_NO_SHORTCUT
        pushButtonSTsearch->setShortcut(QApplication::translate("Admin", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        function->setTitle(QApplication::translate("Admin", "\345\212\237\350\203\275\345\214\272", Q_NULLPTR));
        addStudentButton->setText(QApplication::translate("Admin", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        searchTeacher->setText(QApplication::translate("Admin", "\346\237\245\346\211\276\346\225\231\345\270\210", Q_NULLPTR));
        searchStudent->setText(QApplication::translate("Admin", "\346\237\245\346\211\276\345\255\246\347\224\237", Q_NULLPTR));
        addCourseButton->setText(QApplication::translate("Admin", "\346\267\273\345\212\240\350\257\276\347\250\213", Q_NULLPTR));
        addTeacherButton->setText(QApplication::translate("Admin", "\346\267\273\345\212\240\346\225\231\345\270\210", Q_NULLPTR));
        displayCourseButton->setText(QApplication::translate("Admin", "\346\230\276\347\244\272\350\257\276\347\250\213", Q_NULLPTR));
        dropCourseButton->setText(QApplication::translate("Admin", "\345\210\240\351\231\244\350\257\276\347\250\213", Q_NULLPTR));
        label->setText(QApplication::translate("Admin", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        labelbackground->setText(QString());
        manageStudent->setTitle(QApplication::translate("Admin", "\347\256\241\347\220\206\345\255\246\347\224\237", Q_NULLPTR));
        manageTeacher->setTitle(QApplication::translate("Admin", "\347\256\241\347\220\206\346\225\231\345\270\210", Q_NULLPTR));
        manageCourse->setTitle(QApplication::translate("Admin", "\347\256\241\347\220\206\350\257\276\347\250\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
