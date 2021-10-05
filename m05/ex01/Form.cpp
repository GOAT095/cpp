/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:49:56 by anassif           #+#    #+#             */
/*   Updated: 2021/10/05 23:27:59 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
    // std::cout << "Form default constractor was called\n";
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
    // std::cout << "Form copy constractor was called\n";
}
Form &Form::operator = (const Form& obj)
{
    // std::cout << "Form assignement constractor was called\n";
    this->name = obj.name;
    this->gradesigne = obj.gradesigne;
    this->gradeexec = obj.gradeexec;
    return *this;
    
}
Form::~Form()
{
    // std::cout << "Form was slaughtered\n";
}

//getters // setters

std::string Form::getName() const
{
    return (this->name);
}
void Form::setName(std::string newname)
{
    this->name = newname;
}

int Form::getSignGrade(void) const
{
    return (this->gradesigne);
}
void Form::setSignGrade(int newgrade)
{
    this->gradesigne = newgrade;
}

int Form::getExecGrade(void) const
{
    return (this->gradeexec);
}
void Form::setExecGrade(int newgrade)
{
    this->gradeexec = newgrade;
}

bool Form::getIsSigned(void) const
{
    return (this->is_signed);
}
void Form::setIsSigned(bool issigned)
{
    this->is_signed = issigned;
}

std::ostream &operator<<(std::ostream & o, Form const &obj)
{
    o << obj.getName() << ", signed ? : " << obj.getIsSigned() << " sign grade: " << obj.getSignGrade() <<".\n";;
    return o;
}

//new functions

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() < this->gradesigne)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}