#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    mb = new morebus;
    sc = new search;
    di = new detailedinfo;
    connect(mb,SIGNAL(morebus_to_main(QString,QString,QString,int)),this,SLOT(receive_from_morebus(QString,QString,QString,int)));
    connect(sc,SIGNAL(search_to_main(QString,QString)),this,SLOT(receive_from_search(QString,QString)));
    connect(di,SIGNAL(end()),this,SLOT(end_refresh()));
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(10);
    QStringList header;
    header << "班次"<<"终点"<<"发车时间"<<"座位数量"<<"余票数量";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,150);
    ui->tableWidget->setColumnWidth(2,150);
    ui->tableWidget->setColumnWidth(3,130);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::create_day(){
    qInfo()<<"1";

    if(!today.is_Empty() && !tomorrow.is_Empty() && !after.is_Empty())
    {
        today = tomorrow;
        tomorrow = after;
        after.bus_num = 0;
    }

    else if(!today.is_Empty() && !tomorrow.is_Empty() && after.is_Empty())
    {
        today = tomorrow;
        tomorrow.bus_num = 0;
    }

    else if(!today.is_Empty() && tomorrow.is_Empty() && after.is_Empty())
    {
        today.bus_num = 0;
    }

    return;
}

void MainWindow::refresh()
{
    ui->tableWidget->clearContents();
    QTableWidgetItem* item[5];
    for(int i = 0 ; i < now->bus_num ;i ++)
    {
        item[0] = new QTableWidgetItem(now->bus_list[i].banci);
        ui->tableWidget->setItem(i,0,item[0]);
        item[1] = new QTableWidgetItem(now->bus_list[i].zhongdian);
        ui->tableWidget->setItem(i,1,item[1]);
        item[2] = new QTableWidgetItem(now->bus_list[i].facheshijian);
        ui->tableWidget->setItem(i,2,item[2]);
        item[3] = new QTableWidgetItem(QString::number(now->bus_list[i].zuowei));
        ui->tableWidget->setItem(i,3,item[3]);
        item[4] = new QTableWidgetItem(QString::number(now->bus_list[i].zuowei - now->bus_list[i].yishou));
        ui->tableWidget->setItem(i,4,item[4]);
    }
}

void day::create_bus(QString a_banci,QString a_zhongdian,QString a_facheshijian,int a_zuowei)
{
    bus_list[bus_num].banci = a_banci;
    bus_list[bus_num].zhongdian = a_zhongdian;
    bus_list[bus_num].facheshijian = a_facheshijian;
    bus_list[bus_num].zuowei = a_zuowei;
    bus_num++;
}

void MainWindow::on_action_N_triggered()
{
    if(!today.is_Empty() && !tomorrow.is_Empty() && !after.is_Empty())
    {
        today = tomorrow;
        tomorrow = after;
        day new_day;
        after = new_day;
        now = &after;
        refresh();
    }

    else if(!today.is_Empty() && !tomorrow.is_Empty() && after.is_Empty())
    {
        today = tomorrow;
        day new_day;
        tomorrow = new_day;
        now = &tomorrow;
        refresh();

    }

    else if(!today.is_Empty() && tomorrow.is_Empty() && after.is_Empty())
    {
        day new_day;
        today = new_day;
        now = &today;
        refresh();
    }

    return;
}

void MainWindow::on_addButton_clicked()
{
    mb->show();
    return;
}


void MainWindow::on_action_J_triggered()
{
    now = &today;
    refresh();
}


void MainWindow::on_action_M_triggered()
{
    now = &tomorrow;
    refresh();
}


void MainWindow::on_action_H_triggered()
{
    now = &after;
    refresh();
}


void MainWindow::on_refreshButton_clicked()
{
    refresh();
}


void MainWindow::on_delButton_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    int count=items.count();
    int row;
    if(count > 0)
    {
        row = ui->tableWidget->row(items.at(0));
        for (int i = row; i < (now->bus_num - 1); i++)
        {
            now->bus_list[i] = now->bus_list[i+1];
        }
        now->bus_num -= 1;
    }
    refresh();
    return;
}


void MainWindow::on_changeButton_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    int count=items.count();
    int row;
    if(count > 0)
    {
        row = ui->tableWidget->row(items.at(0));
        for (int i = row; i < (now->bus_num - 1); i++)
        {
            now->bus_list[i] = now->bus_list[i+1];
        }
        now->bus_num -= 1;
        mb->show();
    }

    refresh();
    return;
}


void MainWindow::on_searchButton_clicked()
{
    sc->show();
    return;
}

void MainWindow::set_first(int target)
{
    bus temp = now->bus_list[target];
    for(int i = target-1;i>=0 ; i--)
    {
        now->bus_list[i+1] = now->bus_list[i];
    }
    now->bus_list[0] = temp;
    refresh();
    ui->tableWidget->setCurrentCell(0,QItemSelectionModel::Select);
}

void MainWindow::on_pushButton_5_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    int count=items.count();
    int row;
    if(count > 0)
    {
        row = ui->tableWidget->row(items.at(0));
        di->nw = &(now->bus_list[row]);
        di->insert_row(now->bus_list[row].zuowei);
        di->re_fresh();
        di->show();
    }

    refresh();
    return;
}


