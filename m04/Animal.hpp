/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:55:48 by anassif           #+#    #+#             */
/*   Updated: 2021/09/28 15:28:33 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

class Animal{

    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& obj);
        Animal& operator = (const Animal& obj);
        ~Animal();
        
        virtual void   makeSound() const;
        std::string   getType() const;  
};

class Dog : public Animal
{

    private:
        std::string type;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& obj);
        Dog& operator = (const Dog& obj);
        ~Dog();
        
        void    makeSound() const;
};

class Cat : public Animal
{

    private:
        std::string type;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj);
        ~Cat();
        
        void    makeSound() const;
};

// wrong animal part

class WrongAnimal{

    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator = (const WrongAnimal& obj);
        ~WrongAnimal();
        
        virtual void   makeSound() const;
        std::string   getType() const;
};

