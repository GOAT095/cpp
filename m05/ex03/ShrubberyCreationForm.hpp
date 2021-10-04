#pragma once

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "Bureaucrat.hpp"
class ShrubberyCreationForm : public Form
{
    private:
        const std::string Target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};


// std::ostream &operator<<(std::ostream & o, ShrubberyCreationForm const &obj);