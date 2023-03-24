#ifndef FOOD_H
#define FOOD_H
#include <string>

using namespace std;

class food
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



};



#endif // FOOD_H
