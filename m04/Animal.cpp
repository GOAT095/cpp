/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:11:16 by anassif           #+#    #+#             */
/*   Updated: 2021/09/28 15:14:15 by anassif          ###   ########.fr       */
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
Animal::Animal(const Animal& Animal)
{
    *this = Animal;
    std::cout << "Animal copy constractor was called\n";
}
Animal &Animal::operator = (const Animal& Animal)
{
    this->type = Animal.type;
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
    std::cout << "Dog default constractor was called\n";
}

Dog::Dog(std::string type): Animal(type)
{
    std::cout << "Dog type constractor was called\n";
}
Dog::Dog(const Dog& obj)
{
    *this = obj;
    std::cout << "Dog copy constractor was called\n";
}
Dog &Dog::operator = (const Dog& obj)
{
    this->type = obj.type;
    return *this;
    std::cout << "Dog assignement constractor was called\n";
}
Dog::~Dog()
{
    std::cout << "Dog was slaughtered\n";
}
void Dog::makeSound() const
{
    std::cout << "Woooof\n";
}

//Cat stuff

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat default constractor was called\n";
}
Cat::Cat(std::string type): Animal(type)
{
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
    this->type = obj.type;
    return *this;
    std::cout << "Cat assignement constractor was called\n";
}
Cat::~Cat()
{
    std::cout << "Cat was slaughtered\n";
}
void Cat::makeSound() const
{
    std::cout << "Miaaaoooo\n";
}

