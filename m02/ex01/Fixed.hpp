/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:02:14 by anassif           #+#    #+#             */
/*   Updated: 2021/09/20 22:09:54 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int i;
    static const int j;
public:
    Fixed();
    Fixed(Fixed const &test);
    Fixed(const int i);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const i);
    Fixed &operator=(Fixed const &obj);
};