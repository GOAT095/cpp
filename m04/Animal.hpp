/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:55:48 by anassif           #+#    #+#             */
/*   Updated: 2021/09/27 16:04:17 by anassif          ###   ########.fr       */
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
        Animal(const Animal& Animal);
        Animal& operator = (const Animal& Animal);
        ~Animal();
        
        void   makeSound() const;
        std::string   getType() const;  
};

class Dog : public Animal
{

    private:
        std::string type;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Animal& Dog);
        Dog& operator = (const Dog& Dog);
        ~Dog();
        
        void    makeSound() const;
        std::string            std::string   getType() cons() const;  
};

class Cat : public Animal
{

    private:
        std::string type;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Animal& DCatog);
        Cat& operator = (const Cat& Cat);
        ~Cat();
        
        void    makeSound() const;
        std::string   Get_type() const;
};