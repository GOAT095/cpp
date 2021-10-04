/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:10:45 by anassif           #+#    #+#             */
/*   Updated: 2021/10/04 22:43:57 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // std::cout << "*** ShrubberyCreationForm ****\n"  ;
    // try{
    //     Bureaucrat b1("B1", 3); // change the grade to test execution exception
    //     ShrubberyCreationForm f1("HOME");
    //     std::cout << f1;
    //     std::cout << b1;
    //     f1.beSigned(b1); // comment this to test signed execution exception
    //     std::cout << f1;
    //     //f1.execute(b1);
    //     b1.executeForm(f1);
    // } catch (std::exception& e){
    //     std::cout << e.what() ;
    // }

    // std::cout << "*** RobotomyRequestForm ****\n"  ;
    // try{
    //     Bureaucrat b1("B1", 3); // change the grade to test execution exception
    //     RobotomyRequestForm f1("HOME");
    //     std::cout << f1;
    //     std::cout << b1;
    //     f1.beSigned(b1); // comment this to test signed execution exception
    //     //f1.execute(b1);
    //     b1.executeForm(f1);
    // } catch (std::exception& e){
    //     std::cout << e.what() ;
    // }

    std::cout << "*** PresidentialPardonForm ****\n"  ;
    try{
        Bureaucrat b1("B1", 140); // change the grade to test execution exception
        PresidentialPardonForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        f1.beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what() ;
    }
}
