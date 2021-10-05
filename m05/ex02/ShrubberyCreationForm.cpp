/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:50:18 by anassif           #+#    #+#             */
/*   Updated: 2021/10/05 13:51:33 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm Default constructor\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), Target(target)
{
    // std::cout << this->getName() << " constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
    *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& obj)
{
    this->setExecGrade(obj.getExecGrade());
    this->setSignGrade(obj.getSignGrade());
    this->setIsSigned(obj.getIsSigned());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << this->getName() << " dead\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->getIsSigned())
    {
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
        throw Form::notSignedException();
    }
    std::ofstream output;
    output.open(this->Target + "_shrubbery");
    output << "                  * * \n";
    output << "           *    *  *  \n";
    output << "      *  *    *     *  * \n";
    output << "     *     *    *  *    * \n";
    output << " * *   *    *    *    *   * \n";
    output << " *     *  *    * * .#  *   * \n";
    output << " *   *     * #.  .# *   * \n";
    output << "  *     \"#.  #: #\" * *    * \n";
    output << " *   * * \"#. ##\"       * \n";
    output << "   *       \"### \n";
    output << "             \"## \n";
    output << "              ##. \n";
    output << "              .##: \n";
    output << "              :### \n";
    output << "              ;### \n";
    output << "            ,####. \n";
    output << "/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\ \n";
    output.close();
}

// std::ostream &operator<<(std::ostream & o, ShrubberyCreationForm const &obj)
// {
//     o << obj.getName() << ", signed ? : " << obj.getIsSigned() << " sign grade: " << obj.getSignGrade() <<".\n";;
//     return o;
// }