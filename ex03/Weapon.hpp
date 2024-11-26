#pragma once

#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(const std::string& newType);
		Weapon();
		std::string const &getType() const;
		void	setType(const std::string& newType);
};
