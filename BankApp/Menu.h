#pragma once
#include "BaseClass.h"
#include "Account.h"

#include <vector>

class Menu :
	public BaseClass
{
public:
	Menu();
	~Menu();
	// Menu options:
	void SelectMenuOption(int);
	int GetMenuOption();
	void DrawMenu();
	void Clear();

	// Account operations:
	void CreateAccount();
	void ShowAccountByNr();
	bool Deposit();
	/*
	TODO: 2. Deposit
	TODO: 3. Withdraw
	TODO: 5. All accounts
	TODO: 6. Close account
	TODO: 7. Exit
	*/
	// Account list operations:
	void AddAccountToList(unique_ptr<Account>);
	int GetAccountsAmount();
	void ShowAllAccounts();
private:
	// vector account list
	std::vector <unique_ptr<Account>> accountList;

};

