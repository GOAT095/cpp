/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:03:38 by anassif           #+#    #+#             */
/*   Updated: 2021/08/08 23:28:17 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    
}

Karen::~Karen()
{
	
}

void    Karen::debug(void)
{
    std::cout << "[ DEBUG ]\n" << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void    Karen::info(void)
{
    std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void    Karen::warning(void)
{
    std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void    Karen::error(void)
{
    std::cout << "[ ERROR ]\n" << "This is unacceptable, I want to speak to the manager now.\n";
}

void    Karen::insignificant(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}

int		get_Level(std::string level)
{
	std::string s[4]={
        "DEBUG","INFO","WARNING","ERROR",
    };
	int	i;
	for (i = 0; i < 4; i++) {
		if (s[i] == level) {
			return (i);
		}
	}
	return (i);
}

void Karen::complain( std::string level )
{
    void (Karen::*f[5])(void) = {
        &Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::insignificant
    };
    int i = get_Level(level);
    switch (i) {
		case 0:
			(this->*(f[0]))();
		case 1:
			(this->*(f[1]))();
		case 2:
			(this->*(f[2]))();
		case 3:
			(this->*(f[3]))();
            break ;
		default:
			(this->*(f[4]))();
			break ;
	}
}