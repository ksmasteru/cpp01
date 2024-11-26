#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
	Weapon* _weapon; // AGGREAGATION + might mot always be armed.
	std::string _name;
	
	public:
	HumanB(const std::string &name);
	std::string  const & getName() const;
	void	attack() const;
	void	setWeapon(Weapon& new_weapon);
};
