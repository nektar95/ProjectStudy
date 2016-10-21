#pragma once
#include "Employee.h"
class Intern :
	public Employee
{
	int mIntershipPeriod;

	public:
		Intern(std::string name, double period);
		void presentYourself();
		inline int getIntershipPeriod() { return mIntershipPeriod; }

};

