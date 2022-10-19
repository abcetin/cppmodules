#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	zombie = zombieHorde(10, "Abdullah");
	delete[] zombie;
}