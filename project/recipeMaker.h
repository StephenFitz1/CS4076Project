#ifndef RECIPEMAKER_H
#define RECIPEMAKER_H

#include <QMainWindow>

namespace Ui {
class recipeMaker;
}

class recipeMaker : public QMainWindow
{
    Q_OBJECT

public:
    explicit recipeMaker(QWidget *parent = nullptr);
    ~recipeMaker();

private slots:
    void on_exitButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);



    void on_checkBox_stateChanged(int arg1);

    void on_eggs_clicked(bool checked);

    void on_milk_clicked(bool checked);

    void on_mustard_clicked(bool checked);

    void on_peanuts_clicked(bool checked);

    void on_crustaceans_clicked(bool checked);

    void on_fish_clicked(bool checked);

    void on_soy_clicked(bool checked);

    void on_sesameSeeds_clicked(bool checked);

    void on_treeNuts_clicked(bool checked);

    void on_wheat_clicked(bool checked);

private:
    Ui::recipeMaker *ui;
};

#endif // RECIPEMAKER_H
