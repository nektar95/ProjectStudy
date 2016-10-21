#include "stdafx.h"
#include "Employee.h"


Employee::Employee(std::string name) : Human(name) { canBorrow = false; };

bool Employee::checkLoan() {
	return canBorrow;
}

void Employee::presentYourself() {
	std::cout << "Employee: " << getName() << std::endl;
}
