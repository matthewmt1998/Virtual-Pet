// Virtual Pet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "String"


int main()
{
	
	std::string Name;
	std::string PetName;
	int Hunger = 100;
	int Socialisation = 100;
	int Happiness = 100;
	int Toilet = 0;
	int Health = 100;
	int Cleanness = 100;

// -----------// 
	std::cout << "\\--------Matthew Taylor 2017--------//" << std::endl;
	std::cout << " Welcome to The Virtual Pet Sim!" << std::endl;
	std::cout << " Whats your name?" << std::endl;
	std::cin >> Name;
	std::cout << " Welcome " << Name << "\n What would you like to call your Pet?" << std::endl;
	std::cin >> PetName;
	std::cout << " You have just bought your pet called " << PetName << " and taken them home." << std::endl;
	std::cout << " in order to look after them you will need to monitor the following things" << std::endl;
	std::cout << " Your pets Stats are \n Hunger\n Socialisation\n Health\n Happiness\n Cleanliness\n Toilet" << std::endl;
//----------//
Stat_Refresh:
	
	system("CLS");
	if (Hunger == 0)
	{
		std::cout << "Your Pet has Died!";
	std::cout << "\\--------Matthew Taylor 2017--------//" << std::endl;
	std::cout << "Hunger Level: " << Hunger << "\nSocialisation Level: " << Socialisation << "\nHappiness Level: " << Happiness << "\nToilet Need Level: " << Toilet << "\nHealth Level: " << Health << "\nCleanliness Level: " << Cleanness << std::endl;

		Socialisation - 1;
		Happiness - 1; 
		Toilet + 1;
		Hunger - 1;
		Cleanness - 1;



	}
    return 0;
}

