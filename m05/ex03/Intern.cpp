/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:56:14 by anassif           #+#    #+#             */
/*   Updated: 2021/10/05 13:27:17 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern& obj){
    *this = obj;
}
Intern &Intern::operator = (const Intern& obj)
{
    (void)obj;
    return (*this);
}
Intern::~Intern(){}

Form *Intern::P(void)
{
    Form *f = new PresidentialPardonForm();
    return(f);
}

Form *Intern::R(void)
{
    Form *f = new RobotomyRequestForm();
    return(f);
}

Form *Intern::S(void)
{
    Form *f = new ShrubberyCreationForm();
    return(f);
}
Form *Intern::Error(void)
{
    std::cout << "Unknown Form Bruhhhhh \n";
    return(NULL);
}

Form *Intern::wichform( std::string form )
{
    std::string s[4]={
        "PresidentialPardonForm","RobotomyRequestForm","ShrubberyCreationForm","ERROR"
    };

    Form *(Intern::*f[4])(void) = {
        &Intern::P, &Intern::R, &Intern::S, &Intern::Error
    };
    for (int i=0; i<4;i++)
    {
        if(form == s[i])
            return((this->*f[i])());std::cout << "Intern creates " << form << "\n";
    }
    return (NULL);
}

Form *Intern::makeForm(std::string s1, std::string s2)
{
    (void)s2;
    return(wichform(s1));
}