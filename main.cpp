
/* https://code.visualstudio.com/docs/languages/cpp on how to compile/run */

#include <iostream>
#include<stdlib.h>
#include "recipe.cpp"
//change to return Recipe
Recipe makeRecipe(){
	//Get the recipe name
	std::string title;
	std::cout << "\nRecipe Title: ";
	std::cin.ignore();
	std::getline(std::cin, title);

	//Get ingredient list
	std::vector<Ingredient> ingredientList;
	bool moreIngredients = true;
	std::cout << "\n* * * * *";
	while (moreIngredients) {
		char opt;
		std::cout<<"\n(1) Add new ingredient"
		<<"\n(2) Done (No more ingredients)"
		<<"\n\nEnter your Choice: ";
		std::cin>>opt;

		if (opt == '2'){
			moreIngredients = false;
		}
		else if (opt == '1') {
			std::string name;
			std::string measurementType;
			std::string measurement;

			std::cout<< "\nIngredient Name: ";
			std::cin.clear();
			std::cin.sync();
			std::getline(std::cin, name);
			
			std::cout << "\nMeasurement Type (cups, tbsp, tsp, etc.): ";
			std::cin.clear();
			std::cin.sync();
			std::getline(std::cin, measurementType);

			std::cout << "\nMeasure: ";
			std::cin.clear();
			std::cin.sync();
			std::getline(std::cin, measurement);
			//std::cout << measurement << " " << measurementType << " " << name;


			Ingredient newIngredient;
			newIngredient.name = name;
			newIngredient.measurementType = measurementType;
			newIngredient.measurement = measurement;
			ingredientList.push_back(newIngredient);
		}
		else {
			std::cout << "\nInvalid choice";
		}
	}
	
	//add directions
	std::vector<std::string> dir;
	bool moreDir = true;
	std::cout << "\n* * * * *";
	while (moreDir) {
		char opt;
		std::cout << "\n(1) Add step"
		<<"\n(2) Done (no more steps)"
		<<"\n\nEnter your choice: ";
		std::cin >> opt;

		if (opt == '1'){
			std::string step;
			std::cout << "\nEnter step: ";
			std::cin.clear();
			std::cin.sync();
			std::getline(std::cin, step);
			dir.push_back(step);
		}
		else if (opt == '2'){
			moreDir = false;
		}
		else {
			std::cout <<"\nInvalid choice";
		}
	}

	std::cout << "\n* * * * *";
	Recipe newRecipe(title, ingredientList, dir);
	return newRecipe;
	
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
			case 1: //Make recipe
				recipeBook.push_back(makeRecipe());
                break;
				
			case 2: 
				break;
			case 3: 
				break;
			
			case 4: // Delete recipe
				break;
			
			case 5: 
                exit(0);
			default: std::cout<<"\nInvalid Choice Entered";
			
		}
	}
	
	
	
	
	return 0;
}