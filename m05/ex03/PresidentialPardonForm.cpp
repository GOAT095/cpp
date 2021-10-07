/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:17:48 by anassif           #+#    #+#             */
/*   Updated: 2021/10/07 14:34:30 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

// PresidentialPardonForm::PresidentialPardonForm()
// {
//     // std::cout << "PresidentialPardonForm Default constructor\n";
// }
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 72, 45), Target(target)
{
    // std::cout << this->getName() << " constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):Form("ShrubberyCreationForm", 145, 137)
{
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& obj)
{
    return *this;
    (void) obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << this->getName() << " slaughtered \n";
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->getIsSigned())
    {
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
        throw Form::notSignedException();
    }
    std::cout << this->Target << " has been pardoned by Zafod Beeblebrox\n";
}