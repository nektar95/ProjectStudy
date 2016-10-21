#include "stdafx.h"
#include "Programmer.h"

Programmer::Programmer(std::string name) : Employee(name) { canBorrow = true; }

void Programmer::presentYourself() {
	std::cout << "Programmer: " << getName()<< std::endl;
}
