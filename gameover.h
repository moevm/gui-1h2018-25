#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>

namespace Ui {
class GameOver;
}

class GameOver : public QWidget
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = 0);
    ~GameOver();

private:
    Ui::GameOver *ui;
};

#endif // GAMEOVER_H
