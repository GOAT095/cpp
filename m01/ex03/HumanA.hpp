/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:49:39 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 19:06:31 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;
    
    public:
    HumanA();
    ~HumanA();
    
    std::string getType(void) const;
    void    setType(std::string type);
    void    attack();
    
};