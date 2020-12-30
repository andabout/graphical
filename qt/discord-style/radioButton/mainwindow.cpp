#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool status_appleRadioButton = false;
int how_much_move_x = 24;

void MainWindow::on_pushButton_2_clicked()
{
    ui->gB0->setGeometry(110,110,60,30);
    ui->btnA->setGeometry(0,0,50,25);
    ui->btnB->setGeometry(0,0,25,25);

    ui->gB0->setStyleSheet("border:1px solid transparent;color:transparent;border-radius:9px;background:transparent;");
    ui->btnA->setStyleSheet("border:1px solid transparent;color:red;background:gray;border-radius:12px;");
    ui->btnB->setStyleSheet("border:10px solid transparent;background:white;border-radius:12px;");
}
void MainWindow::on_btnB_clicked()
{
    if(status_appleRadioButton == false)
    {
        int x = ui->btnB->x();
        ui->btnB->move(x=how_much_move_x,ui->btnB->y());
        ui->btnA->setStyleSheet("border:1px solid transparent;color:red;background:#8379e0;border-radius:12px;");
        status_appleRadioButton =true;
    }
    else
    {
        int x = ui->btnB->x();
        ui->btnB->move(x=0,ui->btnB->y());
        ui->btnA->setStyleSheet("border:1px solid transparent;color:red;background:gray;border-radius:12px;");
        status_appleRadioButton =false;
    }
}

void MainWindow::on_btnA_clicked()
{
    if(status_appleRadioButton == false)
    {
        int x = ui->btnB->x();
        ui->btnB->move(x=how_much_move_x,ui->btnB->y());
        ui->btnA->setStyleSheet("border:1px solid transparent;color:red;background:#8379e0;border-radius:12px;");
        status_appleRadioButton =true;
    }
    else
    {
        int x = ui->btnB->x();
        ui->btnB->move(x=0,ui->btnB->y());
        ui->btnA->setStyleSheet("border:1px solid transparent;color:red;background:gray;border-radius:12px;");
        status_appleRadioButton =false;
    }
}
