/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:49:56 by anassif           #+#    #+#             */
/*   Updated: 2021/10/03 17:20:25 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    std::cout << "Form default constractor was called\n";
}
Form::Form(std::string newname, int gradesigne, int gradeexec) : name(newname), gradesigne(gradesigne), gradeexec(gradeexec) 
{
    this->is_signed = false;
    if (gradesigne < 1)
        throw Form::GradeTooHighException();
    if (gradesigne > 150)
        throw Form::GradeTooLowException();
    if (gradeexec < 1)
        throw Form::GradeTooHighException();
    if (gradeexec > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form type constractor was called\n";
}
Form::Form(const Form& obj)
{
    *this = obj;
    std::cout << "Form copy constractor was called\n";
}
Form &Form::operator = (const Form& obj)
{
    std::cout << "Form assignement constractor was called\n";
    this->name = obj.name;
    this->grade = obj.grade;
    return *this;
    
}
Form::~Form()
{
    std::cout << "Form was slaughtered\n";
}
