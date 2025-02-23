#include "Zombie.hpp"

Zombie::Zombie(string zombieName)
    : name(zombieName) {}

void Zombie::announce(void) {
    cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    cout << name << ": Destroyed" << std::endl;
}
