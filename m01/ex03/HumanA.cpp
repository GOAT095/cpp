/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:51:09 by anassif           #+#    #+#             */
/*   Updated: 2021/07/26 20:47:02 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : weaponA(Weapon)
{
    this->_name = name;
    // this->weaponA = Weapon;
}

HumanA::~HumanA(void)
{
    std::cout << "humanA dead\n";
}

void HumanA::attack()
{
    std::cout << this->_name  << " attacks with his " << this->weaponA.getType() << std::endl;
}