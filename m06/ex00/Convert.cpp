/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:44:03 by anassif           #+#    #+#             */
/*   Updated: 2021/10/08 00:41:41 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{

}

Convert::Convert(std::string value)
{
    Value = value;
}

Convert::Convert(const Convert& copy)
{
    *this = copy;
}

Convert& Convert::operator = (const Convert& copy)
{
    Value = copy.getValue();
    return *this;
}

std::string Convert::getValue() const
{
    return (this->Value);
}

void    setValue(std::string value)
{
    this->Value = value;
}

void    print_it()
{
    
}