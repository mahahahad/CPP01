#include "HumanB.hpp"

HumanB::HumanB(string name): name(name), weapon(NULL) {};

HumanB::HumanB(string name, Weapon &weapon): name(name), weapon(&weapon) {};

void    HumanB::setWeapon(Weapon &newWeapon) {
    weapon = &newWeapon;
}

void    HumanB::attack(void) {
    if (weapon)
        cout << name << " attacks with their " << weapon->getType() << endl;
    else
        cout << name << " has no weapon to attack with!" << endl;
}
