#include "stdafx.h"
#include "Account.h"

Account::Account(Employee* emp, double in, double out) :mOwner(emp), cash_in(in), cash_out(out) {
	mBalance = cash_out - cash_in;
};

Account::~Account() {
	delete mOwner;
}

double Account::getBalance(){
	return mBalance;
}

void Account::uploadBalance() {
	mBalance = cash_out - cash_in;
}

Employee* Account::getOwner() {
	return mOwner;
}

void Account::deposit(double value) {
	cash_in += value;
	cash_out -= value;
}

void Account::withdrawMoney(double value) {
	cash_in -= value;
	cash_out += value;
}

std::ostream& operator<< (std::ostream &out,  Account &account) {
	account.getOwner()->presentYourself();
	return out << "Balance: " << account.getBalance();
}

