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
        Form *P(std::string target);
        Form *S(std::string target);
        Form *R(std::string targetid);
        Form *wichform( std::string form, std::string target );
};

