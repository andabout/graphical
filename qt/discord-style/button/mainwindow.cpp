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


void MainWindow::on_pushButton_clicked()
{
    this->setGeometry(1700,300,300,400);
    ui->pushButton->setGeometry(0,0,62,32);
    this->setStyleSheet("background-color:#282a30");
    ui->pushButton->setStyleSheet("QPushButton{background-color:#8379e0;border-radius:3px; font-family:Carlito; font-size: 14px; color:white;}"
                                  "\QPushButton::hover{background-color:#736acc}");
    //# 7289DA
//    "QPushButton{background-color:#7289DA;border-radius:6px;  font-weight: bold;color:white;border-style: outset;}\QPushButton::hover{color:black}";
}
