#include "result_lose.h"
#include "ui_result_lose.h"

result_lose::result_lose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::result_lose)
{
    ui->setupUi(this);
}

result_lose::~result_lose()
{
    delete ui;
}
