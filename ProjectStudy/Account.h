#pragma once
#include"Employee.h"

class Account
{
	Employee mOwner;
	double mBalance;
	double cash_in;
	double cash_out;
	void uploadBalance();
public:
	Account(Employee emp, double in, double out, double bl) :mOwner(emp), mBalance(bl), cash_in(in), cash_out(out) {};
	double getBalance();
	Employee getOwner();
	void deposit(double value);
	void withdrawMoney(double value);

	friend std::ostream& operator<< (std::ostream &out, const Account &account);

	Account operator+=(const double& a) {
		this->mBalance += a;
		return *this;
	}
	Account operator-=(const double& a) {
		this->mBalance -= a;
		return *this;
	}
};

