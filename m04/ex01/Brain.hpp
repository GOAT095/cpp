/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:27:03 by anassif           #+#    #+#             */
/*   Updated: 2021/09/29 17:27:59 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "iomanip"
#include "iostream"

class   Brain
{
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator = (const Brain& animal);
        ~Brain();
        void setIdea(int i, std::string idea);
        std::string getIdea(int i);

    protected:
        std::string ideas[100];
};
