/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:44:03 by anassif           #+#    #+#             */
/*   Updated: 2021/10/10 15:59:12 by anassif          ###   ########.fr       */
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

Convert::Convert(const Convert& obj)
{
    *this = obj;
}

Convert& Convert::operator = (const Convert& obj)
{

	Value = obj.getValue();
    return *this;
}

std::string Convert::getValue() const
{
    return (this->Value);
}

void	Convert::setValue(std::string value)
{
    this->Value = value;
}

void    print_it()
{
    
}

// taouil algo


Convert::operator char()
{
	char c;
	try {
		if (std::stoi(Value) < 0 || std::stoi(Value) > 255)
			throw NotPrintableException();
		c = std::stoi(Value);
		if (std::isprint(c))
			std::cout << "char: '"<<c<<"'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	} catch (std::exception &e) {
		std::cout << "char: impossible" << std::endl;
	}
	return c;
}

Convert::operator int ()
{
	try
	{
		int i = std::stoi(this->Value);
		std::cout << "int: " << i << std::endl;
		return i;
	} catch (std::exception &e) {
		std::cout << "int: impossible" << std::endl;
	}
	return 0;
}

Convert::operator float()
{
	try {
		float f = std::stof(Value);
		if (f != (int)f)
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
		return f;
	} catch (std::exception &e) {
		std::cout << "float: impossible" << std::endl;
	}
	return 0;
}

Convert::operator double()
{
	try {
		double d = std::stod(Value);
		if (d != (int)d)
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: " << d << ".0"<<std::endl;
	} catch (std::exception &e) {
		std::cout << "double: impossible" << std::endl;
	}
	return 0;
}

void	Convert::print_it()
{
	(void)static_cast<char>(*this);
	(void)static_cast<int>(*this);
	(void)static_cast<float>(*this);
	(void)static_cast<double>(*this);
	
}

const char* Convert::NotPrintableException::what() const throw()
{
    return ("impossible\n");
}