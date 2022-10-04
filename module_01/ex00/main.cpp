#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("abdullah");
	zombie->announce();
	zombie->~Zombie();
	randomChump("deniz");
	return(0);
}