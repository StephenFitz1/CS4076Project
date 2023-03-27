#ifndef ALLERGIES_H
#define ALLERGIES_H

using namespace std;

class allergies{
public:
    allergies();
    allergies(string name);

    string allergies[10] = { eggs, milk, mustard, peanuts, crustaceans, fish, soy, sesame, treenuts , wheat};

    friend class fileWriter; //So fileWriter can access the details of allergies and insert to file
};




#endif // ALLERGIES_H
