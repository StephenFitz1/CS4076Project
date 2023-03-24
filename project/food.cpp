#include "food.h"
#include <iostream>

//Food constructor to create food object
food::food(string name, string dietaryReqs, string calories, string ingredients, string cookingDetails ){
    this-> name= name;
    this->dietaryReqs = dietaryReqs;
    this-> calories = calories;
    this-> ingredients = ingredients;
    this-> cookingDetails = cookingDetails;
}

food::food(string name, string dietaryReqs, string ingredients, string cookingDetails){
    this->name = name;
    this->dietaryReqs = dietaryReqs;
    this->ingredients = ingredients;
    this->cookingDetails = cookingDetails;
}
