#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor" << std::endl;
	this->name = "Abdullah";
	this->attackDamage = 30;
	this->hitPoints = 100;
	this->energyPoint = 100;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap constructor" << std::endl;
	this->name = name;
	this->attackDamage = 30;
	this->hitPoints = 100;
	this->energyPoint = 100;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	std::cout << "FragTrap Copy constructor" << std::endl;
	*this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
	std::cout << "FragTrap Copy assignment operator" << std::endl;
	this->name = cpy.name;
	this->attackDamage = cpy.attackDamage;
	this->hitPoints = cpy.hitPoints;
	this->energyPoint = cpy.energyPoint;
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Virtual Destructor" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->hitPoints <= 0)
		std::cout << "High Five Guys" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoint)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing "
				  << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint -= this->energyPoint / 10;
	}
	else
		std::cout << "Low energy level " << this->energyPoint << " can not attack " << std::endl;
}