#include "startwindow.h"
#include "ui_startwindow.h"

startwindow::startwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::startwindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(StartClick()));
    Gamewindow=NULL;
}

startwindow::~startwindow()
{
    delete ui;
}

void startwindow::StartClick(){
    Gamewindow=new game;
    this->setCentralWidget(Gamewindow);
}

void startwindow::resetGame(){
    if(Gamewindow!=NULL){
        delete Gamewindow;
    }
    this->setCentralWidget(Gamewindow);
}
