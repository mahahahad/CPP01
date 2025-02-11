/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:22:48 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 19:38:27 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon): name(name), weapon(weapon) {};

void    HumanA::attack(void) {
    cout << name << " attacks with their " << weapon.getType() << endl;
}
