/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:40:56 by anassif           #+#    #+#             */
/*   Updated: 2021/07/16 16:43:22 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "the adress of the string :"<< &s << std::endl;
    std::cout << "the adress of the string using stringPTR :"<< stringPTR << std::endl;
    std::cout << "the adress of the string using stringREF :"<< &stringREF << std::endl << std::endl;

    std::cout << "string using pointer   : "<< *stringPTR << std::endl;
    std::cout << "string using reference : "<< stringREF << std::endl;
    return 0;
}
