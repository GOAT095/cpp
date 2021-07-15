#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "zombie :" << this->_name << " boom" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->_name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name)
{
    this->_name = name;
}