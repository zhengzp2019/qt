#ifndef PROCESSTHIRD_H
#define PROCESSTHIRD_H

#include <QWidget>
#include <QPushButton>
class ProcessThird : public QWidget {
    Q_OBJECT

public:

    explicit ProcessThird(QWidget *parent = nullptr);

private:

    QPushButton *begin, *clear, *display;

public slots:

    void clear_screen();

signals:
};

#endif // PROCESSTHIRD_H
