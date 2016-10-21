#include "stdafx.h"
#include "Intern.h"

Intern::Intern(std::string name, double period) : Employee(name), mIntershipPeriod(period) {}

void Intern::presentYourself() {
	std::cout << "Intern: " << getName() << std::endl;
}
