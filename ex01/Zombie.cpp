#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
     return (this->_name);
}

void Zombie::setName(std::string newName)
{
    this->_name = newName;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}
