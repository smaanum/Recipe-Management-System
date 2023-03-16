
/* https://code.visualstudio.com/docs/languages/cpp on how to compile/run */

#include <iostream>
#include<stdlib.h>
#include "recipe.cpp"

Recipe makeRecipe(){
	//Get the recipe name
	std::string title;
	std::cout << "Recipe Title: ";
	std::getline(std::cin, title);

	//Get ingredient list
	std::vector<Ingredient> ingredientList;
	bool moreIngredients = true;
	while (moreIngredients) {
		char opt;
		std::cout<<"CHOOSE OPTION:"
		<< "\n1. Add new ingredient"
		<<"\n2. Exit (No more ingredients)";
		std::cin>>opt;

		if (opt == '2'){
			moreIngredients = false;
		}
		else {
			std::
		}


	}
	
	//Recipe newRecipe = new Recipe(titl);
}


int main()	{
	int choice;
	std::vector<Recipe> recipeBook;
	while(1)	{
		std::cout<<"=== Recipe Book ==="
		<<"\n1. Add New Recipe"
		<<"\n2. Browse Recipes"
		<<"\n3. Edit Recipe"
		<<"\n4. Delete Recipe"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		std::cin>>choice;

		
		switch(choice)	{
			case 1:
				recipeBook.push_back(makeRecipe());
                break;
				
			case 2: 
				break;
			case 3: 
				break;
			
			case 4: 
				break;
			
			case 5: 
                exit(0);
			default: std::cout<<"\nInvalid Choice Entered";
			
		}
	}
	
	
	
	
	return 0;
}