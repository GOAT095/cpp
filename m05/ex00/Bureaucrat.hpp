#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat{
    private:
        const std::string name;
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
        
};

std::ostream &operator<<(std::ostream & o, Bureaucrat const &rhs);