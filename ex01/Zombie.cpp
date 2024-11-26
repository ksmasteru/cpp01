#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "Zombie has been initialized" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie has been initialized" << std::endl;
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
