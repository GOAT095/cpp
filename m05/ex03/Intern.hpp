#pragma once

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    private:

    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator = (const Intern& obj);
        ~Intern();

        Form *makeForm(std::string s1, std::string s2);
        Form *P(void);
        Form *S(void);
        Form *R(void);
        Form *wichform( std::string form );
};

