#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "passenger_bus_day.h"

namespace Ui {
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();
signals:
    void search_to_main(QString a_banci,QString a_zhongdian);

private slots:
    void on_pushButton_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
