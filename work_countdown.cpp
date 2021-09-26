#include <QDateTime>
#include <QTimer>

#include "work_countdown.h"
#include "./ui_work_countdown.h"

work_Countdown::work_Countdown(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::work_Countdown) {
    ui->setupUi(this);

    count_down_time = QDateTime(QDate(2026, 5, 3), QTime(0, 0, 0));
    periodic_update = new QTimer(nullptr);
    update();
    connect(periodic_update, &QTimer::timeout, this, QOverload<>::of(&work_Countdown::update));
    periodic_update->start(1000 * 60 * 60);
}

void work_Countdown::update(void) {
    QDateTime now = QDateTime::currentDateTime();
    //qDebug() << "Running an update. Days from now to my 70th birthday: " << now.daysTo(count_down_time);
    ui->days_to_fill_in->setText(QString::number(now.daysTo(count_down_time)));

}

work_Countdown::~work_Countdown() {
    delete ui;
}
