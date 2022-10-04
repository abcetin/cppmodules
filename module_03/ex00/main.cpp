#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap hero("Abdullah");

	hero.attack("Mete");
	hero.takeDamage(9);
	hero.beRepaired(1);
	hero.beRepaired(1);
	hero.attack("Mete");
	hero.attack("Mete");
	hero.attack("Mete");
	hero.attack("Mete");
	hero.attack("Mete");
	hero.attack("Mete");
	hero.takeDamage(1);
	hero.beRepaired(1);
	hero.beRepaired(1);
	hero.attack("Mete");
	hero.attack("Mete");
	hero.attack("Mete");
	hero.attack("Mete");
}