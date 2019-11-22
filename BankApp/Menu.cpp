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
		break;
	case 2:
		cout << "2. Deposit"  << endl;
		break;
	case 3:
		cout << "3. Withdraw" << endl;
		break;
	case 4:
		cout << "4. Balcance" << endl;
		break;
	case 5:
		cout << "5. Account list" << endl;
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
