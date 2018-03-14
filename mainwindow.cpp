#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include "table.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow = new Table();
   // connect(sWindow,&Table::firstWindow,this,&MainWindow::show());

    QPixmap bkgnd(":/images/poker.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    sWindow->show();
    this->close();
}

