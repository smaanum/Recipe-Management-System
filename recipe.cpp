#include <string>
#include <vector>
class Recipe {
    struct Ingredient {
        std::string name;
        std::string measurementType;
        float measurement;
    };

public:
    std::string recipeTitle;
    std::vector<Ingredient> ingredientList;
    std::vector<std::string> directions;

    void setRecipeTitle();
    void addIngredient();
    void addStep();
};
