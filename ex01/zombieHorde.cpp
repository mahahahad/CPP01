#include "Zombie.hpp"

/**
 * @brief Creates a list of N zombies with the provided name.
 *
 * @param N The number of zombies in the horde
 * @param name The name of each zombie
 * @return Zombie* The horde of zombies
 */
Zombie  *zombieHorde(int N, string name) {
    Zombie  *horde = new Zombie[N];
    int     i = 0;

    while (i < N) {
        horde[i++].setName(name);
    }
    return (horde);
}
