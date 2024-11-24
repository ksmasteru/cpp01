#pragma once

#include <string>

class Zombie
{
	private:
	std::string _name;
 	
	public:
	Zombie();
	~Zombie();
 	Zombie(std::string name);
 	Zombie* newZombie(std::string name);
	static Zombie* zombieHorde(int N, std::string name); // static ?
	void	randomChump(std::string name); // static ?
	void	announce(void) const;
};