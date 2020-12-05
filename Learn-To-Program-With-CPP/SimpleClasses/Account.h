#pragma once

#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amount);
	bool Withdraw(int amount);
	int GetBalance() { return balance; };

private:
	int balance;
	std::vector<Transaction> log;
};
