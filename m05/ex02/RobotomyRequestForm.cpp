#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Default constructor\n";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), Target(target)
{
    std::cout << this->getName() << " constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& obj)
{
    this->setExecGrade(obj.getExecGrade());
    this->setSignGrade(obj.getSignGrade());
    this->setIsSigned(obj.getIsSigned());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << this->getName() << " slaughtered\n";
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
    if (rand() % 100 < 50)
        std::cout << this->Target << " has been robotomized successfully\n";
    else
        std::cout << this->Target << "Faillure\n";
}