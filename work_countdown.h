#ifndef WORK_COUNTDOWN_H
#define WORK_COUNTDOWN_H

#include <QMainWindow>
#include <QDateTime>
#include <QTimer>

QT_BEGIN_NAMESPACE
    namespace Ui { class work_Countdown; }
QT_END_NAMESPACE

    class work_Countdown : public QMainWindow
{
    Q_OBJECT

        public:
                 work_Countdown(QWidget *parent = nullptr);
    ~work_Countdown();

  private:
    Ui::work_Countdown *ui;
    QDateTime count_down_time;
    QTimer *periodic_update;
  private slots:
    void update(void);
};
#endif // WORK_COUNTDOWN_H
