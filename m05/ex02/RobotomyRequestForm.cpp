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
    this->setSigne(obj.isSigned());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << this->getName() << " slaughtered\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->isSigned())
    {
        std::cout << this->getName() << " cannot be executed ";
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
    }
}