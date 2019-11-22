#pragma once
#include "BaseClass.h"

#include <string>

using namespace std;

class Owner :
	public BaseClass
{
public:
	Owner();
	Owner(string);
	~Owner();

private:
	string Name;
};

