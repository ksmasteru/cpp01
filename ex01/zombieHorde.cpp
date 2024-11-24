#include "Zombie.hpp"
#include <string>

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *ZombieHorde;
    ZombieHorde = new Zombie[N];
    while ( i < N)
        ZombieHorde[i++].setName(name);
    return (ZombieHorde);
}