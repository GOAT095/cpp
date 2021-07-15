#include "Zombie.hpp"

int main (void)
{
    Zombie *z = zombieHorde(5, "iiiiiiii3");
    for (int i=0;i<5;i++)
    {
        z[i].announce();
    }
    delete [] z;
    return 0;
}