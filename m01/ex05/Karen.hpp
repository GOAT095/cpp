/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:05:50 by anassif           #+#    #+#             */
/*   Updated: 2021/07/28 16:24:24 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Karen
{
    public:
    Karen(void);
    ~Karen(void);
    void complain( std::string level );
    
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};
