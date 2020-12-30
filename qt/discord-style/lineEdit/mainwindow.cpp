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
    this->setStyleSheet("background-color:#35373d");//#282a30;");
    ui->lineEdit->setPlaceholderText("AAAA-BBBB-CCCC");
    ui->lineEdit->setStyleSheet("QLineEdit{background:#34353a;color:gray;border: 1px solid white; border-color: #1c1b1b; border-radius:3px;font-family:Carlito; font-size: 17px;padding-left: 10px;}"
                                "\QLineEdit::hover{color:gray;border: 1px solid white; border-color: black;border-radius:3px;}"
                                "\QLineEdit::focus{color:gray;border: 1px solid white; border-color: #8379e0;border-radius:3px;}");

    ui->pushButton->setStyleSheet("QPushButton{background-color:#8379e0;border-radius:3px; font-family:Carlito; font-size: 14px; color:white;}"
                                  "\QPushButton::hover{background-color:#736acc}");
}

void MainWindow::on_pushButton_2_clicked()
{

}
