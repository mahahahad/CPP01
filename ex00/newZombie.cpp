/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:43:53 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/10 21:43:53 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a zombie with the provided name and returns it.
 * 
 * @param name The name of the zombie to create
 * @return Zombie* The create zombie
 */
Zombie  *newZombie(string name) {
    Zombie *zombieInstance = new Zombie(name);

    return (zombieInstance);
}
