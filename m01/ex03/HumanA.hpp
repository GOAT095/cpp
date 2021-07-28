/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:49:39 by anassif           #+#    #+#             */
/*   Updated: 2021/07/26 18:30:12 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &weaponA;
    
    public:
    HumanA(std::string name, Weapon &Weapon);
    ~HumanA();

    void    attack();
};