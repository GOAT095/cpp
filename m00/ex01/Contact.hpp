/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:37:58 by anassif           #+#    #+#             */
/*   Updated: 2021/07/08 22:44:09 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_H
#define Contact_H

#include <iostream>
#include <string>

class Contact{
    private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    public:
    Contact();
    Contact(int i, std::string first, std::string last, std::string nick){
        index = i;
        first_name = first;
        last_name = last;
        nickname = nick;
    };
    ~Contact();
    const std::string &get_first_name(void)
    {
        return first_name;
    }
    void    set_first_name(const std::string first_name);
    int get_index(void)
    {
        return (index);
    }
    void set_index(int index)
    {
        this->index = index;
    }
};

#endif