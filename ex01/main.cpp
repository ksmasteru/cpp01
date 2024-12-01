#include "Zombie.hpp"

int main()
{
    int N;

    N = 5;
    Zombie random("radom");
    Zombie* zombieHorde = random.zombieHorde(N, "fuuha");
    if (!zombieHorde)
        return (0);
    for (int i = 0 ; i < N ; i++)
            zombieHorde[i].announce();
    delete [] zombieHorde;
}
