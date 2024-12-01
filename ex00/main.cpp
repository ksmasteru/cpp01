#include <iostream>
#include <string>
#include "Zombie.hpp"

int main()
{
    Zombie random("heha");
    random.announce();
    Zombie*  ho = random.newZombie("ho");
    ho->announce();
    delete ho;
}
