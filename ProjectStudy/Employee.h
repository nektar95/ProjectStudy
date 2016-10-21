#pragma once
#include "Human.h"
class Employee :
	public Human
{
protected:
	bool canBorrow;
public:
	Employee(std::string name);
	void presentYourself();
	bool checkLoan();
};

