/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:37 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 16:28:25 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
}
ClapTrap::ClapTrap(std::string name): _Name(name)
{
    std::cout << "name constructor called\n";
    this->_Hitpoints = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 10;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    *this = obj;
    std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Assignation operator called\n";
    this->_Name = obj._Name;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap" << this->_Name << "BOOOM\n";   
}

// std::string ClapTrap::GetName(void) const
// {
//     return this->_Name;
// }

//functions

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap" << this->_Name << "attack  " << target << ", causing" << this->_Attack_damage << " points of damage !\n";
    // target._Hitpoints--;
    // this->_Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap" << this->_Name << "has taken " << amount << " of damage !\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap" << this->_Name << "was repaired for " << amount << " of Energy points!\n";
}