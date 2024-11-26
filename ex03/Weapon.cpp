#include "Weapon.hpp"
#include  <iostream>

Weapon::Weapon()
{
    this->_type = "Unnamed Weapon";
}

std::string const & Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(const std::string& newType)
{
	this->_type = newType;
}

Weapon::Weapon(const std::string& newType)
{
	this->_type = newType;
}

