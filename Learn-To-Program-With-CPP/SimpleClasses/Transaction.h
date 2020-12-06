#pragma once

#include <string>

class Transaction
{
public:
	Transaction(int amt, std::string kind);
	std::string Report();

private:
	int amount;
	std::string type;	// a better way exists
};
