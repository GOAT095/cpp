/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:33 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 15:29:52 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include <iomanip>

class ClapTrap
{
    private:
        std::string _Name
        int _Hitpoints
        int _Energy_points
        int _Attack_damage

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &obj);
        Fixed &operator = (ClapTrap const &test);
        ~ClapTrap();
        
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        std::string GetName(void) const;
}