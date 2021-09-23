/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:42 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 23:22:52 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // ClapTrap clapdef;
    // ClapTrap clap("clap1");
    // ClapTrap clap2("clap2");
    // clapdef = clap2;
    // clap.takeDamage(2);
    // clap.attack("clap1");
    // clap.beRepaired(5);
    ScavTrap scavdef;
    ScavTrap scav("scav1");
    ScavTrap scav2("scav2");
    scavdef = scav2;
    scav.takeDamage(3);
    scav.attack("scav");
    scav.beRepaired(7);
    scav.guardGate();

    return 0;
}
