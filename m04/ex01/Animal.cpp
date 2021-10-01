/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:11:16 by anassif           #+#    #+#             */
/*   Updated: 2021/10/01 12:58:39 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Animal stuff

Animal::Animal()
{
    std::cout << "Animal default constractor was called\n";
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal type constractor was called\n";
}
Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << "Animal copy constractor was called\n";
}
Animal &Animal::operator = (const Animal& obj)
{
    this->type = obj.type;
    return *this;
    std::cout << "Animal assignement constractor was called\n";
}
Animal::~Animal()
{
    std::cout << "animal was slaughtered\n";
}
void Animal::makeSound() const
{
    std::cout << "wich animal stoopid\n";
}
std::string Animal::getType() const
{
    return this->type;
}

//Dog stuff

Dog::Dog(): Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog default constractor was called\n";
}

Dog::Dog(std::string type): Animal(type)
{
    this->brain = new Brain();
    std::cout << "Dog type constractor was called\n";
}

Dog::Dog(const Dog& obj)
{
    *this = obj;
    std::cout << "Dog copy constractor was called\n";
}

Dog &Dog::operator = (const Dog& obj)
{
    std::cout << "Dog assignement constractor was called\n";
    if (this->brain != NULL)
        delete brain;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdea(i, obj.brain->getIdea(i));
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog was slaughtered\n";
}
void Dog::makeSound() const
{
    std::cout << "Woooof\n";
}

void    Dog::setIdea(int i, std::string idea) {
    this->brain->setIdea(i, idea);
}

std::string Dog::getIdea(int position) const {
    return (this->brain->getIdea(position));
}

//Cat stuff

Cat::Cat(): Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat default constractor was called\n";
}
Cat::Cat(std::string type): Animal(type)
{
    this->brain = new Brain();
    this->type = type;
    std::cout << "Cat type constractor was called\n";
}
Cat::Cat(const Cat& obj)
{
    *this = obj;
    std::cout << "Cat copy constractor was called\n";
}

Cat &Cat::operator = (const Cat& obj)
{
    std::cout << "Cat assignement constractor was called\n";
    if (this->brain != NULL)
        delete brain;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
    {
        this->brain->setIdea(i, obj.brain->getIdea(i));
    }
    return *this;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat was slaughtered\n";
}

void Cat::makeSound() const
{
    std::cout << "Miaaaoooo\n";
}

std::string     Cat::getIdea(int position) const {
    return (this->brain->getIdea(position));
}

void            Cat::setIdea(int i, std::string idea) {
    this->brain->setIdea(i, idea);
}