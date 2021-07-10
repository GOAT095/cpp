/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:36:36 by anassif           #+#    #+#             */
/*   Updated: 2021/07/09 22:44:33 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

const std::string Contact::get_first_name(void)
{
	return this->first_name;
}
void    Contact::set_first_name(const std::string first_name)
{
	this->first_name = first_name;
}

const std::string Contact::get_last_name(void)
{
	return this->last_name;
}
void    Contact::set_last_name(const std::string last_name)
{
	this->last_name = last_name;
}

const std::string Contact::get_nickname(void)
{
	return this->nickname;
}
void    Contact::set_nickname(const std::string nickname)
{
	this->nickname = nickname;
}

const std::string Contact::get_phone_number(void)
{
	return this->phone_number;
}
void    Contact::set_phone_number(const std::string phone_number)
{
	this->phone_number = phone_number;
}

const std::string Contact::get_darkest(void)
{
	return this->darkest;
}
void    Contact::set_darkest(const std::string darkest)
{
	this->darkest = darkest;
}

void PrintContactInfo(Contact c)
{

	std::cout << "first name :" << c.get_first_name() << "\n";

	
	std::cout << "last name :" << c.get_last_name() << "\n";
	
	
	std::cout << "nickname :" << c.get_nickname() << "\n";

	
	std::cout << "phone number :" << c.get_phone_number() << "\n";


	std::cout << "darkest secret :" << c.get_darkest() << std::endl;
}

int main(void)
{
	
	Contact c[8];
	int i = 0;
	int j = 0;
	int k = 0;
	int index;

	while (1)
	{
		std::string s;
		std::cout << "enter command\n";
		std::cin >> s;
		if (s == "EXIT")
		{
			std::cout << "program exited properly\n";return (0);
		}
		else if (s == "ADD")
		{
			std::getline(std::cin, s);
			std::cout << "enter first name\n";
			std::getline(std::cin, s);
			c[i].set_first_name(s);

			std::cout << "enter last name\n";
			std::getline(std::cin, s);
			c[i].set_last_name(s);

			std::cout << "enter the nickname\n";
			std::getline(std::cin, s);
			c[i].set_nickname(s);

			std::cout << "enter the phone number\n";
			std::getline(std::cin, s);
			c[i].set_phone_number(s);

			std::cout << "enter darkest secret\n";
			std::getline(std::cin, s); 
			c[i].set_darkest(s);
			
			if (i == 7)
			{
				i = 0;
			}
			else
				i++;
			if (k < 8){k++;}
		}
		else if (s == "SEARCH")
		{
			while (j < k)
			{
				
				std::cout << j + 1 << " | ";
				std::string str (c[j].get_first_name());
				if (str.length() > 10){std::cout << str.substr(0,9) + "." << " | ";}
				else{std::cout << c[j].get_first_name() << " | ";}

				std::string str1 (c[j].get_last_name());
				if (str1.length() > 10){std::cout << str1.substr(0,9) + "." << " | ";}
				else{std::cout << c[j].get_last_name() << " | ";}
				
				std::string str2 (c[j].get_nickname());
				if (str2.length() > 10){std::cout << str2.substr(0,9) + "." << " | ";}
				else{std::cout << c[j].get_nickname() << " | ";}

				std::string str3 (c[j].get_phone_number());
				if (str3.length() > 10){std::cout << str3.substr(0,9) + "." << " | ";}
				else{std::cout << c[j].get_phone_number() << " | ";}

				std::string str4 (c[j].get_darkest());
				if (str4.length() > 10){std::cout << str4.substr(0,9) + "." << std::endl;}
				else{std::cout << c[j].get_darkest() << std::endl;}
				j++;
			}
			std::cout << "enter the desired index\n";
			std::cin >> index;
			if (std::cin.good())
			{
				if (index < 1 || index > k)
				{	std::cout << "bad index \n";}
				else
				{PrintContactInfo(c[index - 1]);}
			}
			else
			{
				std::cout << "bad index\n";
			}
			j = 0;
		}
	}
	return (0);
}