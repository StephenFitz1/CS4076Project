#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <string>
#include <fstream>
using namespace std;
//using std::string;

class fileWriter{

public:
    fileWriter();
    void writeData(string name, string dietaryReqs, string ingredients, string cookingDetails);
    void writeData(string name, string dietaryReqs, string calories, string ingredients, string cookingDetails);


private:
    string pathToFile;
};

#endif // FILEWRITER_H
