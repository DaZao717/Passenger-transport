#include "morepassenger.h"
#include "ui_morepassenger.h"

morepassenger::morepassenger(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::morepassenger)
{
    ui->setupUi(this);
}

morepassenger::~morepassenger()
{
    delete ui;
}

void morepassenger::on_okButton_clicked()
{
    QString a_name,a_ID;
    int a_zuowei;
    a_name = ui->getname->text();
    a_ID = ui->getID->text();
    if(ui->getzuowei->text().isEmpty())
    {
        a_zuowei = -1;
    }
    else
    {
        a_zuowei = ui->getzuowei->text().toInt();
    }
    mp_to_di(a_name,a_ID,a_zuowei);
    this->close();
}

