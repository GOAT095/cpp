/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:10:45 by anassif           #+#    #+#             */
/*   Updated: 2021/10/05 23:28:03 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "********** test Form grade range ********\n";
    try{
        Form f1("F1", 1, 150);
        std::cout << f1;
        Form f2("F2", 1, 0);
        std::cout << f2;
    } catch (std::exception &e){
        std::cout << e.what();
    }

    std::cout << "********** test Form and bureaucrat asignation ********\n";
    try{
        Bureaucrat b1("B1", 5);
        std::cout << b1;
        Form f1("F1", 10, 5);
        std::cout << f1;
        f1.beSigned(b1);
        b1.signForm(f1);
        std::cout << f1;
    } catch (std::exception& e){
        std::cout << e.what();
    }

    std::cout << "********** test Form and bureaucrat wrong asignation ********\n";
    try{
        Bureaucrat b1("B1", 5);
        std::cout << b1;
        Form f1("F1", 10, 5);
        std::cout << f1;
        f1.beSigned(b1);
        std::cout << f1;
        b1.signForm(f1);
    } catch (std::exception& e){
        std::cout << e.what();
    }

    std::cout << "********** test Form and bureaucrat wrong asignation 2 ********\n";
    try{
        Bureaucrat b1("B1", 5);
        std::cout << b1;
        Form f1("F1", 3, 5);
        std::cout << f1;
        f1.beSigned(b1);
        std::cout << f1;
        b1.signForm(f1);
    } catch (std::exception& e){
        std::cout << e.what();
    }
}
