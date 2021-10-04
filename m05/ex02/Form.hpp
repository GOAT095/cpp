#pragma once

#include <iostream>
#include <stdexcept>
// #include "Bureaucrat.hpp"
class Bureaucrat;

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
        virtual ~Form();
        
        virtual void execute(Bureaucrat const &executor) const = 0;
        std::string getName() const;
        void setName(std::string newname);

        int getSignGrade(void) const;
        void setSignGrade(int newgrade);

        int getExecGrade(void) const;
        void setExecGrade(int newgrade);

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