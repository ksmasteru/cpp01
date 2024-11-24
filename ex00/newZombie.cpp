#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::newZombie(std::string name)
{
 	Zombie  *clone;

	clone = new Zombie(name);
	return (clone);
}