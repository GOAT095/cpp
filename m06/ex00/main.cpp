/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:44:13 by anassif           #+#    #+#             */
/*   Updated: 2021/10/10 15:45:07 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    try 
    {
        if (ac == 2)
        {
            Convert convert(av[1]);
            convert.print_it();
        }
        else 
        {
            std::cout << "Invalid Arguments";
        }
    }
   catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}