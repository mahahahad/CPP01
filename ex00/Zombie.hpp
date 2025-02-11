/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:43:49 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 11:54:21 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Zombie {
    public:
        Zombie(string zombieName);
        ~Zombie();
        void    announce( void );
        
        private:
        string  name;
    };
    
Zombie* newZombie( string name );
void    randomChump( string name );
