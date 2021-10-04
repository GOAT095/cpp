#pragma once
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat{
    protected:
        std::string name;
        int   grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string newname, int newdgrade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator = (const Bureaucrat& obj);
        ~Bureaucrat();

        std::string getName(void) const;
        int getGrade(void) const;

        void setGrade(int newgrade);
        void setName(std::string newname);

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
        void gradeInc();
        void gradeDec();
        void signForm(Form f);
        
};

std::ostream &operator<<(std::ostream & o, Bureaucrat const &rhs);