#ifndef MOREBUS_H
#define MOREBUS_H

#include <QDialog>
#include "passenger_bus_day.h"

namespace Ui {
class morebus;
}

class morebus : public QDialog
{
    Q_OBJECT

public:
    explicit morebus(QWidget *parent = nullptr);
    ~morebus();
signals:
    void morebus_to_main(QString a_banci,QString a_zhongdian,QString a_facheshijian,int a_zuowei);

private slots:
    void on_okButton_clicked();

private:
    Ui::morebus *ui;
};

#endif // MOREBUS_H
