/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:42 by anassif           #+#    #+#             */
/*   Updated: 2021/09/24 17:53:17 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clap("clap1");
    ScavTrap scav2("scav1");
    FragTrap frag("frrrag");
    DiamondTrap diamond1("test");
    diamond1.attack("test2");
    diamond1.whoAmI();
    return 0;
}
