/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:56:14 by anassif           #+#    #+#             */
/*   Updated: 2021/10/04 23:29:28 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


void Intern::P(void)
{
    Form *f = new PresidentialPardonForm();
    return(f);
}

void Intern::R(void)
{
    Form *f = new RobotomyRequestForm();
    return(f);
}

void Intern::S(void)
{
    Form *f = new ShrubberyCreationForm();
    return(f);
}
void Inter::Error(void)
{
    std::cout << "unknown Form Bruhhhhh \n";
    return(f);
}

void Intern::wichform( std::string form )
{
    std::string s[4]={
        "PresidentialPardonForm","RobotomyRequestForm","ShrubberyCreationForm","ERROR"
    };

    void (Karen::*f[4])(void) = {
        &Karen::p, &Karen::R, &Karen::S, &Karen::error
    };
    for (int i=0; i<4;i++)
    {
        if(form == s[i])
            (this->*f[i])();std::cout << "Intern creates " << form << "\n";
    }
}