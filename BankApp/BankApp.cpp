// BankApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Menu.h"

int main()
{
	std::unique_ptr<Menu> menu(new Menu);
	for (;;)
	{
		auto option = menu->GetMenuOption();
		menu->SelectMenuOption(option);
		if (option == 7)
			break;
	}
}


