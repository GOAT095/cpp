/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:02:14 by anassif           #+#    #+#             */
/*   Updated: 2021/09/21 23:01:20 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int i;
    static const int j = 8;
public:
    Fixed();
    Fixed(Fixed const &test);
    Fixed(const int i);
    Fixed(const float i);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const i);

    float toFloat(void) const;
    int toInt(void) const;

    Fixed &operator = (Fixed const &test);

    Fixed operator * (Fixed const &test) const;
    Fixed operator + (Fixed const &test) const;
    Fixed operator / (Fixed const &test) const;
    Fixed operator - (Fixed const &test) const;
    
    bool operator < (Fixed const &test) const;
    bool operator > (Fixed const &test) const;
    bool operator >= (Fixed const &test) const;
    bool operator <= (Fixed const &test) const;
    bool operator == (Fixed const &test) const;
    bool operator != (Fixed const &test) const;
    
    static Fixed min(Fixed const &obj, Fixed const &obj2);
    static Fixed max(Fixed const &obj, Fixed const &obj2);

    Fixed operator++(int);
    Fixed operator++(void);
    Fixed operator--(int);
    Fixed operator--(void);
};


std::ostream &operator<<(std::ostream & o, Fixed const &rhs);