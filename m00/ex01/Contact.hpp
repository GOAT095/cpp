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
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest;
    public:
    Contact();
    ~Contact();
    
    const std::string get_first_name(void);
    void    set_first_name(const std::string first_name);

    const std::string get_last_name(void);
    void    set_last_name(const std::string first_name);

    const std::string get_nickname(void);
    void    set_nickname(const std::string first_name);

    const std::string get_phone_number(void);
    void    set_phone_number(const std::string first_name);

    const std::string get_darkest(void);
    void    set_darkest(const std::string first_name);

    int get_index(void);
    void set_index(int index);

    // PrintContactInfo(Contact c,index);
};

#endif