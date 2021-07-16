/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:40:16 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 14:40:17 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie *z = zombieHorde(5, "iiiiiiii3");
    for (int i=0;i<5;i++)
    {
        z[i].announce();
    }
    delete [] z;
    return 0;
}