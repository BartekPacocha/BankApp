#include "pch.h"
#include "Account.h"


Account::Account()
{
}

Account::Account(int number) : accountNumber(number), balance(0)
{
}


Account::~Account()
{
}

void Account::ShowAccount()
{
	std::cout << "-------------------------" << std::endl;
	std::cout << "Account number: " << this->GetAccountNumber() << std::endl;
	std::cout << "Account balance: " << this->GetBalacnce() << std::endl;
	std::cout << "-------------------------" << std::endl;
}

void Account::AddBalance(int deposit)
{
	this->balance += deposit;
}
