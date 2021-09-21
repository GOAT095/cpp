/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:06:48 by anassif           #+#    #+#             */
/*   Updated: 2021/09/21 23:06:35 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->i = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called\n";
    this->i = (i * (1 << j));
}

Fixed::Fixed(const float i)
{
    std::cout << "Float constructor called\n";
    this->i = roundf(i * (1 << j));
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
    // std::cout << "getRawBits member function called\n";
    return this->i;
}

void Fixed::setRawBits( int const raw )
{
    // std::cout << "setRawBits member function called\n";
    this->i = raw;
}

float Fixed::toFloat(void) const
{
    return (float)(this->i / (float)(1 << this->j));
}

int Fixed::toInt(void) const
{
    return (this->i / (1 << this->j));
}

std::ostream &operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

Fixed Fixed::operator * (Fixed const &test) const
{
    return Fixed(this->toFloat() * test.toFloat());
}

Fixed Fixed::operator + (Fixed const &test) const
{
    return Fixed(this->toFloat() + test.toFloat());
}
Fixed Fixed::operator / (Fixed const &test) const
{
    return Fixed(this->toFloat() / test.toFloat());
}
Fixed Fixed::operator - (Fixed const &test) const
{
    return Fixed(this->toFloat() - test.toFloat());
}
bool Fixed::operator < (Fixed const &test) const
{
    return (this->toFloat() < test.toFloat());
}

bool Fixed::operator > (Fixed const &test) const
{
    return (this->toFloat() > test.toFloat());
}

bool Fixed::operator >= (Fixed const &test) const
{
    return (this->toFloat() >= test.toFloat());
}

bool Fixed::operator <= (Fixed const &test) const
{
    return (this->toFloat() <= test.toFloat());
}

bool Fixed::operator == (Fixed const &test) const
{
    return (this->toFloat() == test.toFloat());
}

bool Fixed::operator != (Fixed const &test) const
{
    return (this->toFloat() != test.toFloat());
}

static Fixed min(Fixed const &f1, Fixed const &f2)
{
    if (f1.toFloat() < f2.toFloat())
    {
        return (f1);
    }
    else
        return f2;
}

static Fixed min(Fixed const &f1, Fixed const &f2)
{
    if (f1.toFloat() > f2.toFloat())
    {
        return (f1);
    }
    else
        return f2;
}
