#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ShowBoard();
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(RestartButton()));
}
void game::RestartButton(){
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++)
            gameboard[i][j]=0;
    }
    ShowBoard();
}


void game::ShowBoard(){
    int i=0, x, y, k;
    srand(time(NULL));
    while(i<2){
       x=rand()%4;
       y=rand()%4;
       while(gameboard[x][y]==0){
            k=rand()%100;
            if(k>79)
                gameboard[x][y]=4;
            else
                gameboard[x][y]=2;
            i++;
       }
    }
    if(gameboard[0][0]==2){
        QPixmap check_1;
        check_1.load(":/pics/2.png");
        ui->label_1->setPixmap(check_1);
    }
    if(gameboard[0][0]==0){
        QPixmap check_1_1;
        check_1_1.load(":/pics/blank.png");
        ui->label_1->setPixmap(check_1_1);
    }
    if(gameboard[0][0]==4){
        QPixmap check_1_2;
        check_1_2.load(":/pics/4.png");
        ui->label_1->setPixmap(check_1_2);
    }
    if(gameboard[0][0]==8){
        QPixmap check_1_3;
        check_1_3.load(":/pics/8.png");
        ui->label_1->setPixmap(check_1_3);
    }
    if(gameboard[0][0]==16){
        QPixmap check_1_4;
        check_1_4.load(":/pics/16.png");
        ui->label_1->setPixmap(check_1_4);
    }
    if(gameboard[0][0]==32){
        QPixmap check_1_5;
        check_1_5.load(":/pics/32.png");
        ui->label_1->setPixmap(check_1_5);
    }
    if(gameboard[0][0]==64){
        QPixmap check_1_6;
        check_1_6.load(":/pics/64.png");
        ui->label_1->setPixmap(check_1_6);
    }
    if(gameboard[0][0]==128){
        QPixmap check_1_7;
        check_1_7.load(":/pics/128.png");
        ui->label_1->setPixmap(check_1_7);
    }
    if(gameboard[0][0]==256){
        QPixmap check_1_8;
        check_1_8.load(":/pics/256.png");
        ui->label_1->setPixmap(check_1_8);
    }
    if(gameboard[0][0]==512){
        QPixmap check_1_9;
        check_1_9.load(":/pics/512.png");
        ui->label_1->setPixmap(check_1_9);
    }
    if(gameboard[0][0]==1024){
        QPixmap check_1_10;
        check_1_10.load(":/pics/1024.png");
        ui->label_1->setPixmap(check_1_10);
    }
    if(gameboard[0][0]==2048){
        QPixmap check_1_11;
        check_1_11.load(":/pics/2048.png");
        ui->label_1->setPixmap(check_1_11);
    }
    if(gameboard[0][1]==2){
        QPixmap check_2;
        check_2.load(":/pics/2.png");
        ui->label_2->setPixmap(check_2);
    }
    if(gameboard[0][1]==0){
        QPixmap check_2_1;
        check_2_1.load(":/pics/blank.png");
        ui->label_2->setPixmap(check_2_1);
    }
    if(gameboard[0][1]==4){
        QPixmap check_2_2;
        check_2_2.load(":/pics/4.png");
        ui->label_2->setPixmap(check_2_2);
    }
    if(gameboard[0][1]==8){
        QPixmap check_2_3;
        check_2_3.load(":/pics/8.png");
        ui->label_2->setPixmap(check_2_3);
    }
    if(gameboard[0][1]==16){
        QPixmap check_2_4;
        check_2_4.load(":/pics/16.png");
        ui->label_2->setPixmap(check_2_4);
    }
    if(gameboard[0][1]==32){
        QPixmap check_2_5;
        check_2_5.load(":/pics/32.png");
        ui->label_2->setPixmap(check_2_5);
    }
    if(gameboard[0][1]==64){
        QPixmap check_2_6;
        check_2_6.load(":/pics/64.png");
        ui->label_2->setPixmap(check_2_6);
    }
    if(gameboard[0][1]==128){
        QPixmap check_2_7;
        check_2_7.load(":/pics/128.png");
        ui->label_2->setPixmap(check_2_7);
    }
    if(gameboard[0][1]==256){
        QPixmap check_2_8;
        check_2_8.load(":/pics/256.png");
        ui->label_2->setPixmap(check_2_8);
    }
    if(gameboard[0][1]==512){
        QPixmap check_2_9;
        check_2_9.load(":/pics/512.png");
        ui->label_2->setPixmap(check_2_9);
    }
    if(gameboard[0][1]==1024){
        QPixmap check_2_10;
        check_2_10.load(":/pics/1024.png");
        ui->label_2->setPixmap(check_2_10);
    }
    if(gameboard[0][1]==2048){
        QPixmap check_2_11;
        check_2_11.load(":/pics/2048.png");
        ui->label_2->setPixmap(check_2_11);
    }
    if(gameboard[0][2]==2){
        QPixmap check_3;
        check_3.load(":/pics/2.png");
        ui->label_3->setPixmap(check_3);
    }
    if(gameboard[0][2]==0){
        QPixmap check_3_1;
        check_3_1.load(":/pics/blank.png");
        ui->label_3->setPixmap(check_3_1);
    }
    if(gameboard[0][2]==4){
        QPixmap check_3_2;
        check_3_2.load(":/pics/4.png");
        ui->label_3->setPixmap(check_3_2);
    }
    if(gameboard[0][2]==8){
        QPixmap check_3_3;
        check_3_3.load(":/pics/8.png");
        ui->label_3->setPixmap(check_3_3);
    }
    if(gameboard[0][2]==16){
        QPixmap check_3_4;
        check_3_4.load(":/pics/16.png");
        ui->label_3->setPixmap(check_3_4);
    }
    if(gameboard[0][2]==32){
        QPixmap check_3_5;
        check_3_5.load(":/pics/32.png");
        ui->label_3->setPixmap(check_3_5);
    }
    if(gameboard[0][2]==64){
        QPixmap check_3_6;
        check_3_6.load(":/pics/64.png");
        ui->label_3->setPixmap(check_3_6);
    }
    if(gameboard[0][2]==128){
        QPixmap check_3_7;
        check_3_7.load(":/pics/128.png");
        ui->label_3->setPixmap(check_3_7);
    }
    if(gameboard[0][2]==256){
        QPixmap check_3_8;
        check_3_8.load(":/pics/256.png");
        ui->label_3->setPixmap(check_3_8);
    }
    if(gameboard[0][2]==512){
        QPixmap check_3_9;
        check_3_9.load(":/pics/512.png");
        ui->label_3->setPixmap(check_3_9);
    }
    if(gameboard[0][2]==1024){
        QPixmap check_3_10;
        check_3_10.load(":/pics/1024.png");
        ui->label_3->setPixmap(check_3_10);
    }
    if(gameboard[0][2]==2048){
        QPixmap check_3_11;
        check_3_11.load(":/pics/2048.png");
        ui->label_3->setPixmap(check_3_11);
    }
    if(gameboard[0][2]==0){
        QPixmap check_3_1;
        check_3_1.load(":/pics/blank.png");
        ui->label_3->setPixmap(check_3_1);
    }
    if(gameboard[0][3]==2){
        QPixmap check_4;
        check_4.load(":/pics/2.png");
        ui->label_4->setPixmap(check_4);
    }
    if(gameboard[0][3]==0){
        QPixmap check_4_1;
        check_4_1.load(":/pics/blank.png");
        ui->label_4->setPixmap(check_4_1);
    }
    if(gameboard[0][3]==4){
        QPixmap check_4_2;
        check_4_2.load(":/pics/4.png");
        ui->label_4->setPixmap(check_4_2);
    }
    if(gameboard[0][3]==8){
        QPixmap check_4_3;
        check_4_3.load(":/pics/8.png");
        ui->label_4->setPixmap(check_4_3);
    }
    if(gameboard[0][3]==16){
        QPixmap check_4_4;
        check_4_4.load(":/pics/16.png");
        ui->label_4->setPixmap(check_4_4);
    }
    if(gameboard[0][3]==32){
        QPixmap check_4_5;
        check_4_5.load(":/pics/32.png");
        ui->label_4->setPixmap(check_4_5);
    }
    if(gameboard[0][3]==64){
        QPixmap check_4_6;
        check_4_6.load(":/pics/64.png");
        ui->label_4->setPixmap(check_4_6);
    }
    if(gameboard[0][3]==128){
        QPixmap check_4_7;
        check_4_7.load(":/pics/128.png");
        ui->label_4->setPixmap(check_4_7);
    }
    if(gameboard[0][3]==256){
        QPixmap check_4_8;
        check_4_8.load(":/pics/256.png");
        ui->label_4->setPixmap(check_4_8);
    }
    if(gameboard[0][3]==512){
        QPixmap check_4_9;
        check_4_9.load(":/pics/512.png");
        ui->label_4->setPixmap(check_4_9);
    }
    if(gameboard[0][3]==1024){
        QPixmap check_4_10;
        check_4_10.load(":/pics/1224.png");
        ui->label_4->setPixmap(check_4_10);
    }
    if(gameboard[0][3]==2048){
        QPixmap check_4_11;
        check_4_11.load(":/pics/2048.png");
        ui->label_4->setPixmap(check_4_11);
    }
    if(gameboard[1][0]==2){
        QPixmap check_5;
        check_5.load(":/pics/2.png");
        ui->label_5->setPixmap(check_5);
    }
    if(gameboard[1][0]==0){
        QPixmap check_5_1;
        check_5_1.load(":/pics/blank.png");
        ui->label_5->setPixmap(check_5_1);
    }
    if(gameboard[1][0]==4){
        QPixmap check_5_2;
        check_5_2.load(":/pics/4.png");
        ui->label_5->setPixmap(check_5_2);
    }
    if(gameboard[1][0]==8){
        QPixmap check_5_3;
        check_5_3.load(":/pics/8.png");
        ui->label_5->setPixmap(check_5_3);
    }
    if(gameboard[1][0]==16){
        QPixmap check_5_4;
        check_5_4.load(":/pics/16.png");
        ui->label_5->setPixmap(check_5_4);
    }
    if(gameboard[1][0]==32){
        QPixmap check_5_5;
        check_5_5.load(":/pics/32.png");
        ui->label_5->setPixmap(check_5_5);
    }
    if(gameboard[1][0]==64){
        QPixmap check_5_6;
        check_5_6.load(":/pics/64.png");
        ui->label_5->setPixmap(check_5_6);
    }
    if(gameboard[1][0]==128){
        QPixmap check_5_7;
        check_5_7.load(":/pics/128.png");
        ui->label_5->setPixmap(check_5_7);
    }
    if(gameboard[1][0]==256){
        QPixmap check_5_8;
        check_5_8.load(":/pics/256.png");
        ui->label_5->setPixmap(check_5_8);
    }
    if(gameboard[1][0]==512){
        QPixmap check_5_9;
        check_5_9.load(":/pics/512.png");
        ui->label_5->setPixmap(check_5_9);
    }
    if(gameboard[1][0]==1024){
        QPixmap check_5_10;
        check_5_10.load(":/pics/1024.png");
        ui->label_5->setPixmap(check_5_10);
    }
    if(gameboard[1][0]==2048){
        QPixmap check_5_11;
        check_5_11.load(":/pics/2048.png");
        ui->label_5->setPixmap(check_5_11);
    }
    if(gameboard[1][1]==2){
        QPixmap check_6;
        check_6.load(":/pics/2.png");
        ui->label_6->setPixmap(check_6);
    }
    if(gameboard[1][1]==0){
        QPixmap check_6_1;
        check_6_1.load(":/pics/blank.png");
        ui->label_6->setPixmap(check_6_1);
    }
    if(gameboard[1][1]==4){
        QPixmap check_6_2;
        check_6_2.load(":/pics/4.png");
        ui->label_6->setPixmap(check_6_2);
    }
    if(gameboard[1][1]==8){
        QPixmap check_6_3;
        check_6_3.load(":/pics/8.png");
        ui->label_6->setPixmap(check_6_3);
    }
    if(gameboard[1][1]==16){
        QPixmap check_6_4;
        check_6_4.load(":/pics/16.png");
        ui->label_6->setPixmap(check_6_4);
    }
    if(gameboard[1][1]==32){
        QPixmap check_6_5;
        check_6_5.load(":/pics/32.png");
        ui->label_6->setPixmap(check_6_5);
    }
    if(gameboard[1][1]==64){
        QPixmap check_6_6;
        check_6_6.load(":/pics/64.png");
        ui->label_6->setPixmap(check_6_6);
    }
    if(gameboard[1][1]==128){
        QPixmap check_6_7;
        check_6_7.load(":/pics/128.png");
        ui->label_6->setPixmap(check_6_7);
    }
    if(gameboard[1][1]==256){
        QPixmap check_6_8;
        check_6_8.load(":/pics/256.png");
        ui->label_6->setPixmap(check_6_8);
    }
    if(gameboard[1][1]==512){
        QPixmap check_6_9;
        check_6_9.load(":/pics/512.png");
        ui->label_6->setPixmap(check_6_9);
    }
    if(gameboard[1][1]==1024){
        QPixmap check_6_10;
        check_6_10.load(":/pics/1024.png");
        ui->label_6->setPixmap(check_6_10);
    }
    if(gameboard[1][1]==2048){
        QPixmap check_6_11;
        check_6_11.load(":/pics/2048.png");
        ui->label_6->setPixmap(check_6_11);
    }
    if(gameboard[1][2]==2){
        QPixmap check_7;
        check_7.load(":/pics/2.png");
        ui->label_7->setPixmap(check_7);
    }
    if(gameboard[1][2]==0){
        QPixmap check_7_1;
        check_7_1.load(":/pics/blank.png");
        ui->label_7->setPixmap(check_7_1);
    }
    if(gameboard[1][2]==4){
        QPixmap check_7_2;
        check_7_2.load(":/pics/4.png");
        ui->label_7->setPixmap(check_7_2);
    }
    if(gameboard[1][2]==8){
        QPixmap check_7_3;
        check_7_3.load(":/pics/8.png");
        ui->label_7->setPixmap(check_7_3);
    }
    if(gameboard[1][2]==16){
        QPixmap check_7_4;
        check_7_4.load(":/pics/16.png");
        ui->label_7->setPixmap(check_7_4);
    }
    if(gameboard[1][2]==32){
        QPixmap check_7_5;
        check_7_5.load(":/pics/32.png");
        ui->label_7->setPixmap(check_7_5);
    }
    if(gameboard[1][2]==64){
        QPixmap check_7_6;
        check_7_6.load(":/pics/64.png");
        ui->label_7->setPixmap(check_7_6);
    }
    if(gameboard[1][2]==128){
        QPixmap check_7_7;
        check_7_7.load(":/pics/128.png");
        ui->label_7->setPixmap(check_7_7);
    }
    if(gameboard[1][2]==256){
        QPixmap check_7_8;
        check_7_8.load(":/pics/256.png");
        ui->label_7->setPixmap(check_7_8);
    }
    if(gameboard[1][2]==512){
        QPixmap check_7_9;
        check_7_9.load(":/pics/512.png");
        ui->label_7->setPixmap(check_7_9);
    }
    if(gameboard[1][2]==1024){
        QPixmap check_7_10;
        check_7_10.load(":/pics/1024.png");
        ui->label_7->setPixmap(check_7_10);
    }
    if(gameboard[1][2]==2048){
        QPixmap check_7_11;
        check_7_11.load(":/pics/2048.png");
        ui->label_7->setPixmap(check_7_11);
    }
    if(gameboard[1][3]==2){
        QPixmap check_8;
        check_8.load(":/pics/2.png");
        ui->label_8->setPixmap(check_8);
    }
    if(gameboard[1][3]==0){
        QPixmap check_8_1;
        check_8_1.load(":/pics/blank.png");
        ui->label_8->setPixmap(check_8_1);
    }
    if(gameboard[1][3]==4){
        QPixmap check_8_2;
        check_8_2.load(":/pics/4.png");
        ui->label_8->setPixmap(check_8_2);
    }
    if(gameboard[1][3]==8){
        QPixmap check_8_3;
        check_8_3.load(":/pics/8.png");
        ui->label_8->setPixmap(check_8_3);
    }
    if(gameboard[1][3]==16){
        QPixmap check_8_4;
        check_8_4.load(":/pics/16.png");
        ui->label_8->setPixmap(check_8_4);
    }
    if(gameboard[1][3]==32){
        QPixmap check_8_5;
        check_8_5.load(":/pics/32.png");
        ui->label_8->setPixmap(check_8_5);
    }
    if(gameboard[1][3]==64){
        QPixmap check_8_6;
        check_8_6.load(":/pics/64.png");
        ui->label_8->setPixmap(check_8_6);
    }
    if(gameboard[1][3]==128){
        QPixmap check_8_7;
        check_8_7.load(":/pics/128.png");
        ui->label_8->setPixmap(check_8_7);
    }
    if(gameboard[1][3]==256){
        QPixmap check_8_8;
        check_8_8.load(":/pics/256.png");
        ui->label_8->setPixmap(check_8_8);
    }
    if(gameboard[1][3]==512){
        QPixmap check_8_9;
        check_8_9.load(":/pics/512.png");
        ui->label_8->setPixmap(check_8_9);
    }
    if(gameboard[1][3]==1024){
        QPixmap check_8_10;
        check_8_10.load(":/pics/1024.png");
        ui->label_8->setPixmap(check_8_10);
    }
    if(gameboard[1][3]==2048){
        QPixmap check_8_11;
        check_8_11.load(":/pics/2048.png");
        ui->label_8->setPixmap(check_8_11);
    }
    if(gameboard[2][0]==2){
        QPixmap check_9;
        check_9.load(":/pics/2.png");
        ui->label_9->setPixmap(check_9);
    }
    if(gameboard[2][0]==0){
        QPixmap check_9_1;
        check_9_1.load(":/pics/blank.png");
        ui->label_9->setPixmap(check_9_1);
    }
    if(gameboard[2][0]==4){
        QPixmap check_9_2;
        check_9_2.load(":/pics/4.png");
        ui->label_9->setPixmap(check_9_2);
    }
    if(gameboard[2][0]==8){
        QPixmap check_9_3;
        check_9_3.load(":/pics/8.png");
        ui->label_9->setPixmap(check_9_3);
    }
    if(gameboard[2][0]==16){
        QPixmap check_9_4;
        check_9_4.load(":/pics/16.png");
        ui->label_9->setPixmap(check_9_4);
    }
    if(gameboard[2][0]==32){
        QPixmap check_9_5;
        check_9_5.load(":/pics/32.png");
        ui->label_9->setPixmap(check_9_5);
    }
    if(gameboard[2][0]==64){
        QPixmap check_9_6;
        check_9_6.load(":/pics/64.png");
        ui->label_9->setPixmap(check_9_6);
    }
    if(gameboard[2][0]==128){
        QPixmap check_9_7;
        check_9_7.load(":/pics/128.png");
        ui->label_9->setPixmap(check_9_7);
    }
    if(gameboard[2][0]==256){
        QPixmap check_9_8;
        check_9_8.load(":/pics/256.png");
        ui->label_9->setPixmap(check_9_8);
    }
    if(gameboard[2][0]==512){
        QPixmap check_9_9;
        check_9_9.load(":/pics/512.png");
        ui->label_9->setPixmap(check_9_9);
    }
    if(gameboard[2][0]==1024){
        QPixmap check_9_10;
        check_9_10.load(":/pics/1024.png");
        ui->label_9->setPixmap(check_9_10);
    }
    if(gameboard[2][0]==2048){
        QPixmap check_9_11;
        check_9_11.load(":/pics/2048.png");
        ui->label_9->setPixmap(check_9_11);
    }
    if(gameboard[2][1]==2){
        QPixmap check_10;
        check_10.load(":/pics/2.png");
        ui->label_10->setPixmap(check_10);
    }
    if(gameboard[2][1]==0){
        QPixmap check_10_1;
        check_10_1.load(":/pics/blank.png");
        ui->label_10->setPixmap(check_10_1);
    }
    if(gameboard[2][1]==4){
        QPixmap check_10_2;
        check_10_2.load(":/pics/4.png");
        ui->label_10->setPixmap(check_10_2);
    }
    if(gameboard[2][1]==8){
        QPixmap check_10_3;
        check_10_3.load(":/pics/8.png");
        ui->label_10->setPixmap(check_10_3);
    }
    if(gameboard[2][1]==16){
        QPixmap check_10_4;
        check_10_4.load(":/pics/16.png");
        ui->label_10->setPixmap(check_10_4);
    }
    if(gameboard[2][1]==32){
        QPixmap check_10_5;
        check_10_5.load(":/pics/32.png");
        ui->label_10->setPixmap(check_10_5);
    }
    if(gameboard[2][1]==64){
        QPixmap check_10_6;
        check_10_6.load(":/pics/64.png");
        ui->label_10->setPixmap(check_10_6);
    }
    if(gameboard[2][1]==128){
        QPixmap check_10_7;
        check_10_7.load(":/pics/128.png");
        ui->label_10->setPixmap(check_10_7);
    }
    if(gameboard[2][1]==256){
        QPixmap check_10_8;
        check_10_8.load(":/pics/256.png");
        ui->label_10->setPixmap(check_10_8);
    }
    if(gameboard[2][1]==512){
        QPixmap check_10_9;
        check_10_9.load(":/pics/512.png");
        ui->label_10->setPixmap(check_10_9);
    }
    if(gameboard[2][1]==1024){
        QPixmap check_10_10;
        check_10_10.load(":/pics/1024.png");
        ui->label_10->setPixmap(check_10_10);
    }
    if(gameboard[2][1]==2048){
        QPixmap check_10_11;
        check_10_11.load(":/pics/2048.png");
        ui->label_10->setPixmap(check_10_11);
    }
    if(gameboard[2][2]==2){
        QPixmap check_11;
        check_11.load(":/pics/2.png");
        ui->label_11->setPixmap(check_11);
    }
    if(gameboard[2][2]==0){
        QPixmap check_11_1;
        check_11_1.load(":/pics/blank.png");
        ui->label_11->setPixmap(check_11_1);
    }
    if(gameboard[2][2]==4){
        QPixmap check_11_2;
        check_11_2.load(":/pics/4.png");
        ui->label_11->setPixmap(check_11_2);
    }
    if(gameboard[2][2]==8){
        QPixmap check_11_3;
        check_11_3.load(":/pics/8.png");
        ui->label_11->setPixmap(check_11_3);
    }
    if(gameboard[2][2]==16){
        QPixmap check_11_4;
        check_11_4.load(":/pics/16.png");
        ui->label_11->setPixmap(check_11_4);
    }
    if(gameboard[2][2]==32){
        QPixmap check_11_5;
        check_11_5.load(":/pics/32.png");
        ui->label_11->setPixmap(check_11_5);
    }
    if(gameboard[2][2]==64){
        QPixmap check_11_6;
        check_11_6.load(":/pics/64.png");
        ui->label_11->setPixmap(check_11_6);
    }
    if(gameboard[2][2]==128){
        QPixmap check_11_7;
        check_11_7.load(":/pics/128.png");
        ui->label_11->setPixmap(check_11_7);
    }
    if(gameboard[2][2]==256){
        QPixmap check_11_8;
        check_11_8.load(":/pics/256.png");
        ui->label_11->setPixmap(check_11_8);
    }
    if(gameboard[2][2]==512){
        QPixmap check_11_9;
        check_11_9.load(":/pics/512.png");
        ui->label_11->setPixmap(check_11_9);
    }
    if(gameboard[2][2]==1024){
        QPixmap check_11_10;
        check_11_10.load(":/pics/1024.png");
        ui->label_11->setPixmap(check_11_10);
    }
    if(gameboard[2][2]==2048){
        QPixmap check_11_11;
        check_11_11.load(":/pics/2048.png");
        ui->label_11->setPixmap(check_11_11);
    }
    if(gameboard[2][3]==2){
        QPixmap check_12;
        check_12.load(":/pics/2.png");
        ui->label_12->setPixmap(check_12);
    }
    if(gameboard[2][3]==0){
        QPixmap check_12_1;
        check_12_1.load(":/pics/blank.png");
        ui->label_12->setPixmap(check_12_1);
    }
    if(gameboard[2][3]==4){
        QPixmap check_12_2;
        check_12_2.load(":/pics/4.png");
        ui->label_12->setPixmap(check_12_2);
    }
    if(gameboard[2][3]==8){
        QPixmap check_12_3;
        check_12_3.load(":/pics/8.png");
        ui->label_12->setPixmap(check_12_3);
    }
    if(gameboard[2][3]==16){
        QPixmap check_12_4;
        check_12_4.load(":/pics/16.png");
        ui->label_12->setPixmap(check_12_4);
    }
    if(gameboard[2][3]==32){
        QPixmap check_12_5;
        check_12_5.load(":/pics/32.png");
        ui->label_12->setPixmap(check_12_5);
    }
    if(gameboard[2][3]==64){
        QPixmap check_12_6;
        check_12_6.load(":/pics/64.png");
        ui->label_12->setPixmap(check_12_6);
    }
    if(gameboard[2][3]==128){
        QPixmap check_12_7;
        check_12_7.load(":/pics/128.png");
        ui->label_12->setPixmap(check_12_7);
    }
    if(gameboard[2][3]==256){
        QPixmap check_12_8;
        check_12_8.load(":/pics/256.png");
        ui->label_12->setPixmap(check_12_8);
    }
    if(gameboard[2][3]==512){
        QPixmap check_12_9;
        check_12_9.load(":/pics/512.png");
        ui->label_12->setPixmap(check_12_9);
    }
    if(gameboard[2][3]==1024){
        QPixmap check_12_10;
        check_12_10.load(":/pics/1024.png");
        ui->label_12->setPixmap(check_12_10);
    }
    if(gameboard[2][3]==2048){
        QPixmap check_12_11;
        check_12_11.load(":/pics/2048.png");
        ui->label_12->setPixmap(check_12_11);
    }
    if(gameboard[3][0]==2){
        QPixmap check_13;
        check_13.load(":/pics/2.png");
        ui->label_13->setPixmap(check_13);
    }
    if(gameboard[3][0]==0){
        QPixmap check_13_1;
        check_13_1.load(":/pics/blank.png");
        ui->label_13->setPixmap(check_13_1);
    }
    if(gameboard[3][0]==4){
        QPixmap check_13_2;
        check_13_2.load(":/pics/4.png");
        ui->label_13->setPixmap(check_13_2);
    }
    if(gameboard[3][0]==8){
        QPixmap check_13_3;
        check_13_3.load(":/pics/8.png");
        ui->label_13->setPixmap(check_13_3);
    }
    if(gameboard[3][0]==16){
        QPixmap check_13_4;
        check_13_4.load(":/pics/16.png");
        ui->label_13->setPixmap(check_13_4);
    }
    if(gameboard[3][0]==32){
        QPixmap check_13_5;
        check_13_5.load(":/pics/32.png");
        ui->label_13->setPixmap(check_13_5);
    }
    if(gameboard[3][0]==64){
        QPixmap check_13_6;
        check_13_6.load(":/pics/64.png");
        ui->label_13->setPixmap(check_13_6);
    }
    if(gameboard[3][0]==128){
        QPixmap check_13_7;
        check_13_7.load(":/pics/128.png");
        ui->label_13->setPixmap(check_13_7);
    }
    if(gameboard[3][0]==256){
        QPixmap check_13_8;
        check_13_8.load(":/pics/256.png");
        ui->label_13->setPixmap(check_13_8);
    }
    if(gameboard[3][0]==512){
        QPixmap check_13_9;
        check_13_9.load(":/pics/512.png");
        ui->label_13->setPixmap(check_13_9);
    }
    if(gameboard[3][0]==1024){
        QPixmap check_13_10;
        check_13_10.load(":/pics/1024.png");
        ui->label_13->setPixmap(check_13_10);
    }
    if(gameboard[3][0]==2048){
        QPixmap check_13_11;
        check_13_11.load(":/pics/2048.png");
        ui->label_13->setPixmap(check_13_11);
    }
    if(gameboard[3][1]==2){
        QPixmap check_14;
        check_14.load(":/pics/2.png");
        ui->label_14->setPixmap(check_14);
    }
    if(gameboard[3][1]==0){
        QPixmap check_14_1;
        check_14_1.load(":/pics/blank.png");
        ui->label_14->setPixmap(check_14_1);
    }
    if(gameboard[3][1]==4){
        QPixmap check_14_2;
        check_14_2.load(":/pics/4.png");
        ui->label_14->setPixmap(check_14_2);
    }
    if(gameboard[3][1]==8){
        QPixmap check_14_3;
        check_14_3.load(":/pics/8.png");
        ui->label_14->setPixmap(check_14_3);
    }
    if(gameboard[3][1]==16){
        QPixmap check_14_4;
        check_14_4.load(":/pics/16.png");
        ui->label_14->setPixmap(check_14_4);
    }
    if(gameboard[3][1]==32){
        QPixmap check_14_5;
        check_14_5.load(":/pics/32.png");
        ui->label_14->setPixmap(check_14_5);
    }
    if(gameboard[3][1]==64){
        QPixmap check_14_6;
        check_14_6.load(":/pics/64.png");
        ui->label_14->setPixmap(check_14_6);
    }
    if(gameboard[3][1]==128){
        QPixmap check_14_7;
        check_14_7.load(":/pics/128.png");
        ui->label_14->setPixmap(check_14_7);
    }
    if(gameboard[3][1]==256){
        QPixmap check_14_8;
        check_14_8.load(":/pics/256.png");
        ui->label_14->setPixmap(check_14_8);
    }
    if(gameboard[3][1]==512){
        QPixmap check_14_9;
        check_14_9.load(":/pics/512.png");
        ui->label_14->setPixmap(check_14_9);
    }
    if(gameboard[3][1]==1024){
        QPixmap check_14_10;
        check_14_10.load(":/pics/1024.png");
        ui->label_14->setPixmap(check_14_10);
    }
    if(gameboard[3][1]==2048){
        QPixmap check_14_11;
        check_14_11.load(":/pics/2048.png");
        ui->label_14->setPixmap(check_14_11);
    }
    if(gameboard[3][2]==2){
        QPixmap check_15;
        check_15.load(":/pics/2.png");
        ui->label_15->setPixmap(check_15);
    }
    if(gameboard[3][2]==0){
        QPixmap check_15_1;
        check_15_1.load(":/pics/blank.png");
        ui->label_15->setPixmap(check_15_1);
    }
    if(gameboard[3][2]==4){
        QPixmap check_15_2;
        check_15_2.load(":/pics/4.png");
        ui->label_15->setPixmap(check_15_2);
    }
    if(gameboard[3][2]==8){
        QPixmap check_15_3;
        check_15_3.load(":/pics/8.png");
        ui->label_15->setPixmap(check_15_3);
    }
    if(gameboard[3][2]==16){
        QPixmap check_15_4;
        check_15_4.load(":/pics/16.png");
        ui->label_15->setPixmap(check_15_4);
    }
    if(gameboard[3][2]==32){
        QPixmap check_15_5;
        check_15_5.load(":/pics/32.png");
        ui->label_15->setPixmap(check_15_5);
    }
    if(gameboard[3][2]==64){
        QPixmap check_15_6;
        check_15_6.load(":/pics/64.png");
        ui->label_15->setPixmap(check_15_6);
    }
    if(gameboard[3][2]==128){
        QPixmap check_15_7;
        check_15_7.load(":/pics/128.png");
        ui->label_15->setPixmap(check_15_7);
    }
    if(gameboard[3][2]==256){
        QPixmap check_15_8;
        check_15_8.load(":/pics/256.png");
        ui->label_15->setPixmap(check_15_8);
    }
    if(gameboard[3][2]==512){
        QPixmap check_15_9;
        check_15_9.load(":/pics/512.png");
        ui->label_15->setPixmap(check_15_9);
    }
    if(gameboard[3][2]==1024){
        QPixmap check_15_10;
        check_15_10.load(":/pics/1024.png");
        ui->label_15->setPixmap(check_15_10);
    }
    if(gameboard[3][2]==2048){
        QPixmap check_15_11;
        check_15_11.load(":/pics/2048.png");
        ui->label_15->setPixmap(check_15_11);
    }
    if(gameboard[3][3]==2){
        QPixmap check_16;
        check_16.load(":/pics/2.png");
        ui->label_16->setPixmap(check_16);
    }
    if(gameboard[3][3]==0){
        QPixmap check_16_1;
        check_16_1.load(":/pics/blank.png");
        ui->label_16->setPixmap(check_16_1);
    }    if(gameboard[3][3]==4){
        QPixmap check_16_2;
        check_16_2.load(":/pics/4.png");
        ui->label_16->setPixmap(check_16_2);
    }
    if(gameboard[3][3]==8){
        QPixmap check_16_3;
        check_16_3.load(":/pics/8.png");
        ui->label_16->setPixmap(check_16_3);
    }
    if(gameboard[3][3]==16){
        QPixmap check_16_4;
        check_16_4.load(":/pics/16.png");
        ui->label_16->setPixmap(check_16_4);
    }
    if(gameboard[3][3]==32){
        QPixmap check_16_5;
        check_16_5.load(":/pics/32.png");
        ui->label_16->setPixmap(check_16_5);
    }
    if(gameboard[3][3]==64){
        QPixmap check_16_6;
        check_16_6.load(":/pics/64.png");
        ui->label_16->setPixmap(check_16_6);
    }
    if(gameboard[3][3]==128){
        QPixmap check_16_7;
        check_16_7.load(":/pics/128.png");
        ui->label_16->setPixmap(check_16_7);
    }
    if(gameboard[3][3]==256){
        QPixmap check_16_8;
        check_16_8.load(":/pics/256.png");
        ui->label_16->setPixmap(check_16_8);
    }
    if(gameboard[3][3]==512){
        QPixmap check_16_9;
        check_16_9.load(":/pics/512.png");
        ui->label_16->setPixmap(check_16_9);
    }
    if(gameboard[3][3]==1024){
        QPixmap check_16_10;
        check_16_10.load(":/pics/1024.png");
        ui->label_16->setPixmap(check_16_10);
    }
    if(gameboard[3][3]==2048){
        QPixmap check_16_11;
        check_16_11.load(":/pics/2048.png");
        ui->label_16->setPixmap(check_16_11);
    }

}

