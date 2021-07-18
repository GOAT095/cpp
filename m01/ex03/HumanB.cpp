/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:51:43 by anassif           #+#    #+#             */
/*   Updated: 2021/07/18 21:42:54 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    // this->_weapon = Weapon;
}

HumanB::~HumanB(void)
{
    std::cout << "humanA dead\n";
}

void HumanB::attack()
{
    std::cout << this->_name  << " attacks with his " << this->weaponB->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weaponB)
{
    this->weaponB = &weaponB;
}