/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:21:51 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 20:20:48 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

class Weapon {
    public:
        Weapon( string type );
        const string    &getType( void );
        void            setType( string type );
    private:
        string          type;
};
