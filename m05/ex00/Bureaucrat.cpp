/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:10:33 by anassif           #+#    #+#             */
/*   Updated: 2021/10/02 17:06:21 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    std::cout << "bureaucrat default constractor was called\n";
}
Bureaucrat::Bureaucrat(std::string newname, int newdgrade) : name(newname), grade(newdgrade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat type constractor was called\n";
}
Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
    std::cout << "Bureaucrat copy constractor was called\n";
}
Bureaucrat &Bureaucrat::operator = (const Bureaucrat& obj)
{
    std::cout << "Bureaucrat assignement constractor was called\n";
    this->name = obj.name;
    this->grade = obj.grade;
    return *this;
    
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat was slaughtered\n";
}

//getters && setters

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}
void Bureaucrat::setName(std::string newname)
{
    this->name = newname;
}
int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}
void Bureaucrat::setGrade(int newgrade)
{
    this->grade = newgrade;
}

//funciotns

// Bureaucrat::void gradeInc()
// {
//     if (this->grade == 1)
// }