// ProjectStudy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CashRegister.h"
#include "Programmer.h"

int main()
{

	Programmer patol(20, "Patus");
	ProgrammerAccount patyk(patol, 100, 20, 100);
	CashRegister<ProgrammerAccount> cash;
	Account test(patol, 3, 4, 6);
	cash.addAccount(patyk);
	std::cout << cash.checkBalance();
	std::cout << test;
	int n;
	std::cin >> n;
	return 0;
}

