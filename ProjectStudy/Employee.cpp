#include "stdafx.h"
#include "Employee.h"


Employee::Employee(std::string name) : Human(name) { canBorrow = false; };

bool Employee::checkLoan() {
	return canBorrow;
}

std::string Employee::presentYourself() {
	return "Pracownik: " + getName();
}
