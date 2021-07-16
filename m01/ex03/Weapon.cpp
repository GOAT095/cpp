/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:06:48 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 18:52:52 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    
}

Weapon::~Weapon(void)
{
    std::cout << "weapon droppped\n";
}

std::string Weapon::getType(void) const
{
    return this->_type;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}