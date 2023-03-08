#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name) {
	_hp = 10;
	_ep = 10;
	_attk = 0;
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) {
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << _name << " deconstructed" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &assign ) {
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;
	return (*this);
}


void ClapTrap::attack( const std::string &target ) {
	if (_ep == 0)
	{
		std::cout	<< "ClapTrap " << _name
					<< " is too tired to attack..." << std::endl;
		return ; 
	}
	if (_hp == 0)
		return ;
	std::cout	<< "ClapTrap " << _name
				<< " attacks " << target
				<< ", dealing " << _attk
				<< " points of damage!" << std::endl;
	_ep--;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout	<< "ClapTrap " << _name
				<< " takes " << amount
				<< " points of damage!" << std::endl;
	if (amount >= _hp)
	{
		std::cout	<< "ClapTrap " << _name
					<< " has fainted..."
					<< std::endl;
		_hp = 0;
		return ;
	}
	_hp -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (_ep == 0)
	{
		std::cout	<< "ClapTrap " << _name
					<< " is too tired to heal itself..." << std::endl;
		return ; 
	}
	if (_hp == 0)
		return ;
	std::cout	<< "ClapTrap " << _name
				<< " healed by " << amount
				<< " points of HP!" << std::endl;
	_ep--;
}
