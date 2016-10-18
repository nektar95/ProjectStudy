#pragma once
#include "Employee.h"
class Programmer :
	public Employee
{
	double mMealPrice;

	public:
		Programmer(double price, std::string name) : Employee(name), mMealPrice(price) {}
		void presentYourself();
		inline double getMealPrice() { return mMealPrice; }
};

