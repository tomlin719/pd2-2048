#include "result_win.h"
#include "ui_result_win.h"

result_win::result_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::result_win)
{
    ui->setupUi(this);
}

result_win::~result_win()
{
    delete ui;
}
