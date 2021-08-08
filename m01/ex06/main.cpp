/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:38:27 by anassif           #+#    #+#             */
/*   Updated: 2021/08/08 23:29:22 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen k;

	if (ac != 2)
	{
		std::cout << "one argument is needed ! \n";
		return 0;
	}
	std::string s = av[1];
	k.complain(av[1]);
	return 0;
}
