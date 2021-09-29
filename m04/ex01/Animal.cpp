/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:11:16 by anassif           #+#    #+#             */
/*   Updated: 2021/09/29 18:17:11 by anassif          ###   ########.fr       */
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
std::string Dog::getIdea(int i)
{
    return this->ideas[i];
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
std::string Cat::getIdea(int i)
{
    return this->ideas[i];
}

// wrong animal part // wrong animal part

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constractor was called\n";
}
WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal type constractor was called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
    std::cout << "WrongAnimal copy constractor was called\n";
}
WrongAnimal &WrongAnimal::operator = (const WrongAnimal& obj)
{
    this->type = obj.type;
    return *this;
    std::cout << "WrongAnimal assignement constractor was called\n";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Wronganimal was slaughtered\n";
}
void WrongAnimal::makeSound() const
{
    std::cout << "wich Wronganimal stoopid\n";
}
std::string WrongAnimal::getType() const
{
    return this->type;
}

//Dog stuff

WrongDog::WrongDog(): WrongAnimal("Dog")
{
    std::cout << "WrongDog default constractor was called\n";
}

WrongDog::WrongDog(std::string type): WrongAnimal(type)
{
    std::cout << "WrongDog type constractor was called\n";
}
WrongDog::WrongDog(const WrongDog& obj)
{
    *this = obj;
    std::cout << "WrongDog copy constractor was called\n";
}
WrongDog &WrongDog::operator = (const WrongDog& obj)
{
    this->type = obj.type;
    return *this;
    std::cout << "WrongDog assignement constractor was called\n";
}
WrongDog::~WrongDog()
{
    std::cout << "WrongDog was slaughtered\n";
}
void WrongDog::makeSound() const
{
    std::cout << "Woooof\n";
}

//Cat stuff

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constractor was called\n";
}
WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
    this->type = type;
    std::cout << "WrongCat type constractor was called\n";
}
WrongCat::WrongCat(const WrongCat& obj)
{
    *this = obj;
    std::cout << "WrongCat copy constractor was called\n";
}
WrongCat &WrongCat::operator = (const WrongCat& obj)
{
    this->type = obj.type;
    return *this;
    std::cout << "WrongCat assignement constractor was called\n";
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat was slaughtered\n";
}
void WrongCat::makeSound() const
{
    std::cout << "Miaaaoooo\n";
}