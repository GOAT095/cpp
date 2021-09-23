/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:02:33 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 19:42:09 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constructor called\n";
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Default ScavTrap constractor called\n";
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
    *this = obj;
    std::cout << "Copy scav constructor called\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout << "Assignation scav operator called\n";
    this->_Name = obj._Name;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_Name << " BOOOM\n";   
}

void    ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap"<< this->_Name <<" gardien mode activated\n";
}
