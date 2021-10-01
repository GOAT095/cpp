/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:55:48 by anassif           #+#    #+#             */
/*   Updated: 2021/09/30 19:31:20 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"
#include "Brain.hpp"

class Animal{

    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& obj);
        Animal& operator = (const Animal& obj);
        virtual ~Animal();
        virtual void   makeSound() const = 0;
        std::string   getType() const;  
    private:
       
};

class Dog : public Animal
{

    private:
        std::string type;
        Brain       *brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& obj);
        Dog& operator = (const Dog& obj);
        ~Dog();
        
        void            makeSound() const;
        std::string     getIdea(int position) const;
        void            setIdea(int i, std::string idea);
};

class Cat : public Animal
{

    private:
        std::string type;
        Brain       *brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj);
        ~Cat();
        
        void            makeSound() const;
        std::string     getIdea(int position) const;
        void            setIdea(int i, std::string idea);
};
