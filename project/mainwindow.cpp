#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "food.h"
#include "recipes.h"
#include "recipeMaker.h"


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


void MainWindow::on_closeButton_clicked()
{
    exit(0);
}


void MainWindow::on_createRecipe_clicked()
{
    recipeMaker *test = new recipeMaker;
    test->show();
//    this->hide();
}


void MainWindow::on_viewRecipes_clicked()
{

}

