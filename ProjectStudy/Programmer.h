#pragma once
#include "Employee.h"
class Programmer :
	public Employee
{
	public:
		Programmer(std::string name);
		std::string presentYourself();
};

