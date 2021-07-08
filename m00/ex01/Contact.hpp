/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:37:58 by anassif           #+#    #+#             */
/*   Updated: 2021/07/08 17:35:33 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOKIAPILL_H
#define NOKIAPILL_H

#include <iostream>

class Contact{
    private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    public:
    Contact(){};
    Contact(int i, std::string first, std::string last, std::string nick){
        index = i;
        first_name = first;
        last_name = last;
        nickname = nick;
    };
    ~Contact(){};
};

#endif