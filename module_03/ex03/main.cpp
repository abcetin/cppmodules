#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Abdullah");

	frag.attack("Mete");
	frag.takeDamage(10);
	frag.takeDamage(10);
	frag.attack("Mete");
	frag.attack("Mete");
	frag.attack("Mete");
	frag.attack("Mete");
	frag.attack("Mete");
	frag.takeDamage(10);
	frag.takeDamage(10);
	frag.takeDamage(10);
	frag.attack("Mete");
	frag.attack("Mete");
	frag.attack("Mete");
	frag.highFivesGuys();
	frag.takeDamage(50);
	frag.highFivesGuys();
}