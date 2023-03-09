#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_VeganRadio_clicked()
{

}


void MainWindow::on_PescRadio_clicked()
{

}


void MainWindow::on_VegetarianRadio_clicked()
{

}


void MainWindow::on_pushButton_clicked()
{
    exit(1);
}

