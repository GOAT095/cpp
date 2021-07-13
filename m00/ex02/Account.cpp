/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:38:49 by anassif           #+#    #+#             */
/*   Updated: 2021/07/13 01:22:09 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
// ************************************************************************** //
//              all statics need to be initialed or they wont work            //
// ************************************************************************** //

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// ************************************************************************** //
//                               constractor                                  //
// ************************************************************************** //

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    Account::_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_totalNbDeposits++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created\n";
}
// ************************************************************************** //
//                               destractor                                   //
// ************************************************************************** //

Account::~Account(void)
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}
// ************************************************************************** //
//                               getters                                      //
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

// ************************************************************************** //
//                               methods                                      //
// ************************************************************************** //

void	Account::displayAccountsInfos( void )
{
    std::cout << "acounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout << "withdrawal:" << "refused" << std::endl;
        return false;
    }
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:" << this->_amount << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withrawals:" << this->_nbWithdrawals << ";" << std::endl;
    return true;
}

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    this->_amount += deposit;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
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

void	_displayTimestamp( void )
{
    
}