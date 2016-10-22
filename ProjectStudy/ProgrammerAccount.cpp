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
	return out << 
		account.getOwner()->presentYourself() << "\nBilans: " << account.getBalance() <<
		"\nCena: " << account.mMealPrice <<
		"\nWplata: " << account.cash_in <<
		"\nReszta: " << account.cash_out;
}



