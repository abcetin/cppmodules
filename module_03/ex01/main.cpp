#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap serena("Abdullah");

	serena.attack("Mete");
	serena.guardGate();
	serena.takeDamage(10);
	serena.takeDamage(10);
	serena.attack("Mete");
	serena.attack("Mete");
	serena.attack("Mete");
	serena.attack("Mete");
	serena.attack("Mete");
	serena.guardGate();
	serena.takeDamage(10);
	serena.takeDamage(10);
	serena.takeDamage(10);
	serena.attack("Mete");
	serena.attack("Mete");
	serena.attack("Mete");
	serena.beRepaired(10);
	serena.beRepaired(10);
	
	
}