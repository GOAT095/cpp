#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Form{
    private:
        std::string  name;
        bool    is_signed;
        int gradesigne;
        int gradeexec;
    public:
        Form();
        Form(std::string newname, int gradesigne, int gradeexec);
        Form(const Form& obj);
        Form& operator = (const Form& obj);
        ~Form();
        
        
        
        class GradeTooHighException :public std::exception
        {
            const char * what () const throw () //so it doesnt throw
            {
                return "grade is too hight !\n";
            }
        };
        class GradeTooLowException :public std::exception
        {
            const char * what () const throw ()
            {
                return "grade is too low !\n";
            }
        };
}