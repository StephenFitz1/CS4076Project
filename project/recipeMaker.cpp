#include "recipemaker.h"
#include "ui_recipemaker.h"
#include <iostream>

recipeMaker::recipeMaker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recipeMaker)
{
    ui->setupUi(this);
}

recipeMaker::~recipeMaker()
{
    delete ui;
}

void recipeMaker::on_exitButton_clicked()
{
    exit(0);
}





void recipeMaker::on_eggs_clicked(bool checked)
{

}


void recipeMaker::on_milk_clicked(bool checked)
{

}


void recipeMaker::on_mustard_clicked(bool checked)
{

}


void recipeMaker::on_peanuts_clicked(bool checked)
{

}


void recipeMaker::on_crustaceans_clicked(bool checked)
{

}


void recipeMaker::on_fish_clicked(bool checked)
{

}


void recipeMaker::on_soy_clicked(bool checked)
{

}


void recipeMaker::on_sesameSeeds_clicked(bool checked)
{

}


void recipeMaker::on_treeNuts_clicked(bool checked)
{

}


void recipeMaker::on_wheat_clicked(bool checked)
{

}

