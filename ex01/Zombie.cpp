#include "Zombie.hpp"

void    Zombie::setName(string zombieName) {
    name = zombieName;
}

void    Zombie::announce(void) {
    cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    cout << name << ": Destroyed" << std::endl;
}
