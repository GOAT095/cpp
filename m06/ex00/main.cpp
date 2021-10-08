/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:44:13 by anassif           #+#    #+#             */
/*   Updated: 2021/10/08 15:07:50 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Convert convert(av[1]);
        std::cout << convert.getValue() << "\n";
        convert.print_it();
    }
    else 
    {
        std::cout << "Invalid Arguments";
    }
}