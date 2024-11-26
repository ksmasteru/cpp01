#include "Weapon.hpp"
#include  <iostream>

Weapon::Weapon()
{
	std::cout << "Weapon constuctor have been called" << std::endl;
	std::cout << "Constructed weapon name is " << this->getType() << std::endl;
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
	std::cout << "Weapon called" << std::endl;
}

// copy constructor

Weapon::Weapon(Weapon& rhs)
{
	std::cout << "copy constructor of weapon has been called" << std::endl;
	this->_type = rhs.getType();
}

Weapon& Weapon::operator=(Weapon& rhs)
{
	std::cout << "copy assignemt of weapon has been called" << std::endl;
	this->_type = rhs.getType();
	return *this;
}