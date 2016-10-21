#pragma once
#include "ProgrammerAccount.h"
#include <vector>

template <class T>
class CashRegister{
	std::vector<T*> mListOfAccounts;
	T* currentAccount;
	double mBalance;
	void saveBalance() {
		//save into file
	}
public:
	double getBalance() {
		return mBalance;
	}
	void setCurrent(int i) {
		try {
			currentAccount = mListOfAccounts.at(i);
		}
		catch(const std::out_of_range& e){
			std::cout << "Nie ma takiego konta\n";
		}
	}

	int chooseAccount() {
		if (mListOfAccounts.size() == 0) {
			return 0;
		}
		for (int i = 0; i < cash.accountSize(); i++) {
			std::cout <<i+1<<". "<< *cash.checkBalance(i) << std::endl;
		}
		int n;
		std::cin >> n;
		setCurrent(n-1);
		return n-1;
	}

	void editAccount() {
		chooseAccount();
		double value;
		std::cout<<"Reszt z kasy: ";
		std::cin >> value;

		if (mBalance > value) {
			mBalance -= value;
			*currentAccount += value;
		}
		else{
			std::cout << "Nie ma takich pieniedzy w kasie!\n";
		}
	}

	void transfer(T* t1, T* t2){
		double value;
		std::cout << "Kwota przelewu dlugu:";
		std::cin >> value;
		if (mBalance > value) {
			*t1 -= value;
			*t2 += value;
			saveBalance();
		}
		else {
			std::cout << "Nie ma takich pieniedzy w kasie!\n";
		}
	}

	void addAccount(T* t,double cash) {
		mBalance += cash;
		mListOfAccounts.push_back(t);
		
		saveBalance();
	}

	void deleteAccount() {
		int n=chooseAccount();
		if (mListOfAccounts.size() < n || n<0) {
			return;
		}
		deleteAccount(n);
	}

	void deleteAccount(int n){
		setCurrent(n);
		if (*currentAccount < 0) {
			std::cout << "Konto ma ujemne saldo!" << std::endl;
		}
		else {
			mListOfAccounts.erase(mListOfAccounts.begin() + n);
			saveBalance();
		}
	}

	int accountSize() {
		return mListOfAccounts.size();
	}

	T* checkBalance(int i) {
		return mListOfAccounts.at(i);
	}

	CashRegister()
	{
		//check if file exist or create completly new cash
	}

	~CashRegister()
	{
		//destroy accounts and save?
		for (int i = 0; i < cash.accountSize(); i++) {
			delete mListOfAccounts.at(i);
		}
		mListOfAccounts.clear();
	}
};

