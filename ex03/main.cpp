#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon club("iron club");
    HumanA omar("omar", club);
    club.setType("blastic club");
    omar.attack();
    HumanB alex("alex");
    alex.setWeapon(club);
    club.setType("soft hand");
    alex.attack();
    Weapon cluba("silicon club");
    omar.attack();
    std::cout << club.getType() << std::endl;
}
