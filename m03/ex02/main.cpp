/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:42 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 23:21:43 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    // ClapTrap clapdef;
    // ClapTrap clap("Hamza");
    // ClapTrap clap2("Hamza2");
    // clapdef = clap2;
    // clap.takeDamage(2);
    // clap.attack("Devza");
    // clap.beRepaired(5);
    // std::cout << "-----------\n";
    // ScavTrap scavdef;
    // ScavTrap scav("Hamza");
    // ScavTrap scav2("Hamza2");
    // scavdef = scav2;
    // scav.takeDamage(3);
    // scav.attack("Devza");
    // scav.beRepaired(7);
    // scav.guardGate();
    FragTrap frag("frag1");
    frag.highFivesGuys();
    frag.attack("frag2");
    frag.takeDamage(4);

    return 0;
}
