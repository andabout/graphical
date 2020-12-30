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
    ui->scrollArea->verticalScrollBar()->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {background:#303239   ; width:8px; margin: 0px 0px 0px 0px; }"
                                                       "\QScrollBar::handle:verticalScrollBar {  display: inline-block;background:   #202224;padding: 8px 12px;line-height: 1;text-decoration: none;-moz-border-radius: 4px;-webkit-border-radius: 4px;-o-border-radius: 4px;border-radius: 4px;}" //style radius from       https://github.com/Grsmto/simplebar
                                                       "\QScrollBar::add-line:verticalScrollBar {height: 0px;}"
                                                       "QScrollBar::sub-line:verticalScrollBar {height: 0px;}"));
    //#202225
    this->setStyleSheet("background-color: #36383f");//#7289DA;");
}
