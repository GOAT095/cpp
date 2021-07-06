/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 00:16:58 by anassif           #+#    #+#             */
/*   Updated: 2021/07/07 00:38:39 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i=1,j=0;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            std::cout << (char)toupper(av[i][j]);
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << "\n";
    return (0);
}
