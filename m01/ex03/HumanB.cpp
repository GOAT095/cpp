/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:51:43 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 19:04:55 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

humanB::humanB(void)
{
    
}

humanB::~humanB(void)
{
    std::cout << "humanB dead\n";
}

HumanB::attack()
{
    std::cout << this->_name  << " attacks with his " << this->_weapon->getType();
}