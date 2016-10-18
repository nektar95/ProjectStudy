#pragma once
#include "Human.h"
class Employee :
	public Human
{
public:
	Employee(std::string name) : Human(name) {};
	void presentYourself();
};

