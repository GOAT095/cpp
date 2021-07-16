/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:40:24 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 14:40:28 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "zombie :" << this->_name << " boom" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->_name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name)
{
    this->_name = name;
}