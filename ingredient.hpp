#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>

struct Ingredient {
    std::string name;
    std::string measurementType;
    float measurement;
};
#endif