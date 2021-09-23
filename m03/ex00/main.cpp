/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:59:42 by anassif           #+#    #+#             */
/*   Updated: 2021/09/23 16:13:48 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapdef;
    ClapTrap clap("clap1");
    ClapTrap clap2("clap2");
    clapdef = clap2;
    clap.takeDamage(2);
    clap.attack("clap1");
    clap.beRepaired(5);
    return 0;
}
