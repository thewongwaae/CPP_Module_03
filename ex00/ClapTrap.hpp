#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_attk;

	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &copy );
		~ClapTrap( void );
		ClapTrap &operator=( const ClapTrap &assign );

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif