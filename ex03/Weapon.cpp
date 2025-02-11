/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:22:36 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 20:20:47 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type): type(type) {}

const string    &Weapon::getType() {
    return (type);
}

void    Weapon::setType(string newType) {
    type = newType;
}
