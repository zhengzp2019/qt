#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlTableModel>
namespace Ui {
class Login;
}

class Login : public QWidget {
    Q_OBJECT

public:

    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:

    void on_pushButton_clicked();

    void on_display_clicked();

    void on_pushButtonconfirm_clicked();

    void on_pushButtondelete_clicked();

    void on_pushButtonundo_clicked();

    void on_tableView_doubleClicked(const QModelIndex& index);

private:

    Ui::Login *ui;
    QSqlTableModel *model;
};

#endif // LOGIN_H
