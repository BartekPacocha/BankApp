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
		system("pause");
		break;
	case 2:
		cout << "2. Deposit"  << endl;
		Deposit();
		system("pause");
		break;
	case 3:
		cout << "3. Withdraw" << endl;
		system("pause");
		break;
	case 4:
		cout << "4. Balcance" << endl;
		system("pause");
		break;
	case 5:
		cout << "5. Account list" << endl;
		ShowAllAccounts();
		system("pause");
		break;
	case 6:
		cout << "6. Close account" << endl;
		system("pause");
		break;
	case 7:
		cout << "7. Show account by number" << endl;
		ShowAccountByNr();
		system("pause");
		break;
	case 0:
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
	cout << "7. Show account by number" << endl;
	cout << "0. Exit" << endl;
	cout << "#################" << endl;
}

void Menu::Clear()
{
	system("cls");
}

void Menu::CreateAccount()
{
	int accountNumber;
	cout << "Create new account: " << endl;
	cout << "Account number: ";
	cin >> accountNumber;
	unique_ptr<Account> account(new Account(accountNumber));
	AddAccountToList(move(account));
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

void Menu::ShowAllAccounts()
{
	for (auto &account: accountList)
	{
		account->ShowAccount();
	}
}

void Menu::ShowAccountByNr()
{
	int number;
	cout << "Account number: ";
	cin >> number;

	auto isAnyAccount = false;

	for (auto &account : accountList)
	{
		if (account->GetAccountNumber() == number)
			account->ShowAccount();
		else
			cout << "Wrong account number!" << endl;

		isAnyAccount = true;
	}

	if (!isAnyAccount)
		cout << "There is 0 accounts!" << endl;
}

bool Menu::Deposit()
{
	// TODO: Deposit
	/* 
	1. Select account
	2. cin deposit
	3. deposit to account 
	*/
	cout << "Account number: ";
	int number;
	cin >> number;

	// select account
	for (auto &a : accountList)
	{
		if (a->GetAccountNumber() == number)
		{
			// cin deposit
			int deposit;
			cout << "Deposit amount: ";
			cin >> deposit;

			a->AddBalance(deposit);
			return true;
		}
	}

	cout << "Wrong number!" << endl;
	return false;
}
