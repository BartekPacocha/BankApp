#pragma once
#include "BaseClass.h"
#include "Owner.h"

class Account :
	public BaseClass
{
public:
	Account();
	~Account();
	Owner AccountOwner;
};

