#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QDebug>
#include "morebus.h"
#include "search.h"
#include "detailedinfo.h"
#include "passenger_bus_day.h"
#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    morebus* mb;
    search* sc;
    detailedinfo* di;

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    day today,tomorrow,after;
    day* now = &today;
    void create_day();
    void refresh();
    void set_first(int target);

private slots:
    void on_action_N_triggered();

    void on_addButton_clicked();

    void receive_from_morebus(QString a_banci,QString a_zhongdian,QString a_facheshijian,int a_zuowei)
    {
        now->bus_list[now->bus_num].banci = a_banci;
        now->bus_list[now->bus_num].zhongdian = a_zhongdian;
        now->bus_list[now->bus_num].facheshijian = a_facheshijian;
        now->bus_list[now->bus_num].zuowei =  a_zuowei;
        now->bus_num++;
        refresh();
    };

    void receive_from_search(QString a_banci,QString a_zhongdian)
    {
        int i = 0;
        if(!a_zhongdian.isEmpty())
        {
            for (i = 0 ; i < now->bus_num ; i ++)
            {
                if(now->bus_list[i].zhongdian == a_zhongdian)
                {
                    set_first(i);
                    return;
                }
            }
        }
        if(!a_banci.isEmpty())
        {
            for (i = 0 ; i < now->bus_num ; i ++)
            {
                if(now->bus_list[i].banci == a_banci)
                {
                    set_first(i);
                    return;
                }
            }
        }
        return;
    };

    void end_refresh()
    {
        refresh();
    }

    void on_action_J_triggered();

    void on_action_M_triggered();

    void on_action_H_triggered();

    void on_refreshButton_clicked();

    void on_delButton_clicked();

    void on_changeButton_clicked();

    void on_searchButton_clicked();


    void on_pushButton_5_clicked();
    void on_action_S_triggered();
    void on_action_R_triggered();
};

#endif // MAINWINDOW_H
