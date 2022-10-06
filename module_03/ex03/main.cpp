#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap die("FURKAN");

	die.attack("Mete");
	die.takeDamage(10);
	die.takeDamage(10);
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.takeDamage(10);
	die.takeDamage(10);
	die.takeDamage(10);
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.highFivesGuys();
	die.takeDamage(50);
	die.highFivesGuys();
}