#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_clicked()
{
    QString a_banci,a_zhongdian;
    a_banci = ui->getbanci->text();
    a_zhongdian = ui->getzhongdian->text();
    search_to_main(a_banci,a_zhongdian);
    this->close();
}

