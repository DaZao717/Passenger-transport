#include "morebus.h"
#include "ui_morebus.h"
#include <QDebug>

morebus::morebus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::morebus)
{
    ui->setupUi(this);
}

morebus::~morebus()
{
    delete ui;
}

void morebus::on_okButton_clicked()
{
    QString a_banci,a_zhongdian,a_facheshijian;
    int a_zuowei;
    a_banci = ui->get_banci->text();
    a_zhongdian = ui->get_zhongdian->text();
    a_facheshijian = ui->get_facheshijian->text();
    a_zuowei = ui->get_zuoweishu->text().toInt();
    morebus_to_main(a_banci,a_zhongdian,a_facheshijian,a_zuowei);
    this->close();
}

