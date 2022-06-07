#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
				_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount = this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<  ";";
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	Account::_totalAmount = this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<  ";";
	std::cout << "amount:" << this->_totalAmount << ";"; //Need to update amount
	std::cout << "closed" << std::endl;

}

int		Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "witdhrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return (true);
}

int		Account::checkAmount() const
{
	return (0);
}

void	Account::displayStatus() const
{
}

void	Account::_displayTimestamp()
{
	auto	t = std::time(nullptr);
	auto	tm = *std::localtime(&t);

	std::ostringstream	oss;
	oss << std::put_time(&tm, "%Y%m%d_%H%M%S");
	auto	str = oss.str();

	std::cout << "[" << str << "] ";
}
