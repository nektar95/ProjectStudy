#pragma once
#include "Employee.h"
class Intern :
	public Employee
{
	int mIntershipPeriod;

	public:
		Intern(std::string name, double period);
		std::string presentYourself();
		inline int getIntershipPeriod() { return mIntershipPeriod; }

};

