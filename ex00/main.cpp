#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap brad("Brad");
	std::string enemy = "Pitt";

	brad.attack(enemy);
	brad.takeDamage(2);
	brad.attack(enemy);
	brad.beRepaired(1);
	brad.takeDamage(7);
	brad.beRepaired(1);
	brad.beRepaired(1);
	brad.beRepaired(1);
	brad.beRepaired(1);
	brad.beRepaired(1);
	brad.beRepaired(1);
	brad.beRepaired(1);
	brad.takeDamage(10);
}