#include "fileWriter.h"
#include <string>
#include <iostream>

using namespace std;

fileWriter::fileWriter()
{
    string pathToList = "recipeslist.txt";
}

void fileWriter::writeData(string name, string calories, string ingredients, string cookingDetails){
    ofstream writingData(pathToList);
    writingData << name << "," << calories << "," << ingredients << "," << cookingDetails << "\n";
    writingData.close();
}

void fileWriter::writeData(string name, string ingredients, string cookingDetails){
    ofstream writingData(pathToList);
    writingData << name << "," << ingredients << "," << cookingDetails << "\n";
}

