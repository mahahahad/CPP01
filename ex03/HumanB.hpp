/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:22:46 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 20:34:19 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(string name);
        void    setWeapon( Weapon &newWeapon );
        void    attack(void);
    private:
        string  name;
        Weapon  *weapon;
};
