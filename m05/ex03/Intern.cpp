/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 22:56:14 by anassif           #+#    #+#             */
/*   Updated: 2021/10/04 23:27:49 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(std::string formname, std::string terget)
{
    // if (!formname.compare("PresidentialPardonForm"))
    // {
    //     Form *f = new PresidentialPardonForm(target);
    //     std::cout << "Intern creates " << formname << "\n";
    //     return f;
    // }
    // if (!formname.compare("RobotomyRequestForm"))
    // {
    //     Form *f = new RobotomyRequestForm(target);
    //     std::cout << "Intern creates " << formname << "\n";
    //     return f;
    // }
    // if (!formname.compare("ShrubberyCreationForm"))
    // {
    //     Form *f = new ShrubberyCreationForm(target);
    //     std::cout << "Intern creates " << formname << "\n";
    //     return f;
    // }

    
    return ();
}

void intern::P(void)
{
    Form *f = new PresidentialPardonForm();
    return(f);
}

void intern::R(void)
{
    Form *f = new RobotomyRequestForm();
    return(f);
}

void intern::S(void)
{
    Form *f = new ShrubberyCreationForm();
    return(f);
}
void intern::Error(void)
{
    std::cout << "unknown Form Bruhhhhh \n";
    return(f);
}

void Karen::wichform( std::string form )
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