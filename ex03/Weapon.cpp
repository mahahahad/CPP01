#include "Weapon.hpp"

Weapon::Weapon(string type): type(type) {}

const string    &Weapon::getType() {
    return (type);
}

void    Weapon::setType(string newType) {
    type = newType;
}
