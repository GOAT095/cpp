/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:03:44 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 19:03:49 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
    Weapon();
    ~Weapon();

    std::string getType(void) const;
    void    setType(std::string type);

};
