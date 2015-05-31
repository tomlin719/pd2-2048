#ifndef RESULT_WIN_H
#define RESULT_WIN_H

#include <QDialog>

namespace Ui {
class result_win;
}

class result_win : public QDialog
{
    Q_OBJECT

public:
    explicit result_win(QWidget *parent = 0);
    ~result_win();

private:
    Ui::result_win *ui;
};

#endif // RESULT_WIN_H
