/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:55:03 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 12:00:51 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int     N = 10;
    int     i = 0;
    string  name = "Jeff";
    Zombie  *horde = zombieHorde(N, name);

    cout << "Allocated " << N << " zombies in a horde with the name " << name << std::endl;
    while (i < N) {
        horde[i++].announce();
    }

    delete [] horde;
    return (0);
}
