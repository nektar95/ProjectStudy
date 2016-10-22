#include "stdafx.h"
#include "Programmer.h"

Programmer::Programmer(std::string name) : Employee(name) { canBorrow = true; }

std::string Programmer::presentYourself() {
	return "Programista: " + getName();
}
