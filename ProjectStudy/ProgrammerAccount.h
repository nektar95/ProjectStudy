#pragma once
#include "Account.h"

class ProgrammerAccount : public Account
{
	double mMealPrice;
	void uploadBalance();
public:
	ProgrammerAccount(Employee* emp, double in, double out, double price);
	inline double getMealPrice() { return mMealPrice; }
	friend std::ostream& operator<< (std::ostream &out, ProgrammerAccount &account);

	ProgrammerAccount& operator+=(const double& a) {
		this->cash_out += a;
		this->uploadBalance();
		return *this;
	}
	ProgrammerAccount& operator-=(const double& a) {
		this->cash_out -= a;
		this->uploadBalance();
		return *this;
	}
};

