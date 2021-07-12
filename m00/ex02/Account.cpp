/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:38:49 by anassif           #+#    #+#             */
/*   Updated: 2021/07/12 23:33:16 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    Account::_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_totalNbDeposits++;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created\n";
}
Account::~Account(void)
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed\n";
}

// ************************************************************************** //
//                               methods                                //
// ************************************************************************** //

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "acounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    
}

void Account::makeDeposit(int deposit)
{
    
}

int Account::checkAmount(void) const
{
    return this->_amount;
}

void	Account::displayStatus( void ) const
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "diposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

void	_displayTimestamp( void )
{
    
}