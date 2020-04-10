#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

void printBankInfo();

int main()
{

	Bank::printBankInfo();

	cout << "Adam created an account and deposited 500";
	Bank Adam("Adam", 0001, 500);
	Bank Sarah;

	cout << endl << "Sarah created an account and deposited 1000";
	Sarah.setName("Sarah");
	Sarah.setAccountNumber(0002);
	Sarah.setBalance(1000);

	Bank::printBankInfo();

	cout << endl << "Dick created an account and deposited 1500";
	Bank Dick("Dick", 0003, 1500);

	Bank::printBankInfo();

	cout << endl << "Dick sets his balance to 1200";
	Dick.setBalance(1200);

	Bank::printBankInfo();

	cout << endl << "Sarah deposited 700";
	Sarah.deposit(700);

	Bank::printBankInfo();

	cout << "Adam's acccount was terminated due to lack of use.";
	Adam.~Bank();

	Bank::printBankInfo();

	return 0;
}

void printBankInfo()
{

}