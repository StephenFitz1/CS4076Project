#ifndef RECIPES_H
#define RECIPES_H
#include <string>



class recipes{

public:
    recipes();
    recipes(food food[], allergies allg);
//    recipes recipesList[];

    void addRecipesToList(food food, allergies allergies);
    friend class fileWriter;

private:
    recipes recipesList[];

};





#endif // RECIPES_H