void MainWindow::on_action_S_triggered()
{
    QFile file_today("today");
    QFile file_tomorrow("tomorrow");
    QFile file_after("after");
    if(file_today.open(QIODevice::WriteOnly | QIODevice::Truncate) && file_tomorrow.open(QIODevice::WriteOnly | QIODevice::Truncate) && file_after.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        QTextStream stream_today(&file_today);
        stream_today << today.bus_num << "\n";
        for (int i = 0; i < today.bus_num; i ++)
        {
            stream_today << today.bus_list[i].banci << "\n";
            stream_today << today.bus_list[i].zhongdian << "\n";
            stream_today << today.bus_list[i].facheshijian << "\n";
            stream_today << today.bus_list[i].zuowei << "\n";
            stream_today << today.bus_list[i].yishou << "\n";
            for (int k = 0; k < today.bus_list[i].zuowei; k++)
            {
                if(!today.bus_list[i].pass_list[k].name.isEmpty())
                {
                    stream_today << k << "\n";
                    stream_today << today.bus_list[i].pass_list[k].name << "\n";
                    stream_today << today.bus_list[i].pass_list[k].ID << "\n";
                }
            }
        }
        QTextStream stream_tomorrow(&file_tomorrow);
        stream_tomorrow << tomorrow.bus_num << "\n";
        for (int i = 0; i < tomorrow.bus_num; i ++)
        {
            stream_tomorrow << tomorrow.bus_list[i].banci << "\n";
            stream_tomorrow << tomorrow.bus_list[i].zhongdian << "\n";
            stream_tomorrow << tomorrow.bus_list[i].facheshijian << "\n";
            stream_tomorrow << tomorrow.bus_list[i].zuowei << "\n";
            stream_tomorrow << tomorrow.bus_list[i].yishou << "\n";
            for (int k = 0; k < tomorrow.bus_list[i].zuowei; k ++)
            {
                if(!tomorrow.bus_list[i].pass_list[k].name.isEmpty())
                {
                    stream_tomorrow << k << "\n";
                    stream_tomorrow << tomorrow.bus_list[i].pass_list[k].name << "\n";
                    stream_tomorrow << tomorrow.bus_list[i].pass_list[k].ID << "\n";
                }
            }
        }
        QTextStream stream_after(&file_after);
        stream_after << after.bus_num << "\n";
        for (int i = 0; i < after.bus_num; i ++)
        {
            stream_after << after.bus_list[i].banci << "\n";
            stream_after << after.bus_list[i].zhongdian << "\n";
            stream_after << after.bus_list[i].facheshijian << "\n";
            stream_after << after.bus_list[i].zuowei << "\n";
            stream_after << after.bus_list[i].yishou << "\n";
            for (int k = 0; k < after.bus_list[i].zuowei; k ++)
            {
                if(!after.bus_list[i].pass_list[k].name.isEmpty())
                {
                    stream_after << k << "\n";
                    stream_after << after.bus_list[i].pass_list[k].name << "\n";
                    stream_after << after.bus_list[i].pass_list[k].ID << "\n";
                }
            }
        }
    }
    else
    {
        QMessageBox::critical(this, tr("失败"), tr(""));
    }
    file_today.close();
    file_tomorrow.close();
    file_after.close();
    refresh();
}


void MainWindow::on_action_R_triggered()
{
    QFile file_today("today");
    QFile file_tomorrow("tomorrow");
    QFile file_after("after");
    if(file_today.open(QIODevice::ReadOnly) && file_tomorrow.open(QIODevice::ReadOnly) && file_after.open(QIODevice::ReadOnly))
    {
        QTextStream stream_today(&file_today);
        stream_today >> today.bus_num;
        for (int i = 0; i < today.bus_num; i ++)
        {
            stream_today >> today.bus_list[i].banci;
            stream_today >> today.bus_list[i].zhongdian;
            stream_today >> today.bus_list[i].facheshijian;
            stream_today >> today.bus_list[i].zuowei;
            stream_today >> today.bus_list[i].yishou;
            for (int k = 0; k < today.bus_list[i].yishou; k ++)
            {
                int j;
                stream_today>> j;
                stream_today >> today.bus_list[i].pass_list[j].name;
                stream_today >> today.bus_list[i].pass_list[j].ID;
            }
        }


        QTextStream stream_tomorrow(&file_tomorrow);
        stream_tomorrow >> tomorrow.bus_num;
        for (int i = 0; i < tomorrow.bus_num; i ++)
        {
            stream_tomorrow >> tomorrow.bus_list[i].banci ;
            stream_tomorrow >> tomorrow.bus_list[i].zhongdian ;
            stream_tomorrow >> tomorrow.bus_list[i].facheshijian ;
            stream_tomorrow >> tomorrow.bus_list[i].zuowei;
            stream_tomorrow >> tomorrow.bus_list[i].yishou ;
            for (int k = 0; k < tomorrow.bus_list[i].yishou; k ++)
            {
                int j;
                stream_tomorrow >> j;
                stream_tomorrow >> tomorrow.bus_list[i].pass_list[j].name ;
                stream_tomorrow >> tomorrow.bus_list[i].pass_list[j].ID ;
            }
        }


        QTextStream stream_after(&file_after);
        stream_after >> after.bus_num ;
        for (int i = 0; i < after.bus_num; i ++)
        {
            stream_after >> after.bus_list[i].banci ;
            stream_after >> after.bus_list[i].zhongdian ;
            stream_after >> after.bus_list[i].facheshijian ;
            stream_after >> after.bus_list[i].zuowei ;
            stream_after >> after.bus_list[i].yishou ;
            for (int k = 0; k < after.bus_list[i].yishou; k ++)
            {
                int j;
                stream_after >>j;
                stream_after >> after.bus_list[i].pass_list[j].name ;
                stream_after >> after.bus_list[i].pass_list[j].ID ;
            }
        }
    }

    else
    {
        QMessageBox::critical(this, tr("失败"), tr(""));
    }

    file_today.close();
    file_tomorrow.close();
    file_after.close();
    refresh();
}

