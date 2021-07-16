/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:51:09 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 19:06:34 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{

}

HumanA::~HumanA(void)
{
    std::cout << "humanA dead\n";
}

HumanA::attack()
{
    std::cout << this->_name  << " attacks with his " << this->_weapon.getType();
}