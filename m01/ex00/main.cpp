/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:21:48 by anassif           #+#    #+#             */
/*   Updated: 2021/07/14 20:06:58 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie *z;
    
    z = newZombie("baaaaaa3");
    z->announce();
    

    randomChump("euuuuuuuuuu3");
    
    delete(z);
    return 0;
}