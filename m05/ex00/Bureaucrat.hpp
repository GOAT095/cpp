#once pragma

#include <iostream>
#include <iomapip>

class Bureaucrat{
    protected:
        std::string name;
        int   grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string type);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator = (const Bureaucrat& obj);
        ~Bureaucrat();
       

        std::string getName(void) const;
        int getGrade(void) const;

        void setGrade(int newgrade);
        void setName(std::string newname);

        class GradeTooHighException :public std::exeption
        {
            const char * what () const throw ()
            {
                return "grade is too hight !\n";
            }
        };
        class GradeTooLowException :public std::exeption
        {
            const char * what () const throw ()
            {
                return "grade is too low !\n";
            }
        };
        
};