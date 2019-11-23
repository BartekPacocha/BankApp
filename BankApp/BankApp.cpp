// BankApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Menu.h"

int main()
{
	std::unique_ptr<Menu> menu(new Menu);

	// Sample accounts:
	unique_ptr<Account> a1(new Account(1));
	menu->AddAccountToList(move(a1));
	unique_ptr<Account> a2(new Account(2));
	menu->AddAccountToList(move(a2));

	for (;;)
	{
		auto option = menu->GetMenuOption();
		menu->SelectMenuOption(option);
		if (option == 0)
			break;
	}
}


