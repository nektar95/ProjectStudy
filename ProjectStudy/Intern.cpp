#include "stdafx.h"
#include "Intern.h"

Intern::Intern(std::string name, double period) : Employee(name), mIntershipPeriod(period) {}

std::string Intern::presentYourself() {
	return "Stazysta: " + getName() + "\nOkres stazu: " + std::to_string(getIntershipPeriod());
}
