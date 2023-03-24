#include "ingredient.hpp"
#include <vector>
class Recipe {

public:
    std::string recipeTitle;
    std::vector<Ingredient> ingredientList;
    std::vector<std::string> directions;
    Recipe(std::string title, std::vector<Ingredient> ingredients, std::vector<std::string> dirs);
    ~Recipe() {};

};
Recipe::Recipe(std::string title, std::vector<Ingredient> ingredients, std::vector<std::string> dirs){
    recipeTitle = title;
    ingredientList = ingredients;
    directions = dirs;
}


