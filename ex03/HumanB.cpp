/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:22:44 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 20:40:23 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name): name(name), weapon(NULL) {};

void    HumanB::setWeapon(Weapon &newWeapon) {
    weapon = &newWeapon;
}

void    HumanB::attack(void) {
    if (weapon)
        cout << name << " attacks with their " << weapon->getType() << endl;
    else
        cout << name << " has no weapon to attack with!" << endl;
}
