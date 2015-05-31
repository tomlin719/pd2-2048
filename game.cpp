#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    gameboard[4][4]={0};
    gameboard[0][0]=2;
    if(gameboard[0][0]==2){
        QPixmap check;
        check.load(":/pics/2.png");
        ui->label_1->setPixmap(check);
    }


}

game::~game()
{
    delete ui;
}
