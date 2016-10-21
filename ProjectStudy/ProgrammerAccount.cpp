#include "stdafx.h"
#include "ProgrammerAccount.h"

ProgrammerAccount::ProgrammerAccount(Employee* emp, double in, double out, double price) : Account(emp, in, out) {
	mMealPrice = price;
	mBalance = cash_out - (cash_in - mMealPrice);
	
};

void ProgrammerAccount::uploadBalance(){
	mBalance = cash_out-(cash_in - mMealPrice);
}

std::ostream& operator<< (std::ostream &out, ProgrammerAccount &account) {
	account.getOwner()->presentYourself();
	return out << "Balance: " << account.getBalance() << "\n" << "Meal price: " << account.mMealPrice;
}
