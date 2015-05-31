#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QPushButton>
#include <QKeyEvent>
#include "result_win.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();

private:
    Ui::game *ui;
    //void keyPressEvent(QKey);
    int gameboard[4][4];
    QWidget *mainWindow;
    result_win *res_winWindow;
    char checkWin();


};

#endif // GAME_H
