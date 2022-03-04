#include "my_general_window.h"
#include "./ui_my_general_window.h"

my_general_window::my_general_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::my_general_window)
{
    ui->setupUi(this);
    QWidget* wdg = new QWidget();
    wdg->show();

}


my_general_window::~my_general_window()
{

    delete ui;
}

