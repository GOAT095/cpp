/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:36:36 by anassif           #+#    #+#             */
/*   Updated: 2021/07/08 23:45:06 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

void    Contact::set_first_name(const std::string first_name)
{
	this->first_name = first_name;
}

Contact::~Contact()
{
	// std::cout << "i m done" << std::endl;
}
int main(void)
{
	std::string s;
	Contact c[8];
	
	Contact *con = new Contact();
	delete con;
	c[0].set_index(4);
	c[0].set_first_name("hakim");

	std::cout << c[0].get_first_name() << std::endl;
	std::cout << c[1].get_index() << std::endl;
	std::cout << "enter command\n";
	std::cin >> s;
	if (s == "EXIT")
		std::cout << "program exited properly\n";return (0);
	return (0);
}