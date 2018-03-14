#include "mainwindow.h"
#include "gameover.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
  //  w.setStyleSheet("background-image:url(:/images/poker.png)");
    w.show();

    return a.exec();
}
