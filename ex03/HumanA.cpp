#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& newWeapon) : _weapon(newWeapon)
{															//not copy asssginnemt nor 
														// copy constructor called
 	this->_name = name;
}

std::string const & HumanA::getName() const
{
	return (this->_name);	
}

void	HumanA::attack() const
{
	//<name> attacks with their <weapon type>
	 std::cout << this->getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}

