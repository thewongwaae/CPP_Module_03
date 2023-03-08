#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	_name = "nameless";
	_hp = 100;
	_ep = 50;
	_attk = 20;
	std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	_name = name;
	_hp = 100;
	_ep = 50;
	_attk = 20;
	std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << _name << " deconstructed" << std::endl; 
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy) {
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &assign ) {
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;
	return (*this);
}

void ScavTrap::attack( const std::string &target ) {
	if (_ep == 0)
	{
		std::cout	<< "ScavTrap " << _name
					<< " is too tired to attack..." << std::endl;
		return ; 
	}
	if (_hp == 0)
		return ;
	std::cout	<< "ScavTrap " << _name
				<< " attacks " << target
				<< ", dealing " << _attk
				<< " points of damage!" << std::endl;
	_ep--;
}

void ScavTrap::guardGate( void ) {
	std::cout 	<< "ScavTrap " << _name
				<< " has entered Gate Keeper mode" << std::endl;
}
