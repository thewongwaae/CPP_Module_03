#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap brad("Brad");
	ScavTrap pitt("Pitt");
	std::string enemy = "paparizzi";

	brad.attack(enemy);
	brad.takeDamage(2);
	brad.attack(enemy);
	brad.beRepaired(1);
	brad.takeDamage(7);
	pitt.attack(enemy);
	pitt.takeDamage(20);
	pitt.beRepaired(10);
	brad.beRepaired(1);
	brad.beRepaired(1);
	pitt.attack(enemy);
	pitt.attack(enemy);
}