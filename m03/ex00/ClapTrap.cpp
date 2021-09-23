/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:37 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 15:59:10 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "name constructor called\n";
    this->_Name = name;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    *this = obj;
    std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Assignation operator called\n";
    this->_Name = obj.GetName();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap" << this->_Name << "BOOOM\n";   
}

void ClapTrap::GetName(void) const
{
    return this->_Name;
}

//functions

void attack(std::string const & target)
{
    std::cout << "ClapTrap" << this.GetName() << "attack" << target.GetName() << ", causing" << this->_Attack_damage << "points of damage !\n";
}

void takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap" << this->GetName() << "has taken" << amount << "of damage !\n";
}
• void beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap" << this->GetName() << "was repaired for" << amount << "of Energy points!\n";
}