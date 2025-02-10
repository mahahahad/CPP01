/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:43:48 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/10 21:43:48 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string zombieName) {
    name = zombieName;
}

void Zombie::announce(void) {
    cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    cout << name << ": Destroyed" << std::endl;
}
