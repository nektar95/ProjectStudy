#pragma once
#include "Employee.h"
class Intern :
	public Employee
{
	double mMealPrice;
	int mIntershipPeriod;

	public:
		Intern(int price, std::string name, double period) : Employee(name), mMealPrice(price),mIntershipPeriod(period) {}
		void presentYourself();
		inline double getMealPrice() { return mMealPrice; }
		inline int getIntershipPeriod() { return mIntershipPeriod; }

};

