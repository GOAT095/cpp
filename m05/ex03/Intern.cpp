/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:56:14 by anassif           #+#    #+#             */
/*   Updated: 2021/10/05 12:54:49 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
 Intern::Intern(){}
 Intern::Intern(const Intern& obj){}
Intern::Intern& operator = (const Intern& obj){}
Intern::~Intern(){}

Form *Intern::P(void)
{
    Form *f = new PresidentialPardonForm();
    return(*f);
}

Form *Intern::R(void)
{
    Form *f = new RobotomyRequestForm();
    return(*f);
}

Form *Intern::S(void)
{
    Form *f = new ShrubberyCreationForm();
    return(*f);
}
Form *Inter::Error(void)
{
    std::cout << "unknown Form Bruhhhhh \n";
    return(NULL);
}

void Intern::wichform( std::string form )
{
    std::string s[4]={
        "PresidentialPardonForm","RobotomyRequestForm","ShrubberyCreationForm","ERROR"
    };

    void (Intern::*f[4])(void) = {
        &Intern::p, &Intern::R, &Intern::S, &Intern::error
    };
    for (int i=0; i<4;i++)
    {
        if(form == s[i])
            (this->*f[i])();std::cout << "Intern creates " << form << "\n";
    }
}