
#include "fileWriter.h"
#include <string>
#include <iostream>

using namespace std;

fileWriter::fileWriter()
{
    pathToFile = "recipeslist.txt";
}

void fileWriter::writeData(string name, string dietaryReqs,  string calories, string ingredients, string cookingDetails){
    ofstream writingData(pathToFile);
    writingData << name << "," << dietaryReqs << "," <<  calories << "," << ingredients << "," << cookingDetails << "\n";
    writingData.close();
}

void fileWriter::writeData(string name, string dietaryReqs, string ingredients, string cookingDetails){
    ofstream writingData(pathToFile);
    writingData << name << "," << dietaryReqs << "," << ingredients << "," << cookingDetails << "\n";
    writingData.close();
}


