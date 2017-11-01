#include "stdafx.h"
#include <iostream>
#include "VPFunctionDefinitions.h"



int displayRefresh(int Hunger, int Socialisation, int Happiness, int Toilet, int Health, int Cleanness)
{
	std::cout << "Hunger Level: " << Hunger << "\nSocialisation Level: " << Socialisation << "\nHappiness Level: " << Happiness << "\nToilet Need Level: " << Toilet << "\nHealth Level: " << Health << "\nCleanliness Level: " << Cleanness << std::endl;
	return 0;
}