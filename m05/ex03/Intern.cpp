/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:56:14 by anassif           #+#    #+#             */
/*   Updated: 2021/10/06 13:05:42 by anassif          ###   ########.fr       */
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

Form *Intern::P(std::string target)
{
    Form *f = new PresidentialPardonForm(target);
    return(f);
}

Form *Intern::R(std::string target)
{
    Form *f = new RobotomyRequestForm(target);
    return(f);
}

Form *Intern::S(std::string target)
{
    Form *f = new ShrubberyCreationForm(target);
    return(f);
}

Form *Intern::wichform( std::string form , std::string target)
{
    std::string s[3]={
        "presidential request","robotomy request","shrubbery request"
    };

    Form *(Intern::*f[3])(std::string target) = {
        &Intern::P, &Intern::R, &Intern::S
    };
    for (int i=0; i < 3;i++)
    {
        if(form == s[i])
        {
            std::cout << "Intern creates " << form << "\n";
            return((this->*f[i])(target));
        }  
    }
    std::cout << "Unknown Form Bruuuuuuuh\n";
    return (NULL);
}

Form *Intern::makeForm(std::string s1, std::string target)
{
    return(wichform(s1, target));
}