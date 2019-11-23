#pragma once
#include "BaseClass.h"
#include "Account.h"

#include <iostream>
#include <vector>

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

	// Account operations:
	void CreateAccount();
	void AccountsList();
	/*
	TODO: 1. New Account
	TODO: 2. Deposit
	TODO: 3. Withdraw
	TODO: 4. Balance
	TODO: 5. All accounts
	TODO: 6. Close account
	TODO: 7. Exit
	*/
	// Account list operations:
	void AddAccountToList(unique_ptr<Account>);
	int GetAccountsAmount();
private:
	// vector account list
	std::vector <unique_ptr<Account>> accountList;

};

