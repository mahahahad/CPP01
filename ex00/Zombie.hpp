#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Zombie {
    public:
        Zombie( string zombieName );
        ~Zombie();
        void    announce( void );

    private:
        string  name;
    };

Zombie* newZombie( string name );
void    randomChump( string name );

#endif
