/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:03:44 by anassif           #+#    #+#             */
/*   Updated: 2021/07/18 21:46:46 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
    Weapon(std::string type);
    ~Weapon();

    const   std::string &getType(void) const;
    void    setType(std::string type);

};
