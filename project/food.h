#ifndef FOOD_H
#define FOOD_H
#include <string>

using namespace std;

class food : public consumables
{
    //Constructors to create food objects
    public:
    food();
    food(string name, string dietaryReqs, string ingredients, string cookingDetails);
    food(string name, string dietaryReqs, string calories, string ingredients, string cookingDetails);


private:
    string name;
    string dietaryReqs;
    string calories;
    string ingredients;
    string cookingDetails;


    friend class fileWriter; //so fileWriter can use the values from food to insert to recipes file
};



#endif // FOOD_H
