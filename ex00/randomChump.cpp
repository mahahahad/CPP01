#include "Zombie.hpp"

void    randomChump(string name) {
    Zombie zombieInstance(name);
    zombieInstance.announce();
}
