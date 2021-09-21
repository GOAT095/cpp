/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:01:06 by anassif           #+#    #+#             */
/*   Updated: 2021/09/21 23:07:59 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << "a " << a << std::endl;
    // std::cout << "++a " << ++a << std::endl;
    // std::cout << "a " << a << std::endl;
    // std::cout << "a++ " << a++ << std::endl;
    // std::cout << "a " << a << std::endl;
    // std::cout << "b " << b << std::endl;
    // std::cout << "max " << Fixed::max( a, b ) << std::endl;
    // std::cout << "a "<< a << std::endl;
    // std::cout << "--a "<< --a << std::endl;
    // std::cout << "a "<< a << std::endl;
    // std::cout << "a-- "<< a-- << std::endl;
    std::cout << "a "<< a << std::endl;

    if (Fixed(4) > Fixed(3))
        std::cout << "4 > 3" << std::endl;
    if (Fixed(4) < Fixed(5))
        std::cout << "4 < 5" << std::endl;
    if (Fixed(4) >= Fixed(3))
        std::cout << "4 >= 3" << std::endl;
    if (Fixed(3) <= Fixed(3))
        std::cout << "3 <= 3" << std::endl;
    if (Fixed(4) == Fixed(4))
        std::cout << "4 == 4" << std::endl;
    if (Fixed(4) != Fixed(3))
        std::cout << "4 != 3" << std::endl;
    
    std::cout << "Fixed(3) * Fixed(2.3f) " << Fixed(3) * Fixed(2.3f) << std::endl;
    std::cout << "Fixed(3) + Fixed(2.3f) " << Fixed(3) + Fixed(2.3f) << std::endl;
    std::cout << "Fixed(3) - Fixed(2.3f) " << Fixed(3) - Fixed(2.3f) << std::endl;
    std::cout << "Fixed(3) / Fixed(2.3f) " << Fixed(3) / Fixed(2.3f) << std::endl;

    std::cout << "Min -> Fixed(3) - Fixed(2.3f) " <<Fixed::min( Fixed(3), Fixed(2.3f) ) << std::endl;
    std::cout << "Max -> Fixed(3) - Fixed(2.3f) " <<Fixed::max( Fixed(3), Fixed(2.3f) ) << std::endl;

    return 0;
}