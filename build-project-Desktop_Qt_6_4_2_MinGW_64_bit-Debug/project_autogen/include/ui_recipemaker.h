/********************************************************************************
** Form generated from reading UI file 'recipemaker.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEMAKER_H
#define UI_RECIPEMAKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipeMaker
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_2;
    QCheckBox *eggs;
    QCheckBox *milk;
    QCheckBox *mustard;
    QCheckBox *peanuts;
    QCheckBox *crustaceans;
    QCheckBox *fish;
    QCheckBox *soy;
    QCheckBox *sesameSeeds;
    QCheckBox *treeNuts;
    QCheckBox *wheat;
    QPushButton *pushButton;
    QPushButton *exitButton;
    QSlider *difficultySlider;
    QLineEdit *lineEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recipeMaker)
    {
        if (recipeMaker->objectName().isEmpty())
            recipeMaker->setObjectName("recipeMaker");
        recipeMaker->resize(800, 600);
        centralwidget = new QWidget(recipeMaker);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 30, 601, 28));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(40, 130, 411, 151));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(470, 90, 271, 28));
        eggs = new QCheckBox(centralwidget);
        eggs->setObjectName("eggs");
        eggs->setGeometry(QRect(40, 310, 93, 26));
        milk = new QCheckBox(centralwidget);
        milk->setObjectName("milk");
        milk->setGeometry(QRect(150, 310, 93, 26));
        mustard = new QCheckBox(centralwidget);
        mustard->setObjectName("mustard");
        mustard->setGeometry(QRect(260, 310, 93, 26));
        peanuts = new QCheckBox(centralwidget);
        peanuts->setObjectName("peanuts");
        peanuts->setGeometry(QRect(380, 310, 93, 26));
        crustaceans = new QCheckBox(centralwidget);
        crustaceans->setObjectName("crustaceans");
        crustaceans->setGeometry(QRect(490, 310, 181, 26));
        fish = new QCheckBox(centralwidget);
        fish->setObjectName("fish");
        fish->setGeometry(QRect(40, 360, 93, 26));
        soy = new QCheckBox(centralwidget);
        soy->setObjectName("soy");
        soy->setGeometry(QRect(150, 360, 93, 26));
        sesameSeeds = new QCheckBox(centralwidget);
        sesameSeeds->setObjectName("sesameSeeds");
        sesameSeeds->setGeometry(QRect(260, 360, 121, 26));
        treeNuts = new QCheckBox(centralwidget);
        treeNuts->setObjectName("treeNuts");
        treeNuts->setGeometry(QRect(420, 360, 93, 26));
        wheat = new QCheckBox(centralwidget);
        wheat->setObjectName("wheat");
        wheat->setGeometry(QRect(530, 360, 161, 26));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 500, 83, 29));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(150, 500, 83, 29));
        difficultySlider = new QSlider(centralwidget);
        difficultySlider->setObjectName("difficultySlider");
        difficultySlider->setGeometry(QRect(520, 140, 160, 18));
        difficultySlider->setOrientation(Qt::Horizontal);
        difficultySlider->setTickPosition(QSlider::TicksBelow);
        difficultySlider->setTickInterval(0);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(520, 170, 191, 28));
        recipeMaker->setCentralWidget(centralwidget);
        menubar = new QMenuBar(recipeMaker);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        recipeMaker->setMenuBar(menubar);
        statusbar = new QStatusBar(recipeMaker);
        statusbar->setObjectName("statusbar");
        recipeMaker->setStatusBar(statusbar);

        retranslateUi(recipeMaker);

        QMetaObject::connectSlotsByName(recipeMaker);
    } // setupUi

    void retranslateUi(QMainWindow *recipeMaker)
    {
        recipeMaker->setWindowTitle(QCoreApplication::translate("recipeMaker", "MainWindow", nullptr));
        lineEdit->setText(QCoreApplication::translate("recipeMaker", "Type in the name, dietary group, calorie count(if known), ingredients and cooking details ", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("recipeMaker", "Difficulty of recipe from Easy to Hard", nullptr));
        eggs->setText(QCoreApplication::translate("recipeMaker", "Eggs", nullptr));
        milk->setText(QCoreApplication::translate("recipeMaker", "Milk", nullptr));
        mustard->setText(QCoreApplication::translate("recipeMaker", "Mustard", nullptr));
        peanuts->setText(QCoreApplication::translate("recipeMaker", "Peanuts", nullptr));
        crustaceans->setText(QCoreApplication::translate("recipeMaker", "Crustaceans + molluscs", nullptr));
        fish->setText(QCoreApplication::translate("recipeMaker", "Fish", nullptr));
        soy->setText(QCoreApplication::translate("recipeMaker", "Soy", nullptr));
        sesameSeeds->setText(QCoreApplication::translate("recipeMaker", "Sesame seeds", nullptr));
        treeNuts->setText(QCoreApplication::translate("recipeMaker", "Tree nuts", nullptr));
        wheat->setText(QCoreApplication::translate("recipeMaker", "Wheat and triticale", nullptr));
        pushButton->setText(QCoreApplication::translate("recipeMaker", "Save", nullptr));
        exitButton->setText(QCoreApplication::translate("recipeMaker", "Exit", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("recipeMaker", " Easy           Medium     Hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recipeMaker: public Ui_recipeMaker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEMAKER_H
