#ifndef MOREPASSENGER_H
#define MOREPASSENGER_H

#include <QDialog>
#include "passenger_bus_day.h"

namespace Ui {
class morepassenger;
}

class morepassenger : public QDialog
{
    Q_OBJECT

public:
    explicit morepassenger(QWidget *parent = nullptr);
    ~morepassenger();

signals:
    void mp_to_di(QString a_name, QString a_ID, int a_zuowei);


private slots:
    void on_okButton_clicked();

private:
    Ui::morepassenger *ui;
};

#endif // MOREPASSENGER_H
