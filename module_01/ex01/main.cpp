#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	zombie = zombieHorde(10, "Abdullah");
	for (int i = 0; i < 10; i++)
	{
		zombie[i].~Zombie();
	}
}