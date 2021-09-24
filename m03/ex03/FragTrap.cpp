/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:57:23 by anassif           #+#    #+#             */
/*   Updated: 2021/09/24 12:59:55 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constractor called\n";
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Default FragTrap constractor called\n";
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& obj)
{
    std::cout << "FragTrap Copy constructor called\n";
    *this = obj;
}

FragTrap& FragTrap::operator = (const FragTrap& obj)
{
    std::cout << "FragTrap Assignation operator called\n";
        this->_Name = obj._Name;
        this->_Hitpoints = obj._Hitpoints;
        this->_Energy_points = obj._Energy_points;
        this->_Attack_damage = obj._Attack_damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_Name << " BOOOM\n";   
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "     _     _       _      __ _       \n";    
    std::cout << "| |   (_)     | |    / _(_)          \n";
    std::cout << "| |__  _  __ _| |__ | |_ ___   _____ \n";
    std::cout << "| '_ \\| |/ _` | '_ \\|  _| \\ \\ / / _ \\\n";
    std::cout << "| | | | | (_| | | | | | | |\\ V /  __/\n";
    std::cout << "|_| |_|_|\\__, |_| |_|_| |_| \\_/ \\___|\n";
    std::cout << "          __/ |                      \n";
    std::cout << "         |___/  \n";
}