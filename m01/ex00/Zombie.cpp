/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:06:14 by anassif           #+#    #+#             */
/*   Updated: 2021/07/14 17:16:03 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << "zombie :" << this->_name << " boom" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->_name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
