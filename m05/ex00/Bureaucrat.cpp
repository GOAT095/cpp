/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:10:33 by anassif           #+#    #+#             */
/*   Updated: 2021/10/02 16:12:12 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"


bureaucrat::bureaucrat()
{
    std::cout << "bureaucrat default constractor was called\n";
}
bureaucrat::bureaucrat(std::string type)
{
    this->type = type;
    std::cout << "bureaucrat type constractor was called\n";
}
bureaucrat::bureaucrat(const bureaucrat& obj)
{
    *this = obj;
    std::cout << "bureaucrat copy constractor was called\n";
}
bureaucrat &bureaucrat::operator = (const bureaucrat& obj)
{
    this->type = obj.type;
    return *this;
    std::cout << "bureaucrat assignement constractor was called\n";
}
bureaucrat::~bureaucrat()
{
    std::cout << "bureaucrat was slaughtered\n";
}

//getters && setters

std::string getName(void) const
{
    return (this->name);
}
void setName(int newname)
{
    this->name = newname;
}
int getGrade(void) const
{
    return (this->grade);
}
void setGrade(int newgrade)
{
    this->grade = newgrade;
}

//funciotns

