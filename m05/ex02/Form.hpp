#pragma once

#include <iostream>
#include <stdexcept>
// #include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class Form{
     private:
        const std::string  name;
        bool    is_signed;
        const int gradesigne;
        const int gradeexec;
        Form();
    public:
        Form(std::string newname, int gradesigne, int gradeexec);
        Form(const Form& obj);
        Form& operator = (const Form& obj);
        virtual ~Form();
        
        virtual void execute(Bureaucrat const &executor) const = 0;
        std::string getName() const;

        int getSignGrade(void) const;
        int getExecGrade(void) const;

        bool getIsSigned(void) const;
        void setIsSigned(bool newgrade);


        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class   notSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
        void beSigned(Bureaucrat b);
};

std::ostream &operator<<(std::ostream & o, Form const &obj);