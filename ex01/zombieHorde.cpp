/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:32:10 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 11:57:07 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a list of N zombies with the provided name.
 * 
 * @param N The number of zombies in the horde
 * @param name The name of each zombie
 * @return Zombie* The horde of zombies
 */
Zombie  *zombieHorde(int N, string name) {
    Zombie  *horde = new Zombie[N];
    int     i = 0;

    while (i < N) {
        horde[i++].setName(name);
    }
    return (horde);
}
