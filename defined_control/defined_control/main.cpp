#include "widget.h"
#include"smallwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
//    smallwidget s;
//    s.show();
    return a.exec();
}
