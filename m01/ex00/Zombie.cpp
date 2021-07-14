#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    this->announce();
}

Zombie::~Zombie()
{
    std::cout << "zombie :" << this->_name << " boom" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->_name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}