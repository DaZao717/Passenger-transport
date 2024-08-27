#ifndef PASSENGER_BUS_DAY_H
#define PASSENGER_BUS_DAY_H
#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>

#define Max_Passenger 100

class passenger
{
public:
    QString name;
    QString ID;
};

class bus
{
public:
    QString banci;
    QString zhongdian;
    QString facheshijian;
    int zuowei;
    int yishou = 0;
    passenger pass_list[Max_Passenger];
};

class day
{
public:
    bus bus_list[10];
    int bus_num = 0;
    bool is_Empty()
    {
        return !bus_num;
    }
    void create_bus(QString a_banci,QString a_zhongdian,QString a_facheshijian,int a_zuowei);
};

#endif // PASSENGER_BUS_DAY_H
