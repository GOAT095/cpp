#pragma once

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "Bureaucrat.hpp"
class RobotomyRequestForm : public Form
{
    private:
        const std::string Target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};
