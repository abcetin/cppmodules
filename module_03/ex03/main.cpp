#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap die("furkan");

	die.whoAmI();
	
	std::cout <<"\n-------------------------\n";
	
	die.attack("Mete");
	die.takeDamage(10);
	die.takeDamage(10);
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.attack("Mete");
	die.takeDamage(10);
	die.guardGate();
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