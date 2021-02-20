#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_toolButton_3_clicked()
{
    this->close();
}

void Widget::on_toolButton_2_clicked()
{
    this->showMaximized();
}

1
