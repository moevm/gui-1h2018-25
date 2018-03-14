#ifndef TABLE_H
#define TABLE_H

#include <QWidget>
//#include <gameover.h>

namespace Ui {
class Table;
}

class Table : public QWidget
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = 0);
    ~Table();

//private slots:
//    void on_pushButton_clicked();


private:
    Ui::Table *ui;
  //  GameOver *pWindow;

};

#endif // TABLE_H
