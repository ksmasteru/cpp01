#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(const std::string& newName)
{
    this->_name = newName;
    this->_weapon = nullptr;
}

std::string const & HumanB::getName() const
{
    return (this->_name);
}

void    HumanB::attack() const
{
    std::cout << this->getName() << " attacks with their ";
    if (this->_weapon)
        std::cout << this->_weapon->getType() << std::endl;
    else
        std::cout << "Fist" << std::endl;
}

void    HumanB::setWeapon(Weapon& new_weapon)
{
    this->_weapon = &new_weapon;
}
