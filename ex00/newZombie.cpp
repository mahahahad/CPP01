#include "Zombie.hpp"

/**
 * @brief Creates a zombie with the provided name and returns it.
 *
 * @param name The name of the zombie to create
 * @return Zombie* The create zombie
 */
Zombie  *newZombie(string name) {
    Zombie *zombieInstance = new Zombie(name);

    return (zombieInstance);
}
