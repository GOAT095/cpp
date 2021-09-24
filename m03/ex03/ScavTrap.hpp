/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:03:10 by anassif           #+#    #+#             */
/*   Updated: 2021/09/24 17:40:37 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap& scavtrap);
        ScavTrap& operator = (const ScavTrap& scavtrap);
        ~ScavTrap();

        void    attack(std::string const & target);
        void    guardGate();
};