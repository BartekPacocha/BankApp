#pragma once
#include "BaseClass.h"

#include <iostream>

class Menu :
	public BaseClass
{
public:
	Menu();
	~Menu();
	void SelectMenuOption(int);
	int GetMenuOption();
	void DrawMenu();
	void Clear();
	/*
	TODO: 1. New Account
	TODO: 2. Deposit
	TODO: 3. Withdraw
	TODO: 4. Balance
	TODO: 5. All accounts
	TODO: 6. Close account
	TODO: 7. Exit
	*/

};

