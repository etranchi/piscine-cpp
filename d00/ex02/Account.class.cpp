/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:28:04 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/07 16:28:06 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ressources/Account.class.hpp"


Account::Account(int initial_deposit) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts = this->_accountIndex + 1;
	this->_nbDeposits = 0;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;

}

Account::~Account(void) {
	Account::_nbAccounts -= 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->_amount > withdrawal) {
		int p_amount = this->_amount;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true ;
	}
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;

	return false;
};

int		Account::checkAmount( void ) const {
	return this->_amount;
};

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"<<  Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
};

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
};

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
};

int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
};

void Account::_displayTimestamp( void ){
	std::cout << "[20150406_153629] ";
};

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0 ;
int	Account::_totalNbWithdrawals = 0;


