#pragma once
#include "ProgrammerAccount.h"
#include <vector>

template <class T>
class CashRegister{
	std::vector<T> mListOfAccounts;
	double mBalance;
	void saveBalance() {
		//save into file
	}
public:

	void addAccount(T t) {
		mListOfAccounts.push_back(t);
	}

	void deleteAccount(T* t) {
		mListOfAccounts.remove(t);
	}

	

	T checkBalance() {
		return mListOfAccounts.at(0);
	}

	void Transfer(T* t1, T* t2,double value) {
		*t1 -= value;
		*t2 += value;
	}

	CashRegister()
	{
		//check if file exist or create completly new cash
	}

	~CashRegister()
	{
		//destroy accounts and save?
	}
};

