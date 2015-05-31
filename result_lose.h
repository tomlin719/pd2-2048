#ifndef RESULT_LOSE_H
#define RESULT_LOSE_H

#include <QDialog>

namespace Ui {
class result_lose;
}

class result_lose : public QDialog
{
    Q_OBJECT

public:
    explicit result_lose(QWidget *parent = 0);
    ~result_lose();

private:
    Ui::result_lose *ui;
};

#endif // RESULT_LOSE_H
