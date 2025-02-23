#include "Zombie.hpp"

int main(void) {
    int     N = 10;
    int     i = 0;
    string  name = "Jeff";
    Zombie  *horde = zombieHorde(N, name);

    cout << "Allocated " << N << " zombies in a horde with the name " << name << std::endl;
    while (i < N) {
        horde[i++].announce();
    }

    delete [] horde;
    return (0);
}
