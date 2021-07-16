/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:11:14 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 19:05:29 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    
    public:
    HumanB();
    ~HumanB();
    
    std::string getType(void) const;
    void    setType(std::string type);
    void    attack();
    
};