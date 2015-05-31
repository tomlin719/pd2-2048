#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "result_win.h"
#include "result_lose.h"

namespace Ui {
class startwindow;
}

class startwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit startwindow(QWidget *parent = 0);
    ~startwindow();

private:
    Ui::startwindow *ui;
    game *Gamewindow;
    result_win *res_winDialog;

private slots:
    void StartClick();
    void resetGame();

};

#endif // STARTWINDOW_H
