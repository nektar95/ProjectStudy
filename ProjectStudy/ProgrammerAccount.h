#pragma once
#include "Account.h"

class ProgrammerAccount : public Account
{
	double meal_price;
public:
	ProgrammerAccount(Employee emp, double in, double out, double bl) : Account(emp,in, out,bl) {};
};

