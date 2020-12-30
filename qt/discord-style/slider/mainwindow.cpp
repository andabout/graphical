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

    ui->pushButton->setGeometry(40,40,62,32);
    ui->pushButton->setStyleSheet("QPushButton{background-color:#8379e0;border-radius:3px; font-family:Carlito; font-size: 14px; color:white;}"
                                  "\QPushButton::hover{background-color:#736acc}");








//    ui->horizontalSlider->setStyleSheet("QSlider::groove:horizontal {border: 1px solid;height: 10px;margin: 0px;}"
//                                        "\QSlider::handle:horizontal {background-color: black;border: 1px solid;height: 40px;width: 40px;margin: -15px 0px;}");





//    ui->horizontalSlider->setStyleSheet("QSlider::groove:horizontal {background: red;position: absolute;left: 4px; right: 4px;} "
//                                        "\QSlider::handle:horizontal {height: 10px;background: green;margin: 0 -4px;}"
//                                        "\QSlider::add-page:horizontal {background: white;}"
//                                        "QSlider::sub-page:horizontal {background: pink;}");



    ui->horizontalSlider->setGeometry(50,100,150,40);
//    ui->horizontalSlider->setStyleSheet("QSlider::groove:horizontal {background: red;position: absolute;left: 4px; right: 10px;} "
//                                        "\QSlider::handle:horizontal {width:10px ;height: 20px;background: red;margin: 0 -2px;}"
//                                        "\QSlider::add-page:horizontal {background: white;}"
//                                        "QSlider::sub-page:horizontal {background: pink;}");



//    ui->horizontalSlider->setStyleSheet("QSlider::groove:horizontal {border: 1px solid #999999;height: 8px; background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);margin: 2px 0;}"
//                                        "\QSlider::handle:horizontal {background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);border: 1px solid #5c5c5c;width: 18px;margin: -2px 0;border-radius: 3px;}");"


    this->setStyleSheet("background:black;");
    ui->horizontalSlider->setStyleSheet("QSlider::groove:horizontal {border: 1px solid transparent;height: 25px; background:transparent;}"
                                        "\QSlider::handle:horizontal {background-color: white; border: 0px; width:10px; border-radius: 3px;}"
                                        "\QSlider::add-page:horizontal {border:2px solid transparent; border-radius: 3px; margin-top: 8px; margin-bottom: 8px; background: #383737;}"
                                        "QSlider::sub-page:horizontal {border:2px solid transparent; border-radius: 3px; margin-top: 8px;margin-bottom: 8px;background: #8379e0;}");
}
