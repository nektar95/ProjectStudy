#pragma once
#include"Employee.h"

class Account
{
protected:
	Employee* mOwner;
	double mBalance;
	double cash_in;
	double cash_out;
	void uploadBalance();
public:
	Account(Employee* emp, double in, double out);
	~Account();
	double getBalance();
	Employee* getOwner();
	void deposit(double value);
	void withdrawMoney(double value);

	friend std::ostream& operator<< (std::ostream &out,  Account &account);

	Account& operator+=(const double& a) {
		this->cash_out += a;
		this->uploadBalance();
		return *this;
	}
	Account& operator-=(const double& a) {
		this->cash_out -= a;
		this->uploadBalance();
		return *this;
	}

	bool operator<(const double& a) {
		if (this->mBalance < a) {
			return true;
		}
		return false;
	}
};

