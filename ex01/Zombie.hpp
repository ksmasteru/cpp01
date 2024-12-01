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
	Zombie* zombieHorde(int N, std::string name);
	void	randomChump(std::string name);
	void	announce(void) const;
    // Setters
    void setName(std::string newName);
    // Getters
    std::string getName();
};
