#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie* zombieHorde = Zombie::zombieHorde(std::atoi(av[1]), "fuuha");
    delete [] zombieHorde;
}