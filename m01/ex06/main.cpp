/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:38:27 by anassif           #+#    #+#             */
/*   Updated: 2021/09/01 20:13:39 by anassif          ###   ########.fr       */
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
	k.complain(av[1]);
	return 0;
}
