#include "weight.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    weight w;

    w.show();
    return a.exec();
}
