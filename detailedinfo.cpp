#include "detailedinfo.h"
#include "ui_detailedinfo.h"


detailedinfo::detailedinfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::detailedinfo)
{
    mp = new morepassenger;
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    QStringList headers;
    headers<<"座位"<<"姓名"<<"证件";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0,50);
    ui->tableWidget->setColumnWidth(1,130);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(mp,SIGNAL(mp_to_di(QString, QString, int)),this,SLOT(receive_from_mp(QString, QString, int)));
}

detailedinfo::~detailedinfo()
{
    delete ui;
}

void detailedinfo::insert_row(int count)
{
    ui->tableWidget->clearContents();
    while (ui->tableWidget->rowCount() > 0)
    {
        ui->tableWidget->removeRow(0);
    }
    for(int i = 0 ; i < count ; i ++)
    {
        ui->tableWidget->insertRow(i);

    }
}

void detailedinfo::re_fresh()
{
    QTableWidgetItem* items[3];
    ui->tableWidget->clearContents();
    for(int i = 0;i < nw->zuowei ; i ++)
    {
        items[0] = new QTableWidgetItem(QString::number(i+1));
        ui->tableWidget->setItem(i,0,items[0]);
        if(!nw->pass_list[i].name.isEmpty())
        {
            items[1] = new QTableWidgetItem(nw->pass_list[i].name);
            items[2] = new QTableWidgetItem(nw->pass_list[i].ID);
            ui->tableWidget->setItem(i,1,items[1]);
            ui->tableWidget->setItem(i,2,items[2]);
        }
    }
}

void detailedinfo::on_buyButton_clicked()
{
    mp->show();
}


void detailedinfo::on_tuiButton_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    int count=items.count();
    int row;
    if(count > 0)
    {
        row = ui->tableWidget->row(items.at(0));
        nw->pass_list[row].name = "";
        nw->pass_list[row].ID = "";
        nw->yishou -= 1;
    }
    re_fresh();
    return;
}




void detailedinfo::on_okButton_clicked()
{
    end();
    this->close();
}


void detailedinfo::on_printButton_clicked()
{
    QString bus_name = nw->banci;
    bus_name += " lkdjb.txt";
    QFile file(bus_name);
    if(file.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        QString headers;
        QTextStream stream(&file);
        headers = "座位\t姓名\t证件\n";
        stream << headers;
        for (int i = 0 ; i < nw->zuowei; i ++)
        {
            QString linedata;
            if(!nw->pass_list[i].name.isEmpty())
            {
                linedata.push_back(QString::number(i+1));
                linedata.push_back("\t");
                linedata.push_back(nw->pass_list[i].name);
                linedata.push_back("\t");
                linedata.push_back(nw->pass_list[i].ID);
                linedata.push_back("\n");
                stream << linedata;
            }
        }
    }
    else
    {
        QMessageBox::critical(this, tr("失败"), tr(""));
    }
}

