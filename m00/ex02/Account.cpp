/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:38:49 by anassif           #+#    #+#             */
/*   Updated: 2021/07/12 19:53:01 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_totalNbDeposits++;
    this->_nbWithdrawals = 0;
}
Account::~Account(void)
{
    
}

// ************************************************************************** //
//                               methods                                //
// ************************************************************************** //

bool Account::makeWithdrawal(int withdrawal)
{
    this->_nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    return (bool)this->_totalAmount;
}

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    this->_totalAmount += deposit;
}

int Account::checkAmount(void) const
{
    return this->_totalAmount;
}

void	Account::displayStatus( void ) const
{
    
}

int Account::getNbAccounts( void )
{
    return Account::_nbAccounts; 
}

void	Account::displayAccountsInfos( void )
{
    
}