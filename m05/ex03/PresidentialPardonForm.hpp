#pragma once

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    private:
        const std::string Target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator = (const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};