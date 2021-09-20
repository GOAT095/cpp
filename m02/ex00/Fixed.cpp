/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:06:48 by anassif           #+#    #+#             */
/*   Updated: 2021/09/20 21:19:29 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->i = 0;
    std::cout << "Default constructor called\n";
}
Fixed::Fixed(Fixed const &test)
{
    *this = test;
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "destructor called \n";
}

Fixed &Fixed::operator=(Fixed const &test)
{
    std::cout << "Assignation operator called\n";
    this->i = test.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return this->i;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called\n";
    this->i = raw;
}