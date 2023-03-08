#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	_name = "nameless";
	_hp = 100;
	_ep = 100;
	_attk = 30;
	std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	_name = name;
	_hp = 100;
	_ep = 100;
	_attk = 30;
	std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << _name << " deconstructed" << std::endl; 
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy) {
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &assign ) {
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;
	return (*this);
}

void FragTrap::highFivesGuys( void ) {
	std::cout 	<< "FragTrap " << _name
				<< " gives everyone a high five!" << std::endl;
}
