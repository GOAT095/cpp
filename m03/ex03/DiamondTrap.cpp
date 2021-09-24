/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:11:33 by anassif           #+#    #+#             */
/*   Updated: 2021/09/24 21:19:57 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default DiamondTrap constractor called\n";
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap(std::string name): _Name(name)
{
    std::cout << "DiamondTrap name constructor called\n";
    ClapTrap::_Name = name + "_clap_name";
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
    *this = obj;
    std::cout << "DiamondTrap Copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
    std::cout << "DiamondTrap Assignation operator called\n";
    this->_Name = obj._Name;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_Name << " BOOOM\n";   
}

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name = " << this->_Name << " Clap name = " << ClapTrap::_Name << std::endl;
}