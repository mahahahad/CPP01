#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Zombie {
    public:
        ~Zombie();
        void    announce( void );
        void    setName( string name );

    private:
        string  name;
    };

Zombie* zombieHorde( int N, string name );

#endif
