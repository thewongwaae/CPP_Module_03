#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("nameless_clap_trap")
{
	_name = "nameless";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_attk = FragTrap::_attk;
	std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_trap") {
	_name = name;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_attk = FragTrap::_attk;
	std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << _name << " deconstructed" << std::endl; 
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &assign ) {
	this->_name = assign._name + "_clap_trap";
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;
	return (*this);
}

void DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ) {
	std::cout	<< "I am a DiamondTrap named " << _name
				<< " derived from the ClapTrap named " << ClapTrap::_name
				<< std::endl;
}
