#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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

    this->setStyleSheet("background:#282a30");


    //box 1
    //the group box size most come be (x,y,500,50)
    ui->checkBox->setGeometry(10,10,150,50);
    ui->pushButton_2->setGeometry(0,0,500,50);

    ui->groupBox->setStyleSheet("background:#8379e0;border:1px soild transparent;border-radius:3px;");
    ui->checkBox->setStyleSheet("QCheckBox{background:transparent;color:white;padding-left:5px;margin-top:-20px;}"
                                "\QCheckBox::indicator:unchecked {image : url(/root/Documents/codes/projects/system/discrod_style/0.1/checkBox_style_test/unknow30.png);}"
                                "\QCheckBox::indicator:checked {image : url(/root/Documents/codes/projects/system/discrod_style/0.1/checkBox_style_test/check30.png);}");
    ui->pushButton_2->setStyleSheet("background:transparent;border:1px soild transparent;");



    //box 2
    ui->checkBox_2->setGeometry(10,10,150,40);
    ui->pushButton_3->setGeometry(0,0,500,50);
    ui->checkBox_2->setChecked(false);
    ui->groupBox_2->setStyleSheet("background:gray; border:1px solid transparent; border-radius:3px;");
    ui->checkBox_2->setStyleSheet("QCheckBox{background:transparent;color:white;padding-left:5px;margin-top:-10px;}"
                                "\QCheckBox::indicator:unchecked {image : url(/root/Documents/codes/projects/system/discrod_style/0.1/checkBox_style_test/unknow30.png);}"
                                "\QCheckBox::indicator:checked {image : url(/root/Documents/codes/projects/system/discrod_style/0.1/checkBox_style_test/check30.png);}");
    ui->pushButton_3->setStyleSheet("background:transparent;border:1px soild transparent;");

}

void MainWindow::on_checkBox_clicked()
{

}

void MainWindow::on_groupBox_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked() == false)
        ui->checkBox->setChecked(true);
    else
        ui->checkBox->setChecked(false);
}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->checkBox_2->isChecked() == false)
        ui->checkBox_2->setChecked(true);
    else
        ui->checkBox_2->setChecked(false);
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{

}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{

}

void MainWindow::on_checkBox_2_clicked()
{

}
//if(ui->checkBox_2->isChecked() == false)
//{
//    ui->checkBox->setChecked(false);
//    ui->groupBox->setStyleSheet("background:#282a30; border:1px solid transparent; border-radius:3px;");
//    ui->groupBox_2->setStyleSheet("background:#8379e0; border:1px solid transparent; border-radius:3px;");
//    ui->checkBox_2->setChecked(true);

//}
//else
//{
//    ui->checkBox->setChecked(true);
//    ui->groupBox_2->setStyleSheet("background:#282a30; border:1px solid transparent; border-radius:3px;");
//    ui->groupBox->setStyleSheet("background:#8379e0; border:1px solid transparent; border-radius:3px;");
//    ui->checkBox_2->setChecked(false);
//}
