/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:34:19 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/08 18:57:36 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.class.hpp"

static void	show_date() {
	time_t		time = std::time(nullptr);
	tm			*ltm = std::localtime(&time);

	std::cout << '[';
	std::cout.fill('0');
	std::cout << ltm->tm_year + 1900;
	std::cout << std::setw(2) << ltm->tm_mon+1;
	std::cout << std::setw(2) << ltm->tm_mday << '_';
	std::cout << std::setw(2) << ltm->tm_hour;
	std::cout << std::setw(2) << ltm->tm_min;
	std::cout << std::setw(2) << ltm->tm_sec;
	std::cout << "] ";
	std::cout.fill(' ');
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int i_d ) : _nbCheckAmount(0), _amount(i_d), _nbDeposits(0), _nbWithdrawals(0) {

	show_date();
	std::cout << "index:" << Account::_nbAccounts;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += i_d;
	std::cout << ";amount:" << checkAmount() << ";created" << std::endl;
	return;
}

Account::~Account( void ) {
	show_date();
	Account::_nbAccounts -= 1;
	std::cout << "index:" << Account::_nbAccounts;
	std::cout << ";amount:" << checkAmount() << ";closed" << std::endl;
	return;
}

void	Account::displayAccountsInfos( void ) {
	
	show_date();
	std::cout << "accounts:" << Account::_nbAccounts << ';';
	std::cout << "total:" << Account::_totalAmount << ';';
	std::cout << "deposits:" << Account::_totalNbDeposits << ';';
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	show_date();
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "p_amount:" << checkAmount() << ';';
	this->_amount += deposit;
	std::cout << "deposits:" << deposit << ';';
	std::cout << "amount:" << checkAmount() << ';';
	this->_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	show_date();
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "p_amount:" << checkAmount() << ";withdrawal:";
	if (checkAmount() < withdrawal) {
		std::cout << "refused\n";
		return false;
	}
	std::cout << withdrawal << ';';
	this->_nbWithdrawals += 1;
	this->_amount -= withdrawal;
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "nb_withdrawalss:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	return true;
}

void	Account::displayStatus( void ) const {
	
	show_date();
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << checkAmount() << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const {
	_nbCheckAmount++;
	return this->_amount;
}
