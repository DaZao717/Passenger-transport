#ifndef DETAILEDINFO_H
#define DETAILEDINFO_H

#include <QDialog>
#include "passenger_bus_day.h"
#include <QDebug>
#include "morepassenger.h"
#include <QMessageBox>
#include <QFile>

namespace Ui {
class detailedinfo;
}

class detailedinfo : public QDialog
{
    Q_OBJECT

public:
    explicit detailedinfo(QWidget *parent = nullptr);
    ~detailedinfo();
    bus* nw;

    void insert_row(int count);
    void re_fresh();

signals:
    void end();

private slots:
    void on_buyButton_clicked();

    void receive_from_mp(QString a_name, QString a_ID, int a_zuowei)
    {
        if(a_zuowei == -1)
        {
            for(int i = 0 ; i < nw->zuowei; i ++)
            {
                if(nw->pass_list[i].name.isEmpty())
                {
                    nw->pass_list[i].name = a_name;
                    nw->pass_list[i].ID = a_ID;
                    nw->yishou ++;
                    mp->close();
                    break;
                }
            }
        }
        else{
            if(nw->pass_list[a_zuowei - 1].name.isEmpty())
            {
                nw->pass_list[a_zuowei - 1].name = a_name;
                nw->pass_list[a_zuowei - 1].ID = a_ID;
                nw->yishou ++;
                mp->close();
            }
            else
            {
                QMessageBox::critical(this, tr("改座位已有人"),  tr("请重新选择"));
            }
        }
        re_fresh();
    }

    void on_tuiButton_clicked();

    void on_okButton_clicked();

    void on_printButton_clicked();

private:
    Ui::detailedinfo *ui;
    morepassenger* mp;
};

#endif // DETAILEDINFO_H
