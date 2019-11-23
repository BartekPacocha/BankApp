#pragma once
#include "BaseClass.h"
#include "Owner.h"

class Account :
	public BaseClass
{
public:
	Account();
	Account(int);
	~Account();
	// Owner AccountOwner; // TODO: Create owner class
	void SetAccountNumber(int number) { accountNumber = number; }
	int GetAccountNumber() { return accountNumber;  }
private:
	int accountNumber;
};

