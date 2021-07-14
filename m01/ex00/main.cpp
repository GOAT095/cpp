/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:21:48 by anassif           #+#    #+#             */
/*   Updated: 2021/07/14 17:42:39 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie *z;
    Zombie c("yaaaaaa3");
    
    c.announce();
    
    z = newZombie("baaaaaa3");
    z->announce();
    delete(z);

    randomChump("euuuuuuuuuu3");
    
    
    
    return 0;
}