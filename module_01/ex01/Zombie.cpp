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

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " : deleted" << std::endl;
}