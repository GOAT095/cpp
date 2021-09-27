/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:42 by anassif           #+#    #+#             */
/*   Updated: 2021/09/25 15:19:33 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clap("clap1");
    std::cout << "----------------\n";
    ScavTrap scav2("scav1");
    FragTrap frag("frrrag");
    std::cout << "----------------\n";
    DiamondTrap diamond1("test");
    std::cout << "----------------\n";
    diamond1.attack("test2");
    diamond1.whoAmI();
    return 0;
}
