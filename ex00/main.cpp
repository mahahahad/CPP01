#include "Zombie.hpp"

int main(void) {
    cout << "Creating 'Zombie1' through randomChump function." << std::endl;
    randomChump("Zombie1");
    cout << "Creating 'Zombie2' through newZombie function.\n";
    Zombie *zombie2 = newZombie("Zombie2");
    cout << "Zombie2 is now available for use anywhere. Even its announce method can be called here." << std::endl;
    zombie2->announce();
    cout << "Zombie2 must be manually deleted because it was created on the heap." << std::endl;
    delete zombie2;
    return (0);
}
