/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:02:14 by anassif           #+#    #+#             */
/*   Updated: 2021/09/20 21:14:41 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
    int i;
    static const int j = 8;
public:
    Fixed();
    Fixed(Fixed const &test);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const i);
    Fixed &operator=(Fixed const &obj);
};