/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:27:03 by anassif           #+#    #+#             */
/*   Updated: 2021/09/29 18:13:03 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "iostream"

class   Brain
{
    protected:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator = (const Brain& obj);
        ~Brain();
        void setIdea(int i, std::string idea);
        std::string getIdea(int i);

    
};
