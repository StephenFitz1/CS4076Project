#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <string>
#include <fstream>

class fileWriter{


public:
    fileWriter();
    void writeData(string name, string ingredients, string cookingDetails);
    void writeData(string name, string calories, string ingredients, string cookingDetails);


private:
    string pathToFile;
};

#endif // FILEWRITER_H
