#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("abdullah");
	zombie->announce();
	delete zombie;
	randomChump("deniz");
	return(0);
}