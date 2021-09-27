/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:11:16 by anassif           #+#    #+#             */
/*   Updated: 2021/09/27 16:04:58 by anassif          ###   ########.fr       */
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
Dog::Dog(const Dog& Dog)
{
    *this = Dog;
    std::cout << "Dog copy constractor was called\n";
}
Dog &Dog::operator = (const Dog& Dog)
{
    this->type = Dog.type;
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
std::string Dog::getType() const
{
    return this->type;
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
Cat::Cat(const Cat& Cat)
{
    *this = Cat;
    std::cout << "Cat copy constractor was called\n";
}
Cat &Cat::operator = (const Cat& Cat)
{
    this->type = Cat.type;
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
std::string Cat::getType() const
{
    return this->type;
}

