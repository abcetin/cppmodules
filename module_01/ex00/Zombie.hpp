#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump( std::string name );

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
	std::cout << this->name <<" : deleted"<< std::endl;
}

#endif