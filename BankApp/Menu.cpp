#include "pch.h"
#include "Menu.h"

using namespace std;

Menu::Menu()
{
	DrawMenu();	
}


Menu::~Menu()
{
}

void Menu::SelectMenuOption(int option)
{
	// TODO: SelectMenuOption 
	switch (option)
	{
	case 1:
		cout << "1. New account" << endl;
		CreateAccount();
		break;
	case 2:
		cout << "2. Deposit"  << endl;
		// Deposit(); TODO: Deposite 
		break;
	case 3:
		cout << "3. Withdraw" << endl;
		break;
	case 4:
		cout << "4. Balcance" << endl;
		break;
	case 5:
		cout << "5. Account list" << endl;
		AccountsList();
		break;
	case 6:
		cout << "6. Close account" << endl;
		break;
	case 7:
		cout << "7. Exit" << endl;
		break;
	default:
		break;
	}
	Clear();
	DrawMenu();
}

int Menu::GetMenuOption()
{
	cout << "Option: ";
	int option=0;
	cin >> option;
	return option;
}

void Menu::DrawMenu()
{
	cout << "#################" << endl;
	cout << "1. New account" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Balcance" << endl;
	cout << "5. Account list" << endl;
	cout << "6. Close account" << endl;
	cout << "7. Exit" << endl;
	cout << "#################" << endl;
}

void Menu::Clear()
{
	// TODO: Clear
	system("cls");
}

void Menu::CreateAccount()
{
	// TODO: CreateAccount
	int accountNumber;
	cout << "Create new account: " << endl;
	cout << "Account number: ";
	cin >> accountNumber;
	unique_ptr<Account> account(new Account(accountNumber));
	AddAccountToList(move(account));
}

void Menu::AccountsList()
{
	cout << "Account amount: " << GetAccountsAmount() << endl;
	cout << '\n' << "Press 1 to continue...";
	int key;
	for (;;)
	{
		cin >> key;
		if (key == 1)
			break;
	}
}

void Menu::AddAccountToList(unique_ptr<Account> account)
{
	accountList.push_back(move(account));
}

int Menu::GetAccountsAmount()
{
	auto amount = accountList.size();
	return amount;
}
