#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie(void);
        void announce( void );
        void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
