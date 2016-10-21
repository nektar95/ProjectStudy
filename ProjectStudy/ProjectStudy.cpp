// ProjectStudy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CashRegister.h"
#include "Programmer.h"
#include "Intern.h"

CashRegister<ProgrammerAccount> cash;
void newAccount();

int main()
{
	bool isRunning = true;

	while (isRunning) {
		int input;
		std::cout << "1. Dodaj konto"<<std::endl;
		std::cout << "2. Usun konto" << std::endl;
		std::cout << "3. Edytuj saldo konta" << std::endl;
		std::cout << "4. Wykonaj przelew miedzy kontami" << std::endl;
		std::cout << "5. Wyewietl stan kasy" << std::endl;
		std::cout << "6. Wyewietl salda wszystkich kont" << std::endl;
		std::cout << "7. Wyjdz z programu." << std::endl;

		std::cin >> input;

		switch (input) {
			case 1: {
				newAccount();
				break;
			}
			case 2: {
				cash.deleteAccount();
				break;
			}
			case 3: {
				cash.editAccount();
				break;
			}
			case 4: {
				for (int i = 0; i < cash.accountSize(); i++) {
					std::cout << i + 1 << ". " << *cash.checkBalance(i) << std::endl;
				}
				int i;
				std::cout << "Wybierz od kogo:\n";
				std::cin >> i;
				ProgrammerAccount* t1 = cash.checkBalance(i-1);
				std::cout << "Wybierz do kogo:\n";
				std::cin >> i;
				ProgrammerAccount* t2 = cash.checkBalance(i-1);
				
				if (t1->getOwner()->checkLoan() && t2->getOwner()->checkLoan()) {
					cash.transfer(t1,t2);
				}
				else {
					std::cout << "Nie ufaj stazystom..."<<std::endl;
				}
				break;
			}
			case 5: {
				std::cout << "Pieniadze w kasie: "<<cash.getBalance() << std::endl;
				break;
			}
			case 6: {
				for (int i = 0; i < cash.accountSize(); i++) {
					std::cout << i + 1 << ". " << *cash.checkBalance(i) << std::endl;
				}
				break;
			}
			case 7: {
				isRunning = false;
				continue;
			}
		}
	}

	return 0;
}

void newAccount() {
	bool isRunningNA = true;
	while (isRunningNA) {
		std::cout << "1. Programista" << std::endl;
		std::cout << "2. Stazysta" << std::endl;
		std::cout << "3. Biedna firma, nikogo nie zatrudnimy." << std::endl;
		int inputNA;
		std::cin >> inputNA;

		unsigned int period;
		double price, in, out;
		std::string name;

		switch (inputNA) {
			case 1:{
				std::cout << "Wprowadz imie programisty: ";
				std::cin >> name;
				std::cout << "Cena zamawianego posi³ku: ";
				std::cin >> price;
				std::cout << "Wplacona kwota: ";
				std::cin >> in;
				std::cout << "Reszta z kasy: ";
				std::cin >> out;
				Programmer* programmer = new Programmer(name);
				ProgrammerAccount* account = new ProgrammerAccount(programmer, in, out, price);
				cash.addAccount(account,in-out);
				break;
			}
			case 2:{
				std::cout << "Wprowadz imie programisty: ";
				std::cin >> name;
				std::cout << "Okres stazu: ";
				std::cin >> period;
				std::cout << "Cena zamawianego posi³ku: ";
				std::cin >> price;
				std::cout << "Wplacona kwota: ";
				std::cin >> in;
				std::cout << "Reszta z kasy: ";
				std::cin >> out;

				Intern* intern = new Intern(name,period);
				ProgrammerAccount* account = new ProgrammerAccount(intern, in, out,price);
				cash.addAccount(account, in - out);
				break;
			}
			default:
				isRunningNA = false;
				break;
		}
	}

}

