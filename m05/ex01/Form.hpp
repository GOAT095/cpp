#pragma once

#include <iostream>
#include <stdexcept>
// #include "Bureaucrat.hpp"
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
        ~Form();
        
        
        std::string getName() const;
        void setName(std::string newname);

        int getSignGrade(void) const;
        void setSignGrade(int newgrade);

        int getExecGrade(void) const;
        void setExecGrade(int newgrade);

        bool getIsSigned(void) const;
        void setIsSigned(bool newgrade);


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
        
        void beSigned(Bureaucrat b);
};

std::ostream &operator<<(std::ostream & o, Form const &obj);