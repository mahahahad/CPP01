#pragma once
#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB( string name );
        HumanB( string name, Weapon &weapon );
        void    setWeapon( Weapon &newWeapon );
        void    attack( void );
    private:
        string  name;
        Weapon  *weapon;
};

#endif
