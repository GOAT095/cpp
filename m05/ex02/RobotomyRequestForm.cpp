#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm()
// {
//     // std::cout << "RobotomyRequestForm Default constructor\n";
// }
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), Target(target)
{
    // std::cout << this->getName() << " constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): Form("ShrubberyCreationForm", 145, 137)
{
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& obj)
{
    return *this;
    (void) obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << this->getName() << " slaughtered\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->getIsSigned())
    {
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
        throw Form::notSignedException();
    }
    std::cout << "Makes some drilling noises\n";
    srand(time(NULL));
    if (rand() % 2)
        std::cout << this->Target << " has been robotomized successfully\n";
    else
        std::cout << this->Target << "Faillure\n";
}