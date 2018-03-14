#include "table.h"
#include "ui_table.h"

Table::Table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
   // pWindow = new GameOver();
}

Table::~Table()
{
    delete ui;
}

//void Table::on_pushButton_clicked()
//{
 //   pWindow->show();
 //   this->close();
//}
