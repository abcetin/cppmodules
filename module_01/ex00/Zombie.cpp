#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return(newZombie);
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

