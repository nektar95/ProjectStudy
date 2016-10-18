#include "stdafx.h"
#include "Account.h"


double Account::getBalance(){
	//bad practise
	this->uploadBalance();
	return mBalance;
}

void Account::uploadBalance() {
	mBalance = cash_in - cash_out;
}

Employee Account::getOwner() {
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

std::ostream& operator<< (std::ostream &out, const Account &account) {
	return out << "Balance: " << account.mBalance;
}

