/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:36:36 by anassif           #+#    #+#             */
/*   Updated: 2021/07/08 17:06:46 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(void)
{
	std::string s;

	std::cout << "enter command\n";
	std::cin >> s;
	if (s == "EXIT")
		std::cout << "program exited properly\n";return (0);
	
	return (0);
}