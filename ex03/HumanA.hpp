#pragma once
#include "Weapon.hpp"

class HumanA
{
	private:
	Weapon & _weapon; // should always be armed. 
	std::string _name;
	
	public:
	HumanA(const std::string &name, Weapon& newWeapon);
	std::string  const & getName() const;
	void	attack() const;
	// doesnt need setWeapon.
};
