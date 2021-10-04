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
        Intern();
        Intern(const Intern& obj);
        Intern& operator = (const Intern& obj);
        ~Intern();

        Form *makeForm(std::string s1, std::string s2);
        void P(void);
        void S(void);
        void R(void);
        void Error(void);
        void wichform( std::string form );
};

