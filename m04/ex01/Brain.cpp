/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:26:56 by anassif           #+#    #+#             */
/*   Updated: 2021/09/29 19:47:55 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called\n";
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain Copy constructor called\n";
    *this = obj;
}

Brain& Brain::operator = (const Brain& obj)
{
    std::cout << "Brain Assignement constructor called\n";
    for(int i = 0 ; i < 100 ; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called\n";
}

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}

std::string Brain::getIdea(int i)
{
    return this->ideas[i];
}