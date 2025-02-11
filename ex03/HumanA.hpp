/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:22:41 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 20:19:43 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {
    public:
        HumanA( string name, Weapon &weapon );
        void attack( void );
    private:
        string name;
        Weapon &weapon;
};
