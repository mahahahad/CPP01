#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

class Weapon {
    public:
        Weapon( string type );
        const string    &getType( void );
        void            setType( string type );
    private:
        string          type;
};

#endif
