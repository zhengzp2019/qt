#ifndef DISPLAY_H
#define DISPLAY_H

#include <QWidget>
#include <QString>
namespace Ui {
class Display;
}

class Display : public QWidget
{
Q_OBJECT

public:
explicit Display(QString uuser="",QWidget *parent = 0);
~Display();

private:
QString user;
Ui::Display *ui;
};

#endif // DISPLAY_H