void game::keyPressEvent(QKeyEvent *event)
{
    int i, j, k, l, a, b, c, d;
    if(event->key()==Qt::Key_A){
         for(i=0; i<4; i++){
             int check=0;
             for(j=0; j<4; j++){
                 l=j;
                 while(gameboard[i][l-1]==0 && l>=1){
                     k=gameboard[i][l-1];
                     gameboard[i][l-1]=gameboard[i][l];
                     gameboard[i][l]=k;
                     l=l-1;
                 }
             }
         }
         //for(a=0; a<4; a++){
            //for(b=0; b<4; b++){
                 //d=b;
                 //while((gameboard[i][d]==gameboard[i][d+1] || gameboard[i][d]!=gameboard[i][d+1]) && d<=2){
                     //if(gameboard[i][d]==gameboard[i][d+1]){
                        //gameboard[i][d]*=2;
                       // gameboard[i][d+1]=0;
                     //}
                    // else{
                     //    gameboard[i][d]=gameboard[i][d+1];
                   //      gameboard[i][d+1]=0;
                 //    }
               //      d++;
             //    }
           //  }
         //}
    }
    if(event->key()==Qt::Key_D){
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                l=j;
                while(gameboard[i][l+1]==0 && l>=0){
                    k=gameboard[i][l+1];
                    gameboard[i][l+1]=gameboard[i][l];
                    gameboard[i][l]=k;
                    l=l-1;
                }
            }
        }
    }
    if(event->key()==Qt::Key_W){
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                l=i;
                while(gameboard[l-1][j]==0 && l>=1){
                    k=gameboard[l-1][j];
                    gameboard[l-1][j]=gameboard[l][j];
                    gameboard[l][j]=k;
                    l=l-1;
                }
            }
        }
    }
    if(event->key()==Qt::Key_S){
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                l=i;
                while(gameboard[l+1][j]==0 && l>=0){
                    k=gameboard[l+1][j];
                    gameboard[l+1][j]=gameboard[l][j];
                    gameboard[l][j]=k;
                    l=l-1;
                }
            }
        }
    }

    ShowBoard();
}



game::~game()
{
    delete ui;
}
