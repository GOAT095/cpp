/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:46:01 by anassif           #+#    #+#             */
/*   Updated: 2021/07/28 15:13:32 by anassif          ###   ########.fr       */
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
	std::string fileinName= av[1];
	std::string fileoutName = fileinName + ".replace";
	std::ifstream filein(av[1]);
	
	if (s1.empty() || s2.empty())
	{    
		std::cout << "arguments cannot be empty\n";
		return (1);
	}
	if (!filein.is_open())
	{
		std::cout << "file could not be open\n";
		filein.close();
		return (1);
	
	}
	if (is_empty(filein))
	{
		std::cout << "file empty\n";
		filein.close();
		return 1;
	}
	std::ofstream fileout(fileoutName);
	std::string line;
	int len;
	std::size_t pos;
	while (std::getline(filein, line))
	{
		len = 0;
		while((pos=line.find(s1, len)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			len = pos + s2.length();
		}
		fileout << line << std::endl;
	}
	filein.close();
	fileout.close();
	return 0;
}