#include "expr.h"
#include "ui_expr.h"

expr::expr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::expr)
{
    ui->setupUi(this);
    connect(this->ui->btn_0,SIGNAL(clicked(bool)),this,SLOT(getbtn0()));
    connect(this->ui->btn_1,SIGNAL(clicked(bool)),this,SLOT(getbtn1()));
    connect(this->ui->btn_2,SIGNAL(clicked(bool)),this,SLOT(getbtn2()));
    this->mode = new model;
    this->tmp = "";
    setFixedSize(350,480);
}

expr::~expr()
{
    delete ui;
}

void expr::getbtn0()
{
    if(this->tmp != "")
    {
        this->tmp += this->ui->btn_0->text();
        this->ui->lbl_display->setText(this->tmp);
    }
}

void expr::getbtn1()
{
    this->tmp += this->ui->btn_1->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::getbtn2()
{
    this->tmp += this->ui->btn_2->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_3_clicked()
{
    this->tmp += this->ui->btn_3->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_4_clicked()
{
    this->tmp += this->ui->btn_4->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_5_clicked()
{
    this->tmp += this->ui->btn_5->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_6_clicked()
{
    this->tmp += this->ui->btn_6->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_7_clicked()
{
    this->tmp += this->ui->btn_7->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_8_clicked()
{
    this->tmp += this->ui->btn_8->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_9_clicked()
{
    this->tmp += this->ui->btn_9->text();
    this->ui->lbl_display->setText(this->tmp);
}

void expr::on_btn_plus_clicked()
{
    int num = this->tmp.toInt();
    this->mode->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_plus->text();
    this->mode->setFlag(ex);
}

void expr::on_btn_sub_clicked()
{
    int num = this->tmp.toInt();
    this->mode->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_sub->text();
    this->mode->setFlag(ex);
}

void expr::on_btn_mul_clicked()
{
    int num = this->tmp.toInt();
    this->mode->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_mul->text();
    this->mode->setFlag(ex);
}

void expr::on_btn_div_clicked()
{
    int num = this->tmp.toInt();
    this->mode->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_div->text();
    this->mode->setFlag(ex);
}

void expr::on_btn_equal_clicked()
{
    int num = this->tmp.toInt();
    this->mode->setNum2(num);
    QString res = this->mode->doExpr();
    this->ui->lbl_display->setText(res);
    this->tmp = "";
}

void expr::on_btn_clear_clicked()
{
    this->tmp = "";
    this->ui->lbl_display->setText("0");
}
