#include "gameover.h"
#include "ui_gameover.h"

GameOver::GameOver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
    GameOver go;
    go.setStyleSheet("background-image:url(:/images/poker.png)");
    go.show();
}

GameOver::~GameOver()
{
    delete ui;
}
