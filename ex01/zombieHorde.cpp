#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *ZombieHorde;
    try{
        ZombieHorde = new Zombie[N];
    }
    catch (std::bad_alloc& e)
    {
         std::cout << "Memmory allocation failed" << 
             e.what() << std::endl;
         return (0);
    }
    while ( i < N)
        ZombieHorde[i++].setName(name);
    return (ZombieHorde);
}
