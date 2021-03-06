#ifndef EXPR_H
#define EXPR_H

#include <QDialog>
#include <model.h>
#include <QString>

namespace Ui {
class expr;
}

class expr : public QDialog
{
    Q_OBJECT

public:
    explicit expr(QWidget *parent = nullptr);
    ~expr();

private slots:
    void getbtn0();
    void getbtn1();
    void getbtn2();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_plus_clicked();

    void on_btn_sub_clicked();

    void on_btn_mul_clicked();

    void on_btn_div_clicked();

    void on_btn_equal_clicked();

    void on_btn_clear_clicked();

private:
    QString tmp;
    Ui::expr *ui;
    model *mode;
};

#endif // EXPR_H
