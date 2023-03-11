
/* https://code.visualstudio.com/docs/languages/cpp on how to compile/run */

#include <iostream>
#include<string.h>
#include<stdlib.h>
#include <vector>
#include "recipe.hpp"



int main()	{
	int choice;
	std::vector<
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