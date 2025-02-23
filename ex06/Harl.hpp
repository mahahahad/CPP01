#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

using std::cout;
using std::endl;

class	Harl {
	public:
		void	complain( std::string level );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
