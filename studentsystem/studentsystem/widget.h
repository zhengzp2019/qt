#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "admin.h"
#include <QString>
namespace Ui {
class Widget;
}

class Widget : public QWidget {
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);
    void loadStyleSheet(const QString& sheetName);
    ~Widget();

private slots:

    void on_cancal_clicked();

    void on_login_clicked();

    void on_radioButtonstudent_clicked();

    void on_radioButtonadmin_clicked();

    void on_radioButtonteacher_clicked();

private:

    Ui::Widget *ui;
    QString acount,   // 账号
            password; // 密码
    int role = 0;     // 角色
};

#endif // WIDGET_H
