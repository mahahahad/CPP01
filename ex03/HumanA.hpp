#pragma once
#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
    public:
        HumanA( string name, Weapon& weapon );
        void attack( void );
    private:
        string	name;
        Weapon&	weapon;
};

#endif
