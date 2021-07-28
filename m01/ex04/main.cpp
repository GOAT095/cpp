/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:46:01 by anassif           #+#    #+#             */
/*   Updated: 2021/07/28 14:31:24 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

bool is_empty(std::ifstream& pFile)
{
	return pFile.peek() == std::ifstream::traits_type::eof();
}

int main (int ac, char **av)
{
	if (ac != 4)
	{    
		std::cout << "you need 3 arguments\n";
		return 1;
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	// std::string filename = av[1];
	std::ifstream filename(av[3]);
	
	if (s1.empty() || s2.empty())
	{    
		std::cout << "arguments cannot be empty\n";
		return (1);
	}
	if (!filename.is_open())
	{    std::cout << "file could not be open\n";
		return (1);}
	if (is_empty(filename))
	{     std::cout << "file empty\n";
		return 1;
	}
	
}