#include "work_countdown.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    work_Countdown w;
    w.show();
    return a.exec();
}
